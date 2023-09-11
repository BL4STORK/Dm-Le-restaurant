#include <stdio.h>
int tablenumber(int invitednumber){
    if(invitednumber <= 2){
        printf("Vous pouvez aller a la table numero 1\n ");
    }else if(invitednumber >= 2 && invitednumber <= 4){
        printf("Vous pouvez aller a la table numero 2\n");
    }else if (invitednumber >= 4 && invitednumber <= 8){
        printf("Vous pouvez aller a la table numero 3\n");
    }else if(invitednumber > 8){
        printf("Desole nous ne pouvons pas vous recevoir");
    }
    return 0;
}
char choisirBoisson(){
    char choix;
    printf("Boisson disponibles: \n");
    printf("'s'Soda:\n 'e'Eau:\n 'l'Limonade:\n");
    printf("Veuillez choisir une boisson:\n");
    scanf("%c", &choix);
    getchar();
    return choix;
}

char choisirPlat(){
    char choix;
    printf("Plat disponible: \n");
    printf("'c'Couscous:\n 't'Tomates:\n 'r'Risotto:\n");
    printf("Veuillez choisir un plat:\n");
    scanf("%c", &choix);
    getchar();
    return choix;
}

char choisirDessert(){
    char choix;
    printf("Dessert disponibles: \n");
    printf("'t'Tiramitsu:\n'g'Glace:\n'm'Macaron:\n");
    printf("Veuillez choisir un dessert:\n");
    scanf("%c", &choix);
    getchar();
    return choix;
}
int main() {
    int invites;
    int number;
    printf("Veuillez saisir le nombre d'invites:\n");
    scanf("%d", &invites);
    getchar();
    number = invites;
    invites = tablenumber(invites);

    char boisson;
    char plat;
    char dessert;
    boisson = choisirBoisson();
    plat = choisirPlat();
    dessert = choisirDessert();
    printf("Votre commande: \n");
    printf("En Boisson:%c\n",boisson);
    printf("En Plat:%c\n",plat);
    printf("En Dessert:%c\n",dessert);

    int montantTotal;
    int prixBoisson;
    int prixPlat;
    int prixDessert;

    if(boisson == 's'){
        prixBoisson = 5;
    }else if(boisson == 'e'){
        prixBoisson = 2;
    }else if(boisson == 'l'){
        prixBoisson = 12;
    }
    if(plat == 'c'){
        prixPlat = 15;
    }else if(plat == 't'){
        prixPlat = 8;
    }else if(plat == 'r'){
        prixPlat = 23;
    }
    if(dessert == 't'){
        prixDessert = 62;
    }else if(dessert == 'g'){
        prixDessert = 3;
    }else if(dessert == 'm'){
        prixDessert = 8;
    }
    montantTotal = (prixBoisson + prixPlat + prixDessert) * number;
    printf("Voud devez payez: %d\n", montantTotal);
    return 0;
}
