//juliana santana de almeida 
//matricula:11721ELL012
#include <stdio.h>


int main()
{
	int cont=0,i,estado=0;
	char num[30];
	do
	{
		cont=0;
		printf("Digite um numero binario: ");
		scanf("%s",&num);
		for(i=0; num[i]!='\0';i++)
		{
			if(num[i]!='0' && num[i]!='1')
			    cont++;
		}
	}while(cont!=0);
	for(i=0; num[i]!='\0';i++)
	{
		if(estado==0 && num[i]=='0')
		    estado=0;
		else if(estado==0 && num[i]=='1')
		    estado=1;
		else if(estado==1 && num[i]=='1')
		    estado=0;
		else if(estado==1 && num[i]=='0')
		    estado=2;
		else if(estado==2 && num[i]=='0')
		    estado=1;
		else if(estado==2 && num[i]=='1')
		    estado=2;   
	}
	if(estado==0)
	     printf("\nO numero %s  e multiplo de 3",num);
	else     
          printf("\nO numero %s NAO e multiplo de 3",num);
    return 0;	
}
