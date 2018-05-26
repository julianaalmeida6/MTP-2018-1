//Juliana Santana de Almeida
//Matricula: 11721EEl012

#include<stdio.h>
int soma(int soma[20], int quant) {
	int somat=0,i=0;
	for (i=0;i<quant;i++)
	{
		somat=somat + soma[i];
	}
   return somat;
}
 float divisao(float soma, float quant)
 {
 	float media;
	media = soma / quant;
	return media;
 }

int main ()
{
	int num[20],i=0,quant=0,somaf;
	float divisaof;
	do{
		printf ("informe a quantidade de numeros de 5 a 20:  ");
		scanf("%d",&quant);getchar();
	}while(quant<5 || quant >20);
	
	printf("Digite os %d numeros inteiros:   ",quant);
	for(i=0;i<quant;i++){
		num[i]= 0;
	}
	for(i=0;i<quant;i++)
	{
		scanf("%d",&num[i]);	getchar();
	}
	somaf = soma( num,quant);
	divisaof = divisao(somaf,quant);
	printf( " ''%d '' +  ",quant);
    for(i=0;i<quant;i++){
		printf ("%d ",num[i]);
    }
    printf("  '''media = %.2f'''",divisaof );
    
    return 0;
}
