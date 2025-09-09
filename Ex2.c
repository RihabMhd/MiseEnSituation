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
#include <string.h>
int count;
int count_char_occurrences(char str[], char c){
    for(int i=0;i<10;i++){
        if(strcmp(str[i],c)==0){
            count++;
        }
    }
}

int main(){
    char str[10];
    char lettre;

    printf("entrer une chaine de caractere :");
    scanf("%c",&str);

    printf("lettre rechercher :");
    scanf("%c",lettre);

    int res=count_char_occurrences(str,lettre);
    printf("Le caractère %c apparaît %d fois.",lettre,res);

}
