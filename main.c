#include <stdio.h>

int main (void){
    
    int N; //numero de caracteres
    scanf("%d", &N);

    char A[100001]; 
    //o ponteiro aponta pra a primeira posição do vetor
    char *p1 = A;

    for (int i = 0; i < N; i++) {
        scanf(" %c", &(*p1));
        //o ponteiro aponta para a proxima posição
        p1++;
        //armazena no vetor A usando o ponteiro p1 a palavra
    }

    char v[5] = {'a', 'e', 'i', 'o', 'u'};
    int rv[100001];
    //vogais
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < N; j++){
            if(A[j] == v[i]) {
                rv[i] += 1; 
            }
        }
    }

    char c[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    int rc[100001];
    //consoantes
    for(int i = 0; i < 21; i++) {
        for(int j = 0; j < N; j++){
            if(A[j] == v[i]) {
                rc[i] += 1; 
            }
        }
    }

    int totalpar = 0, totalimp = 0;
        for(int i = 0; i < N; i++){
            if(rc[i]%2 != 0 || rv[i]%2 != 0){
            totalpar = 1;
            totalimp += 1;
            }
        }

    if(N%2 == 0){
        if(totalpar == 0){
            printf("Sim\n");
        }
        else{
            printf("Nao\n");
        }
    }
    else{
        if(N%2 == 1){
            if(totalimp == 1){
                printf("Sim\n");
            }
            else{
                printf("Nao\n");
            }
        }
    }

    return 0;
}
