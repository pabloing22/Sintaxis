%{
#include <stdio.h>
#include <stdlib.h>
#define OK 0
#define ERR -1
int linea=1;
%}
%option noyywrap
dig          [0-9]+
digito        [0-9]+"."([0-9])*
esp           -|_
identificador  {esp}*[a-zA-Z]+{esp}*{dig}*[a-zA-Z]*{dig}*{esp}*
%%
{dig}           {printf("\n\nEncontre un numero TKN_NUMENTERO \n su lexema es: %d ",atoi(yytext));}
{digito}        {printf("\n\nEncontre un numero real TKN_NUMREAL \n su lexema es: %f",atof(yytext));}
"CREATE"        {printf("\n\nSe encontro TKN_CREATE \n su lexema es: %s", yytext);}
"TABLE"         {printf("\n\nSe encontro TKN_TABLE \n su lexema es: %s", yytext);}
"STRING"        {printf("\n\nSe encontro TKN_STRING \n su lexema es: %s", yytext);}
"NUMBER"        {printf("\n\nSe encontro TKN_CREATE \n su lexema es: %s", yytext);}
"SELECT"        {printf("\n\nSe encontro TKN_SELECT \n su lexema es: %s", yytext);}
"FROM"          {printf("\n\nSe encontro TKN_FROM \n su lexema es: %s", yytext);}
"WHERE"         {printf("\n\nSe encontro TKN_WHERE \n su lexema es: %s", yytext);}
"AND"           {printf("\n\nSe encontro TKN_AND \n su lexema es: %s", yytext);}
"OR"            {printf("\n\nSe encontro TKN_OR \n su lexema es: %s", yytext);}
"GROUP"         {printf("\n\nSe encontro TKN_GROUP \n el lexema es: %s",yytext);}
"BY"            {printf("\n\nSe encontro TKN_MAYOR \n el lexema es: %s",yytext);}
"*"             {printf("\n\nSe encontro TKN_ASTERISCO su lexema es: %s",yytext);}
","             {printf("\n\nSe encontro TKN_COMA su lexema es: %s", yytext);}
{identificador} {printf("\n\nSe encontro TKN_ID \n su lexema es: %s",yytext);}
" "             {printf(" ");}
"'"             {printf("\n\nSe encontro TKN_COMILLA \n Su lexema es: %s", yytext);}
"("             {printf("\n\nSe encontro TKN_PARABIERTO \n el lexema es: %s",yytext);}
")"             {printf("\n\nSe encontro TKN_PARCERRADO \n el lexema es: %s",yytext);}
";"             {printf("\n\nSe encontro TKN_PUNTOCOMA \n el lexema es: %s",yytext);}
"."             {printf("\n\nSe encontro TKN_PUNTO \n el lexema es %s",yytext);}
"\n"            {linea++;}
[\b\t\r]        {printf(" ");}
">"             {printf("\n\nSe encontro TKN_MAYOR \n el lexema es: %s",yytext);}
"<"             {printf("\n\nSe encontro TKN_MENOR \n el lexema es: %s",yytext);}
"="             {printf("\n\nSe encontro TKN_IGUAL \n el lexema es: %s",yytext);}
">="            {printf("\n\nSe encontro TKN_MAYORIGUAL \n el lexema es: %s",yytext);}
"<="            {printf("\n\nSe encontro TKN_MENORIGUAL \n el lexema es: %s",yytext);}
"!="            {printf("\n\nSe encontro TKN_DISTINTO \n el lexema es: %s",yytext);}
.               {printf("\n\nERROR EN LINEA %i", linea);printf(" ");printf("no se reconoce %s", yytext);}
%%
int main()
{


    yylex();


    return 0;
}
