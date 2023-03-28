#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, Nf, ce, cq, vi, de, ci, ds, um;
    scanf("%d", &N);
    Nf=N;
    
    ce=(N/100);
    N = N - (ce*100);
        
    cq=(N/50);
    N = N - (cq*50);

    vi=(N/20);
    N = N - (vi*20);

    de=(N/10);
    N = N - (de*10);

    ci=(N/5);
    N = N - (ci*5);

    ds=(N/2);
    N = N - (ds*2);

    um=(N/1);
    N = N - (um*1);

    system("clear");
    printf("%d\n", Nf);
    printf("%d nota(s) de R$ 100,00\n", ce);
    printf("%d nota(s) de R$ 50,00\n", cq);
    printf("%d nota(s) de R$ 20,00\n", vi);
    printf("%d nota(s) de R$ 10,00\n", de);
    printf("%d nota(s) de R$ 5,00\n", ci);
    printf("%d nota(s) de R$ 2,00\n", ds);
    printf("%d nota(s) de R$ 1,00\n", um);
    return 0;
}