#include <stdio.h>
#include <string.h>

void vitoria() {
  puts("HADOUKEEEN");
}

void derrota() {
  puts("Uuugh Uuugh...Continue? 10, 9, 8, 7, 6, 5, 4, 3, 2, 1...");
}

void noob() {
  puts("Para de apertar qualquer coisa noob");
}

void solve() {
  char input[30];

  scanf("%s", &input);

  int aaa = strspn(input, "AWSDJK");
  if (aaa > 0 && aaa != strlen(input)) return noob();
  if (strstr(input, "ASDJ") != NULL) return vitoria();

  return derrota();
}

int main() {
  int n;
  scanf("%d", &n);

  while (n--) solve();
  
  return 0;
}
