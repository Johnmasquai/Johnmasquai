#include <stdio.h>

    int main(){
        int N1 = 40, N2 = 60;
        int maior;
        
        N1 > N2 ? (maior = N1) : (maior = N2);

        if (N1 > N2){
            printf("o número maior é %d\n", N1);
        } else {
            printf("o número maior é %d\n", N2);
        }
        return 0;
    }