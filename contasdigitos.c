#include<stdio.h>

int digitos(int x){
    if( abs(x) < 10 )
        return 1;
    else
        return(1 + digitos(x/10));
}

main (){
    int num;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    printf("O numero de digitos de %d e %d.", num, digitos(num));
}
