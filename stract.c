#include<stdio.h>
#include<stdlib.h>
#include<string.h>

union Student
{
    int id;
    char name[20];
    double marks;
};

enum Status{
    PENDING,
    RUNNING,
    DONE
};

int main(){

    enum Status s = RUNNING;

    union Student s1;
    // union Student s2 = {2,"Taju",60};


    strcpy(s1.name,"Atiq");

    printf("%s\n",s1.name);
    // printf("%s\n",s2.name);

    union Student *p = &s1;

    printf("%f\n",p->marks);
    
    


    return 0;
}