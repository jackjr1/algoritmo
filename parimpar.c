#include <stdlib.h>
#include <stdio.h>

int main()
{
	
	//declarando variaveis
	int n;
	
	
	//estrutura do programa
	
		printf("Digite um Numero: \n\n");
		scanf("%d", &n);
		
		 if(n % 2 == 0){
			printf("\nO numero %d e par\n\n", n);
		 }
		else
		{
			printf("\nO numero %d e impar\n\n", n);
		}
		system ("pause");
		return(0);

}