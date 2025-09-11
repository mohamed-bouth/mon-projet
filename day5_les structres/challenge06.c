#include <stdio.h>
#include <string.h>

struct produit
{
    char nom[30];
    int prix;
    int quantite;
}produit[100];

int entrez(struct produit *produit);

int main(){

    int nombreProduits = entrez(produit);
    printf("\nListe des produits:\n");
    for(int i = 0; i < nombreProduits; i++) {
        printf("Produit %d:\n", i+1);
        printf("Nom: %s\n", produit[i].nom);
        printf("Prix: %d\n", produit[i].prix);
        printf("Quantite: %d\n", produit[i].quantite);
        printf("---------------------\n");
    }
}

int entrez(struct produit *produit){
    int number;
    printf("entrez le number de produit :\n");
    scanf("%d" , &number);
    getchar();
    for(int i = 0; i < number ; i++){
        printf("le nom de produite %d :\n" , i+1);
        fgets(produit[i].nom , sizeof(produit[i].nom) , stdin);
        produit[i].nom[strcspn(produit[i].nom , "\n")] = '\0';
        printf("le prix de produite %d :\n" , i+1);
        scanf("%d", &produit[i].prix);
        printf("le quantite de produite %d :\n" , i+1);
        scanf("%d" , &produit[i].quantite);
        getchar();
    }
    return number;


}