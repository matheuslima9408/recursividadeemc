#include<stdio.h>
int somatorio(int x){
    if( x == 1)
        return 1;
    else
        return(x + somatorio(x-1));
}

main (){
    int num;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    printf("O somatorio de 0 ate %d e %d.", num, somatorio(num));
}
