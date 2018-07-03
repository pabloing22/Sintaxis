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

%start sigma

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

%token CREATE
%token ENTERO
%token CHAR
%token INT
%token REAL
%token COMILLA
%token ABREPAR
%token CIERRAPAR
%token DEFAULT

%token FIN /* Punto y coma */

%%

sigma: y

y: CREATE ID ABREPAR m CIERRAPAR FIN ;
m: ID t ABREPAR ENTERO CIERRAPAR | ID t ABREPAR ENTERO CIERRAPAR COMA m | ID t ABREPAR ENTERO CIERRAPAR n ;
n: DEFAULT COMILLA ID COMILLA | DEFAULT COMILLA ID COMILLA COMA m ;
t: CHAR | INT | REAL ;


%%


void yyerror(char *s) {

printf ("Error sintactico");

}


int main (int argc, char *argv[]) {

yyin=fopen(argv[1],"rt");


yyparse();

return 0;

}
