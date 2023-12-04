#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sumaMatriz(int filas, int columnas,int matriz[filas][columnas],int matriz2[filas][columnas],int sumatriz[filas][columnas]);
int main(){
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
    }
}


