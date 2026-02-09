#include<stdio.h>
int main()
{ int n,N,i,cpt1,somme;
    do {
    printf("entrer le nombre d'entier que vous voulez saisir:");
    scanf("%d", &n);
    }while(n<=0);
   cpt1=0;
   somme=0;
  for(i=0; i<n; i++){
        do {
    printf("veuillez afficher un entier positif:");
    scanf("%d", &N);
    if (N<=0){
        printf("invalide.\n");
    }
  } while(N<=0);
  if(N%2==0){
        cpt1++;
        somme=somme+N;
      }
  }
  printf("la moyenne des entiers pairs est:%d\n", somme/cpt1);

  return 0;
}
