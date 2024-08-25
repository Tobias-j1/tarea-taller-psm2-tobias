#include <stdio.h>

int a;
int b;

int main(void){

    printf("Hola mundo");
    printf("como studio --> stdio");

    printf("Ingrese  1er valor: ");
    scanf("%d",&a);

    printf("Ingrese  2do valor: ");
    scanf("%d",&b);

    printf("El promedio es: %0.3f",(float)((a+b)/2));

    return(0);

}