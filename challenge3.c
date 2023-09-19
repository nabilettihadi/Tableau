#include<stdio.h>
void main(){
    int tab[10],i,j,tmp;

    for(i=0;i<10;i++){
    printf("Entrer le nombre %d du tableau:\n",i+1);
    scanf("%d",&tab[i]);
    }
    printf("Tableau avant le trie:\n");
    for(i=0;i<10;i++){
        printf("T[%d]=%d\n",i,tab[i]);
    }

    printf("------------------------------------------\n");

    printf("Tableau apres le trie:\n");
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(tab[i]<tab[j]){
            tmp=tab[i];
            tab[i]=tab[j];
            tab[j]=tmp;
            }
        }
        
        printf("T[%d]=%d\n",i,tab[i]);
        
    }
}