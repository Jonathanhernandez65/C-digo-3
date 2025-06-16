#include <stdio.h>

int main() {
int opcion;
float a, b;

while (1) {
printf("\n1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Salir\n");
printf("Opción: ");
scanf("%d", &opcion);

if (opcion == 5) ;

printf("Ingresa dos números: ");
scanf("%f %f", &a, &b);

switch (opcion) {
case 1: printf("Resultado: %.2f\n", a + b);
case 2: printf("Resultado: %.2f\n", a - b); 
case 3: printf("Resultado: %.2f\n", a * b);
case 4:
if (b != 0)
printf("Resultado: %.2f\n", a / b);
else
printf("Error: división por cero\n");

 printf("Opción no válida\n");
}
}

return 0;
}