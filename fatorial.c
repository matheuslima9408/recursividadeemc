#include<stdio.h>
int fatorial (int x){
    if((x==0) || (x==1))
    return 1;
    else
    return( x * fatorial(x-1));
}

main (){
    int num;
    printf("Entre com um numero");
    scanf("%d", &num);
    printf("Fatorial de %d e %d", num, fatorial(num));
}
