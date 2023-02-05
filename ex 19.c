//Receber um nome e imprimir as 4 primeiras letras do nome.

#include <stdio.h>

int main() {

  char nome[20];
  
  printf("Digite um nome:\n");
  gets(nome);

  for(int i = 0; i < 4; i++){
    printf("%c", nome[i]);
  }
  printf("\n\n");
}