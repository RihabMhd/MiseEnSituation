/*
Écrire une fonction int compare(const float t1[], const float t2[], int size); 
qui reçoit 2 tableaux en paramètres.
Cette fonction compte le nombre d'éléments ayant le même indice et la même valeur 
dans les deux tableaux. Tester la fonction avec les tableaux suivants :
 float notes1[NB_NOTES] = {10.2, 12.5, 18.5, 9.8, 13.2, 12.1};
 float notes2[NB_NOTES] = {15.7, 12.5, 15.3, 9.8, 10.8, 12.1};
Exemple d'exécution:
Il y a 3 notes identiques.
*/

#include <stdio.h>
#include <string.h>
int count;
int compare(const float t1[],const float t2[],int size){
    for(int i=0;i<size;i++){
        if(t1[i]==t2[i]){
            count++;
        }
    }
    return count++;
}

int main(){
    float t1[]={10.2, 12.5, 18.5, 9.8, 13.2, 12.1};
    float t2[]={15.7, 12.5, 15.3, 9.8, 10.8, 12.1};

    int size=sizeof(t1)/sizeof(t1[0]);
    int res=compare(t1,t2,size);
    printf("Il y a %d notes identiques.",res);
    
}