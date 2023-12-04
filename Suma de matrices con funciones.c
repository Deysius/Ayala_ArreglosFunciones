#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Con estas librerias puedo pedir numeros aleatorios
void sumaMatriz(int filas, int columnas,int matriz[filas][columnas],int matriz2[filas][columnas],int sumatriz[filas][columnas]);
//Utilizo un void, ya que no me arroja un resultado
int main(){
int filas, columnas;
srand (time(NULL));
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    //Pido al usuario que establezca la dimension de la matriz
    printf("Primera Matriz:\n");
    int matriz[filas][columnas];
    int matriz2[filas][columnas];
    int sumatriz[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j]=rand()%100 + 1;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
        //Mediante dos bucles for, puedo ir dando valores a mi matriz con numeros aleatorios
    }
    printf("Segunda Matriz:\n");
    for (int i = 0; i < filas; i++)
    {
          for (int j = 0; j < columnas; j++) {
            matriz2[i][j]=rand()%100 + 1;
            printf("%d\t", matriz2[i][j]);
        }
        printf ("\n");
        //Repito el mismo proceso
    }
    printf("Suma de matrices:\n");
    sumaMatriz(filas,columnas,matriz,matriz2,sumatriz);
    //Aqui hago el llamado de la funcion

return 0;
}
void sumaMatriz(int filas, int columnas,int matriz[filas][columnas],int matriz2[filas][columnas],int sumatriz[filas][columnas]){
for (int i = 0; i < filas; i++)
    {
          for (int j = 0; j < columnas; j++) {
            sumatriz[i][j]=matriz[i][j]+matriz2[i][j];
            printf("%d\t", sumatriz[i][j]);
        }
        printf ("\n");
        //En la funcion, establezco que la suma de las matrices, permitiendo asi llamarla en cualquier parte del codigo
    }
}


