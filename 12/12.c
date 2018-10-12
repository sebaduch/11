#include <stdbool.h>
#include "stdio.h"


int main(){
    int rok;
    bool przestepny;

    printf("podaj rok: ");
    scanf("%i", &rok);

    przestepny = !(rok % 4) && rok % 100|| ! (rok % 400);
    printf( "%i", przestepny );



}