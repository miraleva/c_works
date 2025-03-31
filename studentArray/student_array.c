#include <stdio.h>

int main(){
    char *students[]={"Fatma ","Harun " ,"Yeter "};
    int math[]={50, 60, 70};
    int history[]={40, 60, 20};
    int science[]={20, 59, 30}; 
    
    for(int i=0; i<3; i++){
        printf("Names: %s Math: %d History:%d Science:%d\n", students[i],math[i],history[i],science[i]);
    }

}