/*
Définir une structure Livre avec titre, auteur, annee_publication.
Lire un tableau de 10 livres.
Afficher tous les livres publiés après l’année 2000.
Compter combien de livres ont été écrits par un auteur donné (saisie utilisateur).

*/
#include <stdio.h>
#include <string.h>

typedef struct{
    char titre[20];
    char auteur[20];
    int annee_publication;
}livre;

int main(){
    static livre livres[10];
    char auteur[20];

    for(int i=0;i<10;i++){
        if(livres[i].annee_publication>2000){
            printf("livre publiés après l année 2000.",livres[i]);
        }
    }

    printf("entrer un auteur:");
    scanf("%s",auteur);

    int count;

    for(int i=0;i<10;i++){
        if(strcmp(livres[i].auteur,auteur)==0){
            count++;
        }
    }

    printf("le nombre des livres écrit par ce auteur est :%d",count);
    



}