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
"ASC"           {return (ASC);}
"DESC"          {return (DESC);}
"*"             {return (ASTERISCO);}
";"             {return (FIN);}
","             {return (COMA);}
"-"             {return (GMEDIO);}
"_"             {return (GBAJO);}
"."             {return (PUNTO);}




{identificador} {return (ID);}
.               {}

%%
