#include <stdio.h>
#include <string.h>

struct student{
   char studentName[50];
   int age;
   int historyNote;
   int englishNote;
   int mathNote;
};

struct lessons{
    char lessonName[50];
};

void info( struct student student){
    printf("--Student info--\n Name: %s\n Age: %d\n History Note: %d\n English Note: %d\n Math Note: %d\n", student.studentName, student.age, student.historyNote,student.englishNote,student.mathNote);
}
int avarage(struct student student){
    int total = student.historyNote + student.englishNote + student.mathNote;
    int avg = total / 3;
    return avg;

}

int main(){ //direct kullancam
    struct student student1;
    strcpy (student1.studentName, "Ayşe");
    student1.age= 15;
    student1.historyNote= 35;
    student1.englishNote = 85;
    student1.mathNote = 46;



    info(student1);
   
    int avg = avarage(student1); 
    printf("Average note: %d", avg);

    return 0;

}





