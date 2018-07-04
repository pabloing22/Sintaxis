/* analizador léxico */


%{
#include <stdio.h>
#include<stdlib.h>
#include "sintactico.tab.h"

int linea=1;
%}

%option noyywrap
dig          [0-9]+
digito        [0-9]+"."([0-9])*
esp           -|_
identificador  {esp}*[a-zA-Z]+{esp}*{dig}*[a-zA-Z]*{dig}*{esp}*

%%

"SELECT"        {return (SELECT);}
"FROM"          {return (FROM);}
"ORDER BY"      {return (ORDERBY);}
"GROUP BY"      {return (GROUPBY);}
"ASC"           {return (ASC);}
"DESC"          {return (DESC);}
"CREATE TABLE"  {return (CREATE);}
{dig}           {return (ENTERO);}
"char"          {return (CHAR);}
"int"           {return (INT);}
"real"          {return (REAL);}
"default"       {return (DEFAULT);}
"NOT NULL"      {return(NOTNULL);}
"PRIMARY KEY"   {return (P_KEY);}
"'"             {return (COMILLA);}
"("             {return (ABREPAR);}
")"             {return (CIERRAPAR);}
"*"             {return (ASTERISCO);}
";"             {return (FIN);}
","             {return (COMA);}
"-"             {return (GMEDIO);}
"_"             {return (GBAJO);}
"."             {return (PUNTO);}


"="             {return (IGUAL);}
"<>"            {return DISTINTO;}
"<="            {return MENORIGUAL;}
">="            {return MAYORIGUAL;}
">"             {return MAYOR;}
"<"             {return MENOR;}
"WHERE"         {return WHERE;}
"OR"            {return OR;}
"AND"           {return AND;}
{digito}        {return (TIPREAL);}




{identificador} {return (ID);}
.               {}

%%
