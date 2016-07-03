#include<stdio.h>

int fibonacci(int N){
    if( N == 1)
        return 1;
    else
        if( N == 2)
        return 1;
    else
        return(fibonacci(N-1) + fibonacci(N-2));
}

main (){
    int num, F;
    printf("ENTRE COM UM NUMERO:");
    scanf("%d", &num);
    printf("A SERIE DE FIBONACCI PARA %d ELEMENTOS E: \n", num);
    for(F=1;F<=num;F++){
        printf("%d", fibonacci(F));

    }
    printf("\nOK");
}
