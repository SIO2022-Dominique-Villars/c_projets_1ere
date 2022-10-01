#include <stdio.h>

void mult_table(int nums)
{
  int max = 9; // Je calcule la table jusqu'à son multiple de 9

  for (int i = 1; i <= nums; i++) // Faire les tables jusqu'à celle de "nums"
  {
    for (int y = 1; y <= max; y++) // Exécuter jusqu'au multiple "max"
    {
      printf("%d ", i*y); // Afficher i*le multiple "y"
    }
    printf("\n"); // Sauter une ligne à la fin de la table
  }
}


int main( )
{
  int nums = 9; // Jusqu'à quelle table je vais ?

  mult_table(nums); // Exécute les tables jusqu'à celle de nums

  return 0;
}