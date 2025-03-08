#include <stdio.h>

int f(int n){
    if(n==0){
        return 1;
    }else{
        return n*f(n-1);
    }
}

int main(){
    int a;
    a= f(5);
    printf("%d",a);
    return 0;
}