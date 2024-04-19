#include <stdio.h>

double calcularPrecioTotal(double precio, double descuento, double impuesto) {
    double precioTotal = precio + (precio * impuesto / 100);

    if (precio > 25000) {
        precioTotal -= (precioTotal * descuento / 100);
    }

    return precioTotal;
}

int main() {
    double precio = 30000;
    double impuesto = 15;
    double descuento = 5;

    double precioTotal = calcularPrecioTotal(precio, descuento, impuesto);

    printf("El precio total del auto es: $%.2f\n", precioTotal);

    return 0;
}