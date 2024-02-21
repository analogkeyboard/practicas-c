#include <stdio.h>
#include <string.h>

#define NOMBRE "ORDENATAS, S.A."
#define DIRECCION "Plaza del Byte 12"
#define CIUDAD "Villabits, E- 60006"



int espacio(int num);
int main(int argc, char const *argv[])
{
    int salta;

    salta = (65 - strlen(DIRECCION)) / 2;
    espacio(salta);
    printf("%s\n", NOMBRE);
    // printf("%d\n",strlen(DIRECCION));
    // printf("%d\n",salta);
    espacio(salta);

    printf("%s\n", DIRECCION);
    return 0;
}

asteriscos()

int espacio(num)
int num
{
    for (int i = 0; i <= num; i++)
    {
        putchar(' ');
    }
}
