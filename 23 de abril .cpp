#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CD {
    char titulo[100];
    char artista[50];
    int num_canciones;
    int Año;
    int Precio;
};
int main(void) {
    struct CD cd1;
    printf("Ingresa el título\n");
    scanf("%s", cd1.titulo);
    printf("Ingresa el artista\n");
    scanf("%49s", cd1.artista);
    printf("Ingresa el número de canciones\n");
    scanf("%d", &cd1.num_canciones);
    printf("Ingresa el año\n");
    scanf("%d", &cd1.Año);
    printf("Ingresa el precio\n");
    scanf("%d", &cd1.Precio);

    printf("Título: %s\n", cd1.titulo);
    printf("Artista: %s\n", cd1.artista);
    printf("Número de canciones: %d\n", cd1.num_canciones);
    printf("Año: %d\n", cd1.Año);
    printf("Precio: %.2d\n", cd1.Precio);

    
    return 0;
}