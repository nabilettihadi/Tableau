#include<stdio.h>
#include<stdlib.h>

/* void main ()
{   float note[n];
    int ;

   printf("Entrer le nombre des note :\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Entrer la note %d:\n",i+1);
        scanf("%f",&note[]);}
    
    printf("")

 } */

 #include <stdio.h>

int main() {
    int note[100];
    int nbrnote = 0;
    int somnote = 0; 
    float moy = 0.0;
    int noteMin = 20; 
    int noteMax = 0;

    printf("Saisissez des note entre 0 et 20. Pour arrêter la saisie, entrez une note hors de cet intervalle.\n");

    while (1) {
        int note;
        printf("Entrez une note : ");
        scanf("%d", &note);

        if (note < 0 || note > 20) {
            printf("Saisie terminée.\n");
            break;
        }

        note[nbrnote] = note;
        nbrnote++;
        somnote += note;

        
        if (note < noteMin) {
            noteMin = note;
        }

        
        if (note > noteMax) {
            noteMax = note;
        }
    }

    if (nbrnote == 0) {
        printf("Aucune note saisie. Programme terminé.\n");
    } else {
        
        moy = (float)somnote / nbrnote;
        printf("Nombre de note saisies : %d\n", nbrnote);
        printf("moy des note : %.2f\n", moy);

        
        printf("Comparaison des note a la moyenne :\n");
        for (int i = 0; i < nbrnote; i++) {
            if (note[i] == moy) {
                printf("Note %d : egal a la moy\n", note[i]);
            } else if (note[i] < moy) {
                printf("Note %d : inferieur a la moy\n", note[i]);
            } else {
                printf("Note %d : superieur a la moy\n", note[i]);
            }
        }

        
        int noteupmoy = 0;
        for (int i = 0; i < nbrnote; i++) {
            if (note[i] > moy) {
                noteupmoy++;
            }
        }
        printf("Nombre de note superieures a la moy : %d\n", noteupmoy);

        
        printf("Note minimale : %d (Position dans le tableau : ", noteMin);
        for (int i = 0; i < nbrnote; i++) {
            if (note[i] == noteMin) {
                printf("%d ", i + 1); 
            }
        }
        printf(")\n");

       
        printf("Note maximale : %d (Position dans le tableau : ", noteMax);
        for (int i = 0; i < nbrnote; i++) {
            if (note[i] == noteMax) {
                printf("%d ", i + 1);
            }
        }
        printf(")\n");
    }

    return 0;
}