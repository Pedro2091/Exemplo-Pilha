#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

  empilhar(1);
  empilhar(2);
  empilhar(3);
  
  exibir();

  int itemDesempilhado = desempilhar();

  printf("\nItem %i foi desempilhado\n\n", itemDesempilhado);

  exibir();

  esvaziarPilha();

  return 0;
}