#include <stdio.h>
void mes(int numero) {
    if (numero == 1) {
    printf("Enero\n");
    } else if (numero == 2) {
    printf("Febrero\n");
    } else if (numero == 3) {
    printf("Marzo\n");
    } else if (numero == 4) {
    printf("Abril\n");
    } else if (numero == 5) {
    printf("Mayo\n");
    } else if (numero == 6) {
    printf("Junio\n");
    } else if (numero == 7) {
    printf("Julio\n");
    } else if (numero == 8) {
    printf("Agosto\n");
    } else if (numero == 9) {
    printf("Septiembre\n");
    } else if (numero == 10) {
    printf("Octubre\n");
    } else if (numero == 11) {
    printf("Noviembre\n");
    } else if (numero == 12) {
    printf("Diciembre\n");
    } else {
    printf("Numero invalido\n");
    }
}

int main() {
    int numero;
    printf("Ingrese un numero del 1 al 12: ");
    scanf("%d", &numero);
    mes(numero);
return 0;
}