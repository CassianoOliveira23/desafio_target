#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Sequência a incremento de 2
    int seq_a[] = {1, 3, 5, 7};
    int prox_a = seq_a[3] + 2;  
    printf("Proximo numero da sequencia a: %d\n", prox_a);

    // Sequência b  multiplicação por 2
    int seq_b[] = {2, 4, 8, 16, 32, 64};
    int prox_b = seq_b[5] * 2;
    printf("Proximo numero da sequencia b: %d\n", prox_b);

    // Sequência c próximo quadrado 
    int seq_c[] = {0, 1, 4, 9, 16, 25, 36};
    int prox_c = 7 * 7; 
    printf("Proximo numero da sequencia c: %d\n", prox_c);

    // Sequência d próximo quadrado par
    int seq_d[] = {4, 16, 36, 64};
    int prox_d = 10 * 10; 
    printf("Proximo numero da sequencia d: %d\n", prox_d);

    // Sequência e Fibonacci
    int seq_e[] = {1, 1, 2, 3, 5, 8};
    int prox_e = seq_e[4] + seq_e[5];
    printf("Proximo numero da sequencia e: %d\n", prox_e);

    // Sequência f Sequencia de numeros consecutivos
    int seq_f[] = {2, 10, 12, 16, 17, 18, 19};
    int prox_f = seq_f[6] + 1;
    printf("Proximo numero da sequencia f: %d\n", prox_f);
	
	return 0;
}
