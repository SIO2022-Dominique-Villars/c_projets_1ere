#include <stdio.h>

void mult(int n, int nb)
{
  printf("*****\n");

  printf("Table des %d :\n", n); // message d'annonce de la table

  for (int i = 1; i <= nb; i++) // calculer jusqu'à nb
  {
    printf("%d*%d=%d\n", i, n, i*n); // multiplier i par n
  }

  printf("*****\n");
}


int main( )
{
  char choice;
  int n, nb;

  do
  {
    printf("Saisir un nombre pour afficher sa table de multiplication :\n");
    scanf("%d", &n);

    printf("Jusqu'où souhaitez-vous aller ?\n");
    scanf("%d", &nb);

    mult(n, nb); // Exécute ma fonction mult

    printf("Souhaitez-vous relancer le programme (o/n) ?\n");
    scanf("%s", &choice);

  } while (choice != 'n');
  
  return 0;
}