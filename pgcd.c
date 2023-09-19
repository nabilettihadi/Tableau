#include<stdio.h>
#include<stdlib.h>


void main(){
int a,b,pgcd,i;
int ppcm = (a * b) / pgcd;
printf("entrer le premier nombre:");
scanf("%d",&a);
printf("entrer le deuxieme nombre:");
scanf("%d",&b);

for (i=1;i<=a && i<=b;i++){
if ((a%i)==0 && (b%i)==0)
pgcd=i;
}
printf("le pgcd est %d:",pgcd);
printf("le ppcm est %d:",ppcm);

}