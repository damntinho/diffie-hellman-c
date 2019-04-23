#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "tad.h"

void cabDiffie(){
    printf(" -------------------------\n");
    printf("|------DIFFIEHELLMAN------|\n");
    printf(" -------------------------\n");
}
void cabAtacante(int *atacante){
    printf("\n");
    printf(" ----------------------------\n");
    printf("|----------ATACANTE----------|\n");
    printf(" ----------------------------\n");
    if(atacante[0]!=NULL){
        printf("Modulo primo: %d\n", atacante[0]);
    }
    if(atacante[1]!=NULL){
        printf("Digito de carga: %d\n", atacante[1]);
    }
    if(atacante[2]!=NULL){
        printf("Chave publica Ana: %d\n", atacante[2]);
    }
    if(atacante[3]!=NULL){
        printf("Chava publica Beto: %d\n", atacante[3]);
    }
    printf("\n");
}
void cabSegura(){
    printf("\n");
    printf(" ----------------------------\n");
    printf("|-----------SEGURO-----------|\n");
    printf(" ----------------------------\n");
    printf("\n");
}
void cabNaoSegura(){
    printf("\n");
    printf(" ----------------------------\n");
    printf("|---------NAO-SEGURO---------|\n");
    printf(" ----------------------------\n");
    printf("\n");
}
