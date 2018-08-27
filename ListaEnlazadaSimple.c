#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int valor;
	struct nodo* siguiente;
	};

void insertarFinal(struct nodo** ultimo, int valor){
	struct nodo* nuevo = NULL;
	nuevo = (struct nodo*)malloc(sizeof(struct nodo));
	nuevo->valor = valor;
	nuevo->siguiente = NULL;
	if (*ultimo == NULL){
		*ultimo = nuevo;
		return;
	}
	struct nodo* ult = *ultimo;
	while (ult->siguiente != NULL)
		ult = ult->siguiente;
	ult->siguiente = nuevo;
	return;
	}

int main(){
	struct nodo* ultimo = NULL;
	insertarFinal(&ultimo, 1);		
	insertarFinal(&ultimo, 2);	
	insertarFinal(&ultimo, 3);	
	printf("Lista enlazada simple:");
		for (struct nodo* u = ultimo; u != NULL; u = u->siguiente)
		printf("%i ",u->valor);
	printf("\n");
	return 0;
	}
