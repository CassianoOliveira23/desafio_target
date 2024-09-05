#include <stdio.h>
#include <stdlib.h>

/* 
	1) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores 
	(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
	escreva um programa na linguagem que desejar onde, informado um n�mero,
	ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.

	IMPORTANTE: Esse n�mero pode ser informado atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definido no c�digo;

 */
 
 
 int fibonacci(int num){
 	if(num == 0 || num == 1){
 		return num;
	}else{
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
    
   
    printf("A sequ�ncia de Fibonacci at� o n�mero %d �:\n", num);
    for (i = 0; fibonacci(i) <= num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    

    if (pertence_fibonacci(num)) {
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci.\n", num);
    } else {
        printf("O n�mero %d n�o pertence � sequ�ncia de Fibonacci.\n", num);
    }

	

	return 0;
}
