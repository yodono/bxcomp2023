#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void main() {
    int ntest;
    scanf("%d", &ntest);
    getchar();  // consome o caractere de newline
    for (int n = 0; n < ntest; n++) {
        char array_msg[14]; // 13 dígitos + 1 para o terminador nulo
        scanf("%s", array_msg);
        getchar();
        int n0 = 0;
        int n1 = 0;
        int n2 = 0;
        int n3 = 0;
        int n4 = 0;
        int n5 = 0;
        int n6 = 0;
        int n7 = 0;
        int n8 = 0;
        int n9 = 0;
        int array_int[13];
        for (int i = 0; i < 13; i++) {
            array_int[i] = array_msg[i] - '0';
        }
        int num_impares = 0;
        for (int i = 0; i < 13; i++) {
            int atual = array_int[i];
            switch (atual) {
                case 0:
                    n0++;
                    break;
                case 1:
                    n1++;
                    break;
                case 2:
                    n2++;
                    break;
                case 3:
                    n3++;
                    break;
                case 4:
                    n4++;
                    break;
                case 5:
                    n5++;
                    break;
                case 6:
                    n6++;
                    break;
                case 7:
                    n7++;
                    break;
                case 8:
                    n8++;
                    break;
                case 9:
                    n9++;
                    break;
            }
        }
        int array_qnt[10] = {n0, n1, n2, n3, n4, n5, n6, n7, n8, n9};
        for (int i = 0; i < 10; i++) {
            if(array_qnt[i] == 0) continue;
            if (array_qnt[i] % 2 != 0) num_impares++;
        }
        if (num_impares == 1)
            printf("Na vasta densa floresta de Hyrule, por longo tempo, servi como espirito guardiao\n");
        else
            printf("Ocarina Ocarina\n");
    }
}
