%{
#include "y.tab.h"
%}

%%
[a A] {return A};
[b B] {return B};
\n    {return NL};
.     {return yytext[0]};
%%

int yywrap()
return 1;


