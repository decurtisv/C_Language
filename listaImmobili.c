#include <stdio.h>
#include <stdlib.h>

#include "listaImmobili.h"

Lista* ricerca(Lista* l, Immobile imm){
  while(*l){
    if((*l)->dato.distanzaDalCentro < imm.distanzaDalCentro)
    break;
    
  l = (*l)->next;
  }
  return l;
}

void nuovaLista(Lista* l){
  *l = NULL;
  }
  
void insTesta(Lista* l, Immobile imm){
  Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
  aux -> dato = imm;
  aux -> next = *l;
  *l = aux;
  }
  
void insOrd(Lista* l, Immobile imm){
  l = ricerca(l, imm);
  insTesta(l,imm)
}

void stampa(Lista l){
  while(l)
    printf("%s , n°Vani: %d, Distanza: %f\n", l->dato.indirizzo, l->dato.vani, l->distanzaDalCentro);
    l = l -> next;
}
