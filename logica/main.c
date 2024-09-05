#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 12;
	int soma = 0;
	int k = 1;
	
	while(k < i){
		k = k + 1;
		soma = soma + k;
	}
	
	printf("SOMA: %d", soma); //soma = 77
	return 0;
}
