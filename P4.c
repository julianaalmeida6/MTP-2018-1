//Juliana Santana de Almeida
// Matricula: 11721EEL012

#include <stdio.h>

int main ()

{

char bits[256];
int cum=0, i;

printf ("Digite um numero: ");
scanf ("%s", bits);
getchar();

for (i=0; bits[i] != '\0'; i++)
{
	if(bits[i] >=48 && bits[i]<=57)
	{
		bits[i]=bits[i]-'0';
		cum= cum*10 + bits[i];
	}

}

printf ("O numero digitado: %d", cum);
return 0;
}
