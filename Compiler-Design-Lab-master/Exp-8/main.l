
%{
    #include <stdio.h>   
%}
%%
if|else|while|int|switch|for|char|main  {printf("keyword");}
[a-z]([a-z]|[0-9])*  {printf("identifier");}
[0-9]*  {printf("number");}
.*  {printf("operator");}

%%
int main()
{
    yylex();
    return 0;
}
int yywrap()
{

}
