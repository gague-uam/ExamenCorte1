#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Bienvenido al sistema de mayor o menor");
    printf("\nEscriba su primer numero: ");
    scanf("%d", &num1);
    printf("\nEscriba su segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("\n %d es mayor que %d", num1, num2);
        printf("\n Gracias por usar nuestro servicio");
    }else
    {
        printf("\n %d es mayor que %d", num2, num1);
        printf("\n Gracias por usar nuestro servicio");
    }
    return 0;
}
