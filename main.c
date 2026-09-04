#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "armazem.c"

int atv;

void main()
{
    printf("Qual atividade?");
    printf("\n1 - Armazem:");
scanf("%d", &atv);

    switch (atv)
    {
    case 1:
        armazem();
    break;
    
    default:
        break;
    }
}