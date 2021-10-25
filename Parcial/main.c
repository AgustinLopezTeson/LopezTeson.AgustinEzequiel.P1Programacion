#include <stdio.h>
#include <stdlib.h>
#define TAM 5
typedef struct {
int id;
char nombre[20];
char tipo;
float efectividad;

}eVacuna;



int aplicaAumento(int precio);
int reemplazarCaracteres(char cadena[],int tam , char pCaracter, char sCaracter);
int ordenarArrayVac(eVacuna vacunas[] , int tam);
int hardcodearVacunas(eVacuna vacunas[], int tam, int cant);
int main()
{
    int precio;
    float resultado;
    char cadena [21] = "Hola";
    eVacuna vacunas [TAM];


    precio = 1000;
    resultado= aplicaAumento(precio);
    printf("%.2f", resultado);


    char tipo[5] = {'a','b','b','a','b'};

    float efectividad[5] = {80,85,80,85,85};

        hardcodearVacunas(vacunas,TAM,4);





    return 0;
}


int aplicaAumento(int precio){

    float resultado;


    resultado= precio*1.05;

return resultado;
}

int reemplazarCaracteres(char cadena[],int tam,  char pCaracter,char sCaracter){

       for (int j = 0 ; j < tam; j++)
                {
                    if ( strcmp(cadena[i], pCaracter ==0)
                    {
                        pCaracter = sCaracter;

                    }


}

int ordenarArrayVac(eVacuna vacunas[], int tam)
{
    int todoOk = 0;
    eVacuna auxVacuna;
    if (vacunas != NULL && tam > 0)
    {

        todoOk = 1;

            for (int i = 0; i < tam -1; i++)
            {
                for (int j = i+1; j < tam; j++)
                {
                    if ( strcmp(vacunas[i].tipo, vacunas[j].tipo==0)
                    {
                        auxVacuna = vacunas[i];
                        vacunas[i] = vacunas[j];
                        vacunas[j] = auxVacuna;
                    }
                }
            }

    }
    return todoOk;
}

int hardcodearVacunas(eVacuna vacunas[], int tam, int cant)
{
    int contador = -1;
    if (vacunas != NULL && tam >)
    {
        contador = 0;
        for (int i = 0; i < cant;  i++)
        {

            vacunas[i].tipo = tipo[i];
            vacunas[i].efectividad = efectividad[i];

            contador++;
        }
    }
    return contador;
}
