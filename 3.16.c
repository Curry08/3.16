#include <stdio.h>

int main(){
    float num1,num2,num3;

    printf("Inserisci il primo numero: ");
    scanf("%f",&num1);
    printf("Inserisci il secondo numero: ");
    scanf("%f",&num2);
    printf("Inserisci il terzo numero: ");
    scanf("%f",&num3);

    if(num1>num2 && num1>num3){
        printf("Il primo numero %f è il maggiore",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("Il secondo numero %f è il maggiore",num2);
    }
    else{
        printf("Il terzo numero %f è il maggiore",num3);
    }
    return 0;
}
