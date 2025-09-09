/*
Écrire une fonction int count_char_occurrences(char str[], char c); qui:
-  Lit une chaîne de caractères saisie par l’utilisateur
-  Lit un caractère à rechercher
-  Compte combien de fois ce caractère apparaît dans la chaîne
-  Affiche le nombre d’occurrences trouvées


Tester la fonction avec les tableaux suivants :
char str[] = "programmation";
char c = 'o';
int count = count_char_occurrences(str, c);
Exemple d'exécution:
Le caractère 'o' apparaît 2 fois.

*/
#include <stdio.h>

int count_char_occurrences(char str[], char c) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {  
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char lettre;

    printf("Entrer une chaine de caractere : ");
    scanf(" %[^\n]", str);  

    printf("Lettre rechercher : ");
    scanf(" %c", &lettre);  

    int res = count_char_occurrences(str, lettre);

    printf("Le caractere '%c' apparait %d fois.\n", lettre, res);

    return 0;
}
