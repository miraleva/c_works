#include <stdio.h>
int n( int a){
    if(a==0){
        return 0;
    }else if (a==1){
        return 1;
    }else{
        return n(a-1) + n(a-2);
    }
        
        

}
int main(){
    int a;
    a= n(17);
    printf("%d",a);
    return 0;
}