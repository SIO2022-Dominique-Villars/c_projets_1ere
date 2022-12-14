#include <stdio.h>

// Prototypes //
void fact();
void mult();


// Programme Principal //
int main( )
{
  char inprogress;
  int choice;

  do
  {
    printf("Que souhaitez-vous faire (1 : factorielle ; 2 : multiplication)\n");
    scanf("%d", &choice);

    switch (choice) // Dans le cas où choice est égal à...
    {
      case 1:
        fact( ); // Si je tape 1 j'éxécute fact
        break;

      case 2:
        mult( ); // Si je tape 2 j'éxécute mult
        break;
    }

    printf("Souhaitez-vous relancer le programme (o/n) ?\n");
    scanf("%s", &inprogress);

  } while (inprogress != 'n');
  
  return 0;
}


// FONCTIONS //
void fact() // Programme factorielle
{
  int num, res = 1;

  printf("Saisir un nombre pour afficher sa factorielle :\n");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    res *= i; // Mon résultat multiplié par i
  }

  printf("La factorielle de %d est %d\n", num, res);
}

void mult() // Programme table de multiplication
{
  int n, nb;

  printf("Saisir un nombre pour afficher sa table de multiplication :\n");
  scanf("%d", &n);

  printf("Jusqu'où souhaitez-vous aller ?\n");
  scanf("%d", &nb);

  printf("Table des %d :\n", n);

  printf("*****\n");

  for (int i = 1; i <= nb; i++)
  {
    printf("%d*%d=%d\n", i, n, i*n); // multiplier i par n
  }

  printf("*****\n");
}