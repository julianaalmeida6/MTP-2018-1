//Juliana Santana de Almeida
//Matricula:11721EEl012

#include<stdio.h>

void codificar()
{
	char str[256]={'\0'};
	int *ps, i=0;
	
	printf("\nDigite uma mensagem para codificar: ");
	gets(str);
	char *pmsg=str;
	printf("Codificada: ");
	for(i=0;str[i];i++)
	{
		ps=(int *)pmsg;
		if(ps[i]!=0)
			printf("%d",ps[i]);
		if(ps[i+1]!=0)
			printf(", ");
	}
}

void decodificar()
{
	char *p;
	int q[64], i=0;
	printf("\nColoque espaco + 0 quando finalizar a entrada de dados!");
		printf("\nDigite uma mensagem para decodificar : ");
	
	for(i=0;i<64;i++)
	{
		scanf("%d",&q[i]);
		getchar();
		p=(char *)q;
		if(q[i]==0)
		break;
	}
	printf("decodificado: ");
	printf("%s",p);
}
 
void menu()
{
	int op,saida=0;
	printf("Menu\n\n");
    printf("1. Codificar\n");
	printf("2. Decodificar\n");
	printf("3. Sair.");
	do
	{

	    inicio:
		printf ("\n\nDigite a opcao: ");
		scanf("%d",&op);
		getchar();	
		switch(op)
		{
			case 1:
				codificar();
				saida=1;
				break;
				
			case 2:
				decodificar();
				saida=2;
				break;
				
			case 3:
				saida=3;
				break;	
				
			default: 
			printf("Opcao invalida!");
				goto inicio;				
				
		}
	}while(saida!=3);
}

int main( )
{
	menu();
	return 0;
}
