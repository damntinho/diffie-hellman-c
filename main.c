#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "tad.h"

int main()
{
    int pubKeyAna, pubKeyBeto, privKeyAna, privKeyBeto, primo, carga, cryptKeyAna, cryptKeyBeto, atacante[4]={NULL, NULL, NULL, NULL};
    cabDiffie();
    printf("Modulo primo: ");
    scanf("%d", &primo);
    atacante[0]=primo;
    cabAtacante(atacante);
    printf("\n");
    printf("Digito de carga: ");
    scanf("%d", &carga);
    atacante[1]=carga;
    cabAtacante(atacante);
    printf("\n");
    printf("Chave privada de Ana: ");
    scanf("%d", &privKeyAna);
    printf("\n");
    pubKeyAna=generatePubKey(carga, privKeyAna, primo);
    atacante[2]=pubKeyAna;
    cabAtacante(atacante);
    printf("Chave privada de Beto: ");
    scanf("%d", &privKeyBeto);
    printf("\n");
    pubKeyBeto=generatePubKey(carga, privKeyBeto, primo);
    atacante[3]=pubKeyBeto;
    cabAtacante(atacante);
    printf("Chave publica de Ana: [%d]\n", pubKeyAna);
    printf("Chave publica de Beto: [%d]\n", pubKeyBeto);
    cryptKeyAna=generateCryptKey(pubKeyBeto, privKeyAna, primo);
    cryptKeyBeto=generateCryptKey(pubKeyAna, privKeyBeto, primo);
    cryptChecker(cryptKeyAna, cryptKeyBeto, pubKeyAna, pubKeyBeto);
    return 0;
}
