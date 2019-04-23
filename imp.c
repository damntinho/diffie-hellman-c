#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "tad.h"
int generatePubKey(int carga, int privKey, int primo){
    int i=privKey, result=carga;
    if(privKey==0)
       result = 1;
    while(i>1){
         result*=carga;
         i--;
    }
    result=result%primo;
    return result;
}
int generateCryptKey(int pubKey, int privKey, int primo){
    int i=privKey;
    unsigned long long int result = pubKey;
    if(privKey==0)
       result = 1;
    while(i>1){
         result*=pubKey;
         //printf("%lld\n", result);
         i--;
    }
    //printf("%lld\n", result);
    result=result%primo;
    return result;
}
int cryptChecker(int cryptKey1, int cryptKey2, int pubKey1, int pubKey2){
    if(cryptKey1==cryptKey2){
        cabSegura();
        printf("\nEssa conversa e criptografada de ponta-a-ponta!\n\n");
    }else{
        cabNaoSegura();
        printf("\nCUIDADO!!!\nEssa conversa nao e criptografada de ponta-a-ponta!\n\n");
    }
    printf("Ana:\nChave combinada: [%d]\nChave publica:[%d]\n\n", cryptKey1, pubKey1);
    printf("Beto:\nChave combinada: [%d]\nChave publica: [%d]\n\n", cryptKey2, pubKey2);
}

