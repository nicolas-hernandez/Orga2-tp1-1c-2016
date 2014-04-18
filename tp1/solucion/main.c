#include <stdio.h>
#include "trie.h"

int contar(char *teclas);

int main(void) {
	// COMPLETAR AQUI EL CODIGO
trie *t = trie_crear();
trie_agregar_palabra(t,"gato");
trie_agregar_palabra(t,"auto");
trie_agregar_palabra(t,"automata");
trie_agregar_palabra(t,"autor");
trie_agregar_palabra(t,"gorrion");


double p1 = peso_palabra("gato");
double p2 = peso_palabra("auto");
double p3 = peso_palabra("automata");
double p4 = peso_palabra("autor");
double p5 = peso_palabra("gorrion");

double turro = p1 + p2 + p3 + p4 + p5;
turro = turro / 5;
trie_imprimir(t, "./test.txt");

bool b = buscar_palabra(t, "autores");
trie *t2 = trie_construir("./test.txt");
listaP *sth = palabras_con_prefijo(t, "au");
lista_borrar(sth);
double (*funct)(char*);
funct = peso_palabra;
double res = trie_pesar(t, funct);
int c = contar("tuvieja");
trie_imprimir(t2, "./test.txt");
printf("Contar: %i \n", c);
printf("el bool dio %i \n", b);
printf("PESO TRIE:  %f \n", res);
printf("PESO Turro:  %f \n", turro);
//predecir_palabras(t, "123");
trie_borrar(t);
trie_borrar(t2);
    return 0;
}

int contar(char *teclas){
	int cantidad = 0;
	while((teclas[cantidad]) != 0){
	cantidad++; 
	}
	return cantidad;
}
