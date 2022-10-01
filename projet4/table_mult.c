#include <stdio.h>

// Prototypes //
void mult_table(int nums);


// Programme Principal //
int main( )
{
  int nums = 9; // Jusqu'à quelle table je vais ?

  mult_table(nums); // Génère les tables jusqu'à celle de nums

  return 0;
}


// Fonctions //
void mult_table(int nums) // Génère la table de multiplication jusqu'à celle de nums
{
  int max = 9; // Multiplier jusqu'à 9

  for (int i = 1; i <= nums; i++)
  {
    for (int y = 1; y <= max; y++)
    {
      printf("%d ", i*y);
    }
    printf("\n");
  }
}