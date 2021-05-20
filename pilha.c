#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define TAM_FILA 3

int pilha[TAM_FILA], ultimaPosicaoVazia=0;

void empilhar(int valor){

  if(!cheia()){
    pilha[ultimaPosicaoVazia] = valor;
    ultimaPosicaoVazia++;
  }else{
    printf("Esta pilhaa esta cheia");
  }

}

void exibir(){

  if(!vazia()){
    for(int i=0; i<ultimaPosicaoVazia; i++){
      printf("%i\n", pilha[i]);
    }
  }else{
    printf("Esta pilha esta vazia");
  }

}

int desempilhar(){

  if(!vazia()){
    int removido = pilha[ultimaPosicaoVazia-1];
        
    pilha[ultimaPosicaoVazia-1] = 0;

    ultimaPosicaoVazia--;
    return removido;
  
  }

  printf("Esta pilha esta vazia");
  return 0;
}

int vazia(){

  if(ultimaPosicaoVazia == 0){
    return 1;
  }else{
    return 0;
  }

}

int cheia(){
  
  if(ultimaPosicaoVazia == TAM_FILA){
    return 1;
  }else{
    return 0;
  }

}

void esvaziarPilha(){

  if(!vazia()){  
    
    while(!vazia()){
      desempilhar();
    }

    ultimaPosicaoVazia = 0;

    printf("Pilha Vazia!");
  }else{
    printf("Esta pilha ja esta Vazia!");
  }
}
