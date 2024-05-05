#include <stdio.h>
#include <string.h>
//constantes
#define maximos 3
#define usuario "Geo"
#define contrasena "el pepe"

void printAsciiArt(int arte_xd){
    if (arte_xd == 1) {
    // Color amarillo
    printf("\x1B[33m");
    printf("░░░░░░░░░░░░░░░░░░░░░█████████░░░░░░░░░\n");
    printf("░░███████░░░░░░░░░░███▒▒▒▒▒▒▒▒███░░░░░░░\n");
    printf("░░█▒▒▒▒▒▒█░░░░░░░███▒▒▒▒▒▒▒▒▒▒▒▒▒███░░░░\n");
    printf("░░░█▒▒▒▒▒▒█░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██░░\n");
    printf("░░░░█▒▒▒▒▒█░░░██▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒███░\n");
    printf("░░░░░█▒▒▒█░░░█▒▒▒▒▒▒████▒▒▒▒████▒▒▒▒▒▒██\n");
    printf("░░░█████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██\n");
    printf("░░░█▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒██\n");
    printf("░██▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██\n");
    printf("██▒▒▒███████████▒▒▒▒▒██▒▒▒▒▒▒▒▒██▒▒▒▒▒██\n");
    printf("█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒████████▒▒▒▒▒▒▒██\n");
    printf("██▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██░\n");
    printf("░█▒▒▒███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██░░░\n");
    printf("░██▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█░░░░░\n");
    printf("░░████████████░░░█████████████████░░░░░░\n");
    printf("\x1B[0m");
} else {
    printf("\x1B[32m"); // Color verde
    printf("░░░░▄▄▄▄▀▀▀▀▀▀▀▀▄▄▄▄▄▄\n");
    printf("░░░░█░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░▀▀▄\n");
    printf("░░░█░░░▒▒▒▒▒▒░░░░░░░░▒▒▒░░█\n");
    printf("░░█░░░░░░▄██▀▄▄░░░░░▄▄▄░░░█\n");
    printf("░▀▒▄▄▄▒░█▀▀▀▀▄▄█░░░██▄▄█░░░█\n");
    printf("█▒█▒▄░▀▄▄▄▀░░░░░░░░█░░░▒▒▒▒▒█\n");
    printf("█▒█░█▀▄▄░░░░░█▀░░░░▀▄░░▄▀▀▀▄▒█\n");
    printf("░█▀▄░█▄░█▀▄▄░▀░▀▀░▄▄▀░░░░█░░█\n");
    printf("░░█░░▀▄▀█▄▄░█▀▀▀▄▄▄▄▀▀█▀██░█\n");
    printf("░░░█░░██░░▀█▄▄▄█▄▄█▄████░█\n");
    printf("░░░░█░░░▀▀▄░█░░░█░███████░█\n");
    printf("░░░░░▀▄░░░▀▀▄▄▄█▄█▄█▄█▄▀░░█\n");
    printf("░░░░░░░▀▄▄░▒▒▒▒░░░░░░░░░░█\n");
    printf("░░░░░░░░░░▀▀▄▄░▒▒▒▒▒▒▒▒▒▒░█\n");
    printf("░░░░░░░░░░░░░░▀▄▄▄▄▄░░░░░█\n");
    printf("\x1B[0m"); // Resetear el color
}
}

int main(){
    //inicio
    char nombre[200];
    char contra [200];
    int  intentos= 0;
    //Un bucle que se ejecuta mientras el número de intentos sea menor que el máximo permitido xd
    while (intentos <maximos){
        printf("Ingrese su usuario:");
        fgets(nombre,200, stdin );
        nombre[strcspn(nombre,"\n")]=0;

        printf("Ingrse su contrasena:");
        fgets(contra,200, stdin);
        contra[strcspn(contra,"\n")]=0;
    //compara la contraseña y el usuario si son y gual
        if(strcmp(nombre,usuario)==0 && strcmp(contra,contrasena)== 0) {
            printf("\x1B[34m");//colo azul
            printf("Bien venido asu cuenta\n");
            printf("\x1B[0m");
            printAsciiArt(1);
            return 0;
        }
        else { 
            printf("\x1B[31m");//color rojo
            printf("Usuario o Contrasena incorrecto intentos restantes:%d\n",maximos-intentos-1);
            printf("\x1B[0m");
            intentos++;
        }
    }
    //si el bucle termina es decir que supere el limite se imprimira y terminara con un codigo de retorno 1 in dicando anomalia de  jaquear
        printf("\x1B[36m");//color acia
        printf("Nos estas intentando  jaquear mrd.\n");
        printf("\x1B[0m");
        printAsciiArt(2);
        return 1;
    }
    
