#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 20

typedef struct carros{
	char placa[7];
	int ano;
};

carros carro[tam];

int main (void){
	setlocale(LC_ALL, "Portuguese");
	
	char temp[7], temp2[7];
	
	for (int i=0; i<tam; i++){
		printf ("\nDiga a placa do carro:  ");
		gets (carro[i].placa);
		fflush (stdin);
		printf ("\nDiga o ano do carro:  ");
		scanf ("%d", &carro[i].ano);
		fflush (stdin);
	}
	
	int i,j;
		for (i=tam-1; i>=1;i--){
			for(j=0;j<i;j++){
				if(carro[j].ano > carro[j+1].ano){
					
					for (int k=0; k<7; k++){
						temp[k] = carro[j].placa[k];
						carro[j].placa[k] = carro[j+1].placa[k];
						carro[j+1].placa[k] = temp[k];
					}
					
					int temp2;
					temp2 = carro[j].ano;
					carro[j].ano = carro[j+1].ano;
					carro[j+1].ano = temp2;
					
					
				}
			}
		}
			
	printf ("\n\nA placa do carro mais velho é %s e a do mais novo é %s", carro[0].placa, carro[19].placa);
}
