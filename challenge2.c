#include<stdio.h>
void main(){
    int tab[10],i;

    for(i=0;i<10;i++){

    printf("Entrer le nombre %d du tableau:\n",i+1);
    scanf("%d",&tab[i]);

    }
    
    int min=tab[0],max=tab[0];

    for(i=0;i<10;i++){
    printf("Tab[%d]=%d\n",i,tab[i]);

        if(tab[i]>max)
            max=tab[i];

        if(tab[i]<min)
            min=tab[i];
        
    }
    
    
    printf("le plus petit nombre dans le tableau est:%d\n",min);
    printf("le plus grand nombre dans le tableau est:%d\n",max);
    
}