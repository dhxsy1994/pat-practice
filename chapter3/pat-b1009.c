#include <stdio.h>
#include <string.h>
#define MAX 81



int main()
{
    char str[MAX];
    char * words[MAX];
    char * token;
    char * space;
    space = " \n";
    //concern the finished \n to add in strtok key
    int i = 0, count = 0;

    printf("Saying reverse\n");
    
    printf("Please input a string: ");
    fgets(str, MAX, stdin);
    printf("Content: %s", str);

    token = strtok(str, space);
    while(token != NULL)
    {
        words[i] = token;
        token = strtok(NULL, space);
        i++;
    }

    printf("wordcount %d\n",i);
    i--; 
    for (i; i > -1; i--){
        printf("%s ", words[i]);
    }
    
    printf("\n");
    return 0;
}

