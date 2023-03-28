#include <stdio.h>

int main(){
    int n, ano, mes, dia;
    
    scanf("%d", &n);
    if (n>364){
        ano = n/365;
        n -= (ano * 365);
    }
    if (n>29){
        mes = n/30;
        n -= (mes * 30);
    }
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", n);
}