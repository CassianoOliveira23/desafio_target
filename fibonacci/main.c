#include <stdio.h>
#include <stdlib.h>

/* 
	1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
	(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
	escreva um programa na linguagem que desejar onde, informado um número,
	ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

	IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;

 */
 
 
 int fibonacci(int num){
 	if(num == 0 || num == 1){
 		return num;
	}
	else{
		return fibonacci(num - 1) + fibonacci(num-2);
	}
 }
 
 
 int pertence_fibonacci(int num) {
    int a = 0, b = 1, fib = 0;
    
    while (fib < num) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib == num;
}

int main(int argc, char *argv[]) {
 int i;
    int num = 21; 
    
   
    printf("A sequência de Fibonacci até o número %d é:\n", num);
    for (i = 0; fibonacci(i) <= num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    

    if (pertence_fibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

	

	return 0;
}
