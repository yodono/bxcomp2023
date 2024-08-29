#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

void solve() {
  char input[1000];
  int i = 0;
  char temp;

  /*Obtém até um \n ou \0 específico*/
  while (scanf("%c", &temp) == 1) {
    if (temp == '\n') {
      break;
    }
    if (isalnum(temp)) {
      input[i] = temp;
      i++;
    }
  }
  input[i] = '\0';
  if (input[0] != '\0') {
    int vec[10] = {0}; // índice i representa o numero de ocorrencias de um nº

    for (int i = 0; i < strlen(input); i++) {
      int numOfInput = input[i] - '0';
      vec[numOfInput] += 1;
    }

    bool hasRepetition = false;
    bool alreadyPrinted = false;

    for (int j = 0; j < 10; j++) {
      if (vec[j] % 2 == 1) {
        if (hasRepetition) {
          puts("Ocarina Ocarina");
          alreadyPrinted = true;
          break;
        } else {
          hasRepetition = true;
        }
      }
    }
    if (!alreadyPrinted) {
      puts("Na vasta densa floresta de Hyrule, por longo tempo, servi como espirito guardiao");
    }
  }
}

int main() {
  int n;
  scanf("%d", &n);
  n+=1;

  while (n--) solve();
  
  return 0;
}
