#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>

static int esInt(char *cadena);
static int getInt(int *pResultado);
static int myGets(char *cadena, int longitud);
static int getFloat(float *pResultado);
static int esFloat(char *cadena);
static int getDni(char *pResultado);
static int esDni(char *cadena);
static int getText(char* pResultado);
static int cargarAuto(int arr[], int size);
int esPositivo(int valor);
int esPar(int valor);
int posLibre(int valor);


























void inicalizarAppVuelos(float* precio1, float* precio2, float* km, float* pUnitarioA, float* pUnitarioL){
    *precio1 = 0;
    *precio2 = 0;
    *km = 0;
    *pUnitarioA = 0;
    *pUnitarioL = 0;
}
/**
 * @brief 
 * 
 * @param arr 
 * @param len 
 * @return int 
 */
int utn_inicializarArrNumero(int arr[], int len ){
    int i;
    int retorno = 0;
    int carga = -1;
    if(arr != NULL){
        for ( i = 0; i < len; i++)
        {
            arr[i] = carga;
            retorno = 1;
        }
        
    }
    return retorno;
}
/**
 * @brief 
 * 
 * @param arr 
 * @param len 
 * @return int 
 */
int utn_posLibreArr(int arr[], int len){
    int i;
    int retorno = -1;
    int buffer;
    if(arr != NULL && len > 0){
        for ( i = 0; i < len; i++)
        {   
            if(posLibre(arr[i])){
                buffer = i;
                retorno = buffer;
                printf("pos libre: %d\n", retorno);
                break;
            }
        }

    }
    return retorno;
}

int utn_findArrNumber(int arr[], int len, int numero){
    int i;
    int retorno = -1;
    int buffer;
    if(arr != NULL && len > 0){
        for ( i = 0; i < len; i++)
        {
            if(arr[i] == numero ){
                buffer = i;
                retorno = buffer;
                break;
            }
        }
        
    }
    return retorno;
}
///////////////////////////////////////////////////////////////////////////
/////////////////////--------VALIDADORES-----------////////////////////////
///////////////////////////////////////////////////////////////////////////
/**
 * \brief Verifica si la cadena ingresada es numerica
 * \param cadena Cadena de caracteres a ser analizada
 * \return Retorna 1 (vardadero) si la cadena es numerica y 0 (falso) si no lo es
 */

static int esFloat(char *cadena)
{
    int i = 0;
    int retorno = 0;
     if (cadena != NULL && strlen(cadena) > 0)
    {
        while (cadena[i] != '\0')
        {
            if (cadena[i] >=  '0' && cadena[i] <= '9')
            {
                retorno = 1;
                break;
            }
            i++;
        }
    }

    return retorno;
}

/**
 * @brief 
 * 
 * @param valor 
 * @return int 
 */
int posLibre(int valor){
    int retorno = 0;
    if(valor == -1){
        retorno = 1;
    }
    return retorno;
}

/**
 * \brief Verifica si la cadena ingresada es numerica
 * \param cadena Cadena de caracteres a ser analizada
 * \return Retorna 1 (vardadero) si la cadena es numerica y 0 (falso) si no lo es
 */
static int esInt(char *cadena)
{
    int i = 0;
    int retorno = 1;
    if (cadena != NULL && strlen(cadena) > 0)
    {
        while (cadena[i] != '\0')
        {
            if (cadena[i] < '0' || cadena[i] > '9')
            {
                retorno = 0;
                break;
            }
            i++;
        }
    }
    return retorno;
}
/**
 * \brief Verifica si la cadena ingresada es un numero DNI
 * \param cadena Cadena de caracteres a ser analizada
 * \return Retorna 1 (vardadero) si la cadena es numerica y 0 (falso) si no lo es
 */
static int esDni(char *cadena)
{
    int i = 0;
    int retorno = 0;
    if (cadena != NULL && strlen(cadena) > 0)
    {
        while (cadena[i] != '\0')
        {
            if(strlen(cadena) == 10){
                if(cadena[2] != '.' && cadena[6] != '.'){
                    retorno = 0;
                    break;
                }
                retorno = 1;
            }else{
                retorno = 0;
                break;
            }
            i++;
        }
    }
    return retorno;
}




