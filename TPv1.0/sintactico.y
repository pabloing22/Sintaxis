%{

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

extern int yylex(void);
extern char *yytext;
extern int linea;
extern FILE *yyin;
void yyerror(char *s);
void para();
char s;

%}

%start SIGMA

%token SELECT
%token FROM
%token ID
%token ASTERISCO
%token COMA
%token GMEDIO
%token GBAJO
%token PUNTO
%token ORDERBY
%token ASC
%token DESC
%token FIN /* Punto y coma */

%%

SIGMA: X

X: SELECT A FROM D FIN ;

X: SELECT A FROM D ORDERBY D FIN | SELECT A FROM D ORDERBY D E FIN ;

A: ASTERISCO | ID | ID COMA B | ID PUNTO ID | ID PUNTO ID COMA B | ID PUNTO ID COMA C;

B: ID | ID COMA B | ID COMA C;

C: ID PUNTO ID | ID PUNTO ID COMA C | ID PUNTO ID COMA B ;

D: ID | ID COMA D;

E: ASC | DESC

%%


void yyerror(char *s) {

printf ("Error sintactico");

}


int main (int argc, char *argv[]) {

yyin=fopen(argv[1],"rt");


yyparse();

return 0;

}
