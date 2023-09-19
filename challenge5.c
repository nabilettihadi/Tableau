#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *nom,i=0;
    nom = malloc(25);
    printf("Entrer votre nom:\n");
    scanf("%s",nom);
    
    while(strcmp(nom++,"\0")!= 0){
        i++;
    }
    printf("le nombre de caractere de votre nom est:%d\n",i);
    return 0;
}