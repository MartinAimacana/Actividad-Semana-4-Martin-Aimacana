#include <stdio.h>

int main() {
    int filas, columnas;

    
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    int Aimacana[filas][columnas];

   
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i == j) {
                Aimacana[i][j] = 1;  
            } else {
                Aimacana[i][j] = 0;  
            }
        }
    }

   
    printf("\nMatriz Aimacana (%d x %d):\n", filas, columnas);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", Aimacana[i][j]);
        }
        printf("\n");
    }

    return 0;
}



