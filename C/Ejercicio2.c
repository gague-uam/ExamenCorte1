#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nombre[100];
    int precioCompra, precioVenta, existencia, ganancia, gananciaTotal;

    printf("\n Escriba el nombre del producto: ");
    scanf("%c", &nombre);
    printf("\n Escriba el precio de compra: ");
    scanf("%d", &precioCompra);
    printf("\n Escriba el precio de venta: ");
    scanf("%d", &precioVenta);
    printf("\n Escriba la cantidad de producto en existencia: ");
    scanf("%d", &existencia);

    ganancia = precioVenta - precioCompra;
    gananciaTotal = ganancia * existencia;

    printf("\n Nombre: %c", nombre);
    printf("\n Precio Compra: %d", precioCompra);
    printf("\n Precio Venta: %d", precioVenta);
    printf("\n Existencia: %d", existencia);
    printf("\n Su ganancia es igual a: %d", ganancia);
    printf("\n Su ganancia total es igual a: %d", gananciaTotal);

    return 0;
}
