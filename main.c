#include <stdio.h>

int main(void) {
  int valor;
  printf("Informe um determinado valor:\n");
  scanf("%d", &valor);
  if(valor){
    printf("%d foi o valor informado", valor);
  }
  return 0;
}