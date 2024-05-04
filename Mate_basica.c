#include <stdio.h>
int main(){
    float suma,resta,multi,divi,a,b;
    printf("Ingrese el primer numero:");
    scanf("%f",&a);
    printf("ingrese el segundo numero:");
    scanf("%f",&b);
    
    suma=a+b;
    resta=a-b;
    multi=a*b;
    divi=a/b,
    
    printf("\nla suma:%.2f",suma);
    printf("\nla resta:%.2f",resta);
    printf("\nla multiplicacion:%.2f",multi);
    printf("\nla division:%.2f",divi);
}