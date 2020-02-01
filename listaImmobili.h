#define DIM 30

typedef struct immobile{
  char indirizzo[DIM];
  int vani;
  float distanzaDalCentro;
} Immobile;

typedef struct nodo{
  Immobile dato;
  struct nodo* next;
} Nodo;

typedef Nodo* Lista;

void nuovaLista(Lista* l);
void insOrd(Lista* l, Immobile imm);

void stampa(Lista l);
