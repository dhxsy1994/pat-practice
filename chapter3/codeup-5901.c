#include <stdio.h>
#include <string.h>
#define MAX 256



int main()
{
    int i = 0;
    int j = 0;
    int Length = 0;
    char * Pointer = NULL;
    int truth = 0;

    while(1){
        char str[MAX];
        printf("please intput the string: ");
        fgets(str, MAX, stdin);
        printf("%s", str);

        Pointer = &str[i];

        while( 0 != strcmp(Pointer , "\n") )
        {
            Length++;
            Pointer++;
        }
        printf("length = %d\n", Length);
        
        for(j; j< Length/2 ;j++){
            if(str[j] != str[Length-1-j]){
               truth = 1; 
               break;
            }
        }

        if( truth == 0 ){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

        i = 0;
        j = 0;
        Length = 0;
        Pointer = NULL;
        truth = 0;
    }
}

