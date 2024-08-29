#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void main() {
    int num_testes;
    scanf("%d", &num_testes);
    for (int i = 0; i < num_testes; i++) {
        int pos_nave = -1;
        int num_meteoros_frente = 0;
        int pos_meteoro_atras = -1;
        int atual;
        for (int j = 0; j < 10; j++) {
            scanf("%d", &atual);
            if (atual == 2) pos_nave = j;
            if (atual == 1 && pos_nave == -1) pos_meteoro_atras = j;
            if (atual == 1 && pos_nave != -1) num_meteoros_frente++;
        }
        if (pos_meteoro_atras != -1 && pos_nave - pos_meteoro_atras < 10 - pos_nave)
            printf("Nu, vou tascar um beijo numa pedra do espaço se eu entrar ai, paia.\n");
        else if (num_meteoros_frente > 2)
            printf("Nu, vou tascar um beijo numa pedra do espaço se eu entrar ai, paia.\n");
        else
            printf("Explorador do espaço para base alpha, conseguimos passar pela chuva de metoros!\n");
    }
}
