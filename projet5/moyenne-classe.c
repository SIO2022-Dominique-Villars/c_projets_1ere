#include <stdio.h>

// Prototypes //
float moyenne(float* table, int len_table);
float best(float* table, int len_table);
void notes( );


// Programme Principal //
int main( )
{
  notes( ); // Exécute la fonction notes

  return 0;
}


// FONCTIONS //
float moyenne(float* table, int len_table) // Retourne la moyenne d'un tableau
{
  float moy, res = 0.0;

  for (int i = 0; i < len_table; i++)
  {
    res += table[i]; // ajoute ma note à la somme des notes du tableau
  }

  moy = res / len_table; // Divise la somme des notes par le nombre de notes

  return moy;
}

float best(float* table, int len_table) // Retourne le nombre le plus grand d'un tableau
{
  float res = 0;

  for (int i = 0; i < len_table; i++) // parcourir le tableau
  {
    if (table[i] > res) // Si la note i est > à ma dernière meilleure note
      res = table[i]; // ma meilleure note devient celle de i
  }

  return res; // Renvoie le nombre le plus grand
}

void notes( ) // Gestion des notes
{
  float notes[5]; // Nombre de notes
  int len_notes = 5; // Taille du tableau notes

  for (int i = 0; i < len_notes; i++)
  {
    printf("Veuillez saisir la note de l'élève n°%d :\n", i+1);
    scanf("%f", &notes[i]);
  }
  
  float moy = moyenne(notes, len_notes); // Récupère la moyenne de la classe
  printf("La moyenne est de %.2f\n", moy);

  float bes = best(notes, len_notes); // Récupère la meilleure note
  printf("La meilleure note est %.2f\n", bes);
}