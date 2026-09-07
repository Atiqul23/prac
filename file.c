#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student
{
    int id;
    char name[20];
    double marks;
};

int main(){

    FILE *fp = fopen("taju.txt","r");
    if (fp == NULL)
    {
        printf("Error to open file");
        return 1;
    }

    struct Student s[100];
    int count = 0;
    char line[200];
    while (fgets(line, sizeof line,fp) != NULL)
    {

        const char delims[] = ",";
    
        // Get the first token
        char *token = strtok(line, delims);
    
        // // Loop through the rest of the string
        // while (token != NULL) {
        //     printf("%s\n", token);
            
        //     // Get the next token (pass NULL as the first argument)
        //     token = strtok(NULL, delims);
        // }

        if (token != NULL)
        {
            s[count].id = atoi(token);
        }

        token = strtok(NULL,delims);

        if (token != NULL)
        {
            strcpy(s[count].name,token);
        }

        token = strtok(NULL,delims);

         if (token != NULL)
        {
            s[count].marks = atof(token);
        }
        
        count++;

        // printf("%s",line);



    }

    for (int i = 0; i < count; i++)
    {
        printf("Id: %d\n",s[i].id);
        printf("Name: %s\n",s[i].name);
        printf("Marks: %f\n",s[i].marks);

        printf("--------------------------\n");
    }
    
    
    fclose(fp);


    return 0;
}