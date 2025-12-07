#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


void menuExpresiones();
void Ecuaciones2doGrado();

int main() {
    int opcion;

    do {
        system("cls");
        printf(" MENU PRINCIPAL \n");
        printf("1. Expresiones\n");
        printf("2. Ecuaciones (2do Grado)\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                menuExpresiones();
                break;

            case 2:
                Ecuaciones2doGrado();
                break;

            case 3:
                printf("\nSaliendo...\n");
                break;

            default:
                printf("\nOpcion invalida.\n");
                system("pause");
        }

    } while(opcion != 3);

    return 0;
}


void menuExpresiones() {
    int op;

    do {
        system("cls");
        printf(" SUBMENU DE EXPRESIONES \n");
        printf("1. Expresion 1\n");
        printf("2. Expresion 2\n");
        printf("3. Expresion 3\n");
        printf("4. Expresion 4\n");
        printf("5. Expresion 5\n");
        printf("6. Expresion 6\n");
        printf("7. Regresar al Menu Principal\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &op);

        system("cls");

        switch(op) {

            case 1: {
                int i=4, j=2, k=8;
                int resultado = (3*j + 8/k) != (i*k - j);
                printf("Resultado Expresion 1: %d\n", resultado);
                break;
            }

            case 2: {
                int m=6, n=3, p=9;
                int resultado = m*(n+p)/2 >= (p-n);
                printf("Resultado Expresion 2: %d\n", resultado);
                break;
            }

            case 3: {
                int a=5, b=2, c=10;
                int resultado = (a + b*c) < (c/b + a);
                printf("Resultado Expresion 3: %d\n", resultado);
                break;
            }

            case 4: {
                int x=14, y=3;
                int resultado = x/(y-1) + 3*y == (x-y);
                printf("Resultado Expresion 4: %d\n", resultado);
                break;
            }

            case 5: {
                int u=12, v=4;
                int resultado = (u*v - 4) <= (v + u/2);
                printf("Resultado Expresion 5: %d\n", resultado);
                break;
            }

            case 6: {
                int q=7, r=5;
                int resultado = (q + r*2) != (q*r - 10);
                printf("Resultado Expresion 6: %d\n", resultado);
                break;
            }

            case 7:
                return;

            default:
                printf("Opcion invalida.\n");
        }

        printf("\nPresione una tecla para continuar...");
        getch();

    } while(op != 7);
}


void Ecuaciones2doGrado() {
    double A, B, C;
    double discriminante, x1, x2;

    system("cls");
    printf(" ECUACION DE SEGUNDO GRADO \n");
    printf("Forma: A*x^2 + B*x + C = 0\n\n");


    printf("Ingrese A: ");
    scanf("%lf", &A);

    if (A == 0) {
        printf("\nERROR: A no puede ser 0.\n");
        system("pause");
        return;
    }

    printf("Ingrese B: ");
    scanf("%lf", &B);

    printf("Ingrese C: ");
    scanf("%lf", &C);


    printf("\nEcuacion: %.2lf*x^2 + %.2lf*x + %.2lf = 0\n", A, B, C);

    discriminante = B*B - 4*A*C;

    if (discriminante > 0) {
        x1 = (-B + sqrt(discriminante)) / (2*A);
        x2 = (-B - sqrt(discriminante)) / (2*A);

        printf("\nSoluciones:\n");
        printf("x1 = %.4lf\n", x1);
        printf("x2 = %.4lf\n", x2);
    }
    else if (discriminante == 0) {
        x1 = -B / (2*A);

        printf("\nSolucion unica:\n");
        printf("x = %.4lf\n", x1);
    }
    else {
        printf("\nLa ecuacion no tiene soluciones reales.\n");
    }

    printf("\n");
    system("pause");
}
