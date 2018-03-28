%{
#include <stdio.h>
#include "sintac.h"
}%

%option yylineno

delimitador [ \t]+
nentero [0-9]+
nreal [0-9]+\.[0-9]*

%%
{delimitador}   { ECHO; }
"\n"            { return (FINLINEA_); }
"-"             { ECHO; return(OPDIF_); }
"+"             { ECHO; return (OPSUMA_); }
"*"             { ECHO; return(OPMUL_); }
{nentero}       {yylval.entero = atoi (yytext); ECHO; retur(CTE_); }
{nreal}         {yylval.real = atof (yytext); ECHO; return(CTR_); }
.               {printf("<<"); ECHO; printf(">>"); yyerror ("ERROR"); }
%%