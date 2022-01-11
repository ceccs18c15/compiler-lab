#include<stdio.h>
#include<string.h>
void gen_code_for_operator(char *imp,char oprtr,char *reg)
{
	int i=0,j=0;
	char temp[100];
	while(imp[i]!='\0')
	{
		if(imp[i]==oprtr)
		{
			printf("%c \t %c \t %c \t %c \n",oprtr,*reg,imp[i],imp[i+1]);
			temp[j-1]=*reg;
			i+=2;
			(*reg)--;
			continue;
		}
		temp[j]=imp[i];
		i++;
		j++;
	}
	temp[++j]='\0';
	strcpy(imp,temp);
}
void gen_code(char *imp)
{
	char reg='z';
	gen_code_for_operator(imp,'/',&reg);
	gen_code_for_operator(imp,'*',&reg);
	gen_code_for_operator(imp,'-',&reg);
	gen_code_for_operator(imp,'=',&reg);
}
int main()
{
	char imp[100];
	printf("Enter expression:\n\n");
	scanf("%s",imp);
	printf("operator\tDestn\top1\top2\n");
	gen_code(imp);
}


