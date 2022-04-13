/*
 ============================================================================
 Name        : name_proyect.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca/inputs/inputs.c"
#include "biblioteca/list/list.c"
#include "biblioteca/calc/calc.c"
#include "biblioteca/interfaces/interfaces.c"
#include "biblioteca/initializer/initializer.c"
#include "biblioteca/finds/finds.c"

int main(void) {
	int resultado;
	int pares;
	int mayorImpar;
	int posi;
	int numero[5] = {-1,-5,1,19,13};
	utn_listarInt(numero, 5);
	utn_sumarIntArr(numero, 5, &resultado);
	printf("resultado: %d", resultado);
	utn_cantidadParesArr(numero, 5, &pares);
	printf("pares:: %d", pares);
	utn_cantPositivosArr(numero, 5, &posi);
	printf("positivos: %d", posi);
	utn_mayorInparArr(numero, 5, &mayorImpar);

	printf("mayor impar: %d", mayorImpar);
	utn_loading(2, "cargando");

	return EXIT_SUCCESS;
}
