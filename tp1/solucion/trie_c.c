#include "trie.h"
#include "listaP.h"

// Completar las funciones en C.

listaP *predecir_palabras(trie *t, char *teclas) {
	listaP *res = lista_crear;
	
	return res;
}

double peso_palabra(char *palabra) {
	
int i = 0;	
int j = 0;
	while(*palabra != 0){
	i = i + *palabra;
	j = j + 1;
	palabra = palabra + 1; 
	}
double res;
res = (double)i/(double)j;
return res;	 
}
