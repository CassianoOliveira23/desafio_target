#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que verifique, em uma string, a exist�ncia da letra �a�, seja mai�scula ou min�scula, al�m de informar a quantidade de vezes em que ela ocorre.

IMPORTANTE: Essa string pode ser informada atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definida no c�digo; */




int main(int argc, char *argv[]) {
	
	char string[100];
	int i;
	int contador = 0;
	
	strcpy(string, "Socorram-me subi no onibus em Marrocos eh palindromo");
	
	
	for(i=0; string[i] != '\0'; i++){
		if(string[i] == 'a' || string[i] == 'A'){
			contador++;
		}
	}
	
	if(contador > 0){
		printf("\nA letra 'a' aparece %d vezes na string", contador);
	} else {
		printf("\nA letra 'a' n�o foi encontrada na string");
	}
	

	return 0;
}
