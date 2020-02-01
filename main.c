#include <stdio.h>
#include <stdlib.h>

#include "listaImmobili.h"

int main(int argc, char* argv[]){

  Immobile imm;
  Lista l;
  FILE* f;
  
  if(argc != 2){
    printf("Errore! Il programma funziona con 1 solo parametro. Uso: %s.\n", argv[1]);
    exit(-1);
    }
  
  f = fopen(argv[1],"rb");
  
  if(argv[1] == NULL){
    printf("Errore nell'apertura file!\n");
    exit(-2);
    }
  
  nuovaLista(&l);
  
  while(fread(&imm, sizeof(Immobile), 1, f) == 1);
  
  insOrd(&l, imm);
  
  fclose(f);
  
  stampa(l);
  
}
