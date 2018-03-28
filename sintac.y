%{
#include <stdio.h>
%}

%union {
    int entero;
    float real;
}

%token YYERROR_VERBOSE

%token FINLINEA_
%token <entero> CTE_
%token <real> CTR_
%left OPDIF_ OPSUMA_
%left OPMUL_

%type <real> entero

%%
s: e FINLINEA_ {printf(" = %f \n",$1)}
e: e OPDIF_ e {$$=$1 - $3;}
 | e OPSUMA_ e {$$=$1 + $3;}
 | e OPMUL_ e {$$=$1 * $3;}
 | CTE_ {$$=$1;}
 | CTR_ {$$=$1;}
 ;
%%