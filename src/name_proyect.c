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
#define ELEMENTOS 5

int main(void)
{
	int i, j;
	char nombre[ELEMENTOS][50] = {"Pedro", "Carlos", "Juan", "Ernesto", "Mario"};
	char apellido[ELEMENTOS][50] = {"Gomez", "Fernandez", "Paz", "Perez", "Lopez"};
	char auxiliar[50];
	for (i = 0; i < ELEMENTOS - 1; i++)
	{
		for (j = i + 1; j < ELEMENTOS; j++)
		{
			if (strcmp(nombre[i], nombre[j]) > 1)
			{
				strcpy(auxiliar, nombre[i]);
				strcpy(nombre[i], nombre[j]);
				strcpy(nombre[j], auxiliar);
				strcpy(auxiliar, apellido[i]);
				strcpy(apellido[i], apellido[j]);
				strcpy(apellido[j], auxiliar);
			}
		}
	}

	return EXIT_SUCCESS;
}
