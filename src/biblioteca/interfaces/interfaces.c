#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>

/**
 * @brief crear una espera obligatoria, para cargar datos
 * 
 * @param time valor del tiempo que se quiere dejar en loading
 * @param mensaje mensaje para dejar al usuario
 */
void utn_loading(int time, char* mensaje){
    printf("%s.",mensaje);
    sleep(time);
    system("cls");
    printf("%s..",mensaje);
    sleep(time);
    system("cls");
    printf("%s...",mensaje);
    sleep(time);
}