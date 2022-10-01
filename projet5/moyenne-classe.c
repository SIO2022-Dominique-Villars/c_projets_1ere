#include <stdio.h>

// Calcule la moyenne d'un tableau
float moyenne(float* table, int len_table)
{
  float moy, res = 0.0;

  for (int i = 0; i < len_table; i++)
  {
    res += table[i]; // ajoute ma note à la somme des notes du tableau
  }

  moy = res / len_table; // Divise la somme des notes par le nombre de notes

  return moy; // Renvoie la moyenne
}

// Fonctions cherchant le nombre le plus grand d'une table
float best(float* table, int len_table)
{
  float res = 0;

  for (int i = 0; i < len_table; i++) // parcourir le tableau
  {
    if (table[i] > res) // Si la note i est > à ma dernière meilleure note
      res = table[i]; // ma meilleure note devient celle de i
  }

  return res; // Renvoie le nombre le plus grand
}

// Fonction Principale de la gestion des notes
void notes( )
{
  float notes[5]; // Nombre de notes
  int len_notes = 5; // Taille du tableau

  for (int i = 0; i < len_notes; i++) // Entrer les notes juqu'au nombre d'élèves 
  {
    printf("Veuillez saisir la note de l'élève n°%d :\n", i+1); // Indique qu'il faut saisir une note pour l'élève
    scanf("%f", &notes[i]); // Assigne ma note à l'élève i de mon tableau
  }
  
  float moy = moyenne(notes, len_notes); // Calcule la moyenne de la classe
  printf("La moyenne est de %.2f\n", moy); // Affiche la moyenne de la classe

  float bes = best(notes, len_notes); // Cherche la meilleure note du tableau
  printf("La meilleure note est %.2f\n", bes); // Affiche la meilleure note
}

int main( )
{
  notes( ); // Exécute la fonction notes

  return 0;
}