#include <stdio.h>

void fact(int num)
{
  int res = 1; // Initialisation du resultat à 1 

  for (int i = 1; i <= num; i++) // calculer de i=1 à mon numéro
  {
    res *= i; // Mon résultat multiplié par i
  }

  printf("La factorielle de %d est %d\n", num, res);
}


int main( )
{
  char choice;
  int num;

  do
  {
    printf("Saisir un nombre pour afficher sa factorielle :\n");
    scanf("%d", &num);

    fact(num); // Exécute ma fonction fact

    printf("Souhaitez-vous relancer le programme (o/n) ?\n");
    scanf("%s", &choice);

  } while (choice != 'n');
  


  return 0;
}