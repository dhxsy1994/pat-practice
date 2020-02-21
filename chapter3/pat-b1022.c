#include <stdio.h>

int main()
{

    int a;
    int b;
    int d;
    int DecRes;
    int BaseNum;
    int i = 0;
    int P[100];
    

    printf("A + B with D base program\n");
    printf("-------------------------\n");

    printf("input a b d: ");
    scanf("%d %d %d", &a, &b, &d);
    printf("shown a=%d, b=%d, d=%d\n", a, b, d);
    
    DecRes = a + b;
    BaseNum = DecRes;
    

    do {
        P[i] = BaseNum % d;
        BaseNum = BaseNum / d;
        i++;
    } while(BaseNum != 0) ;

    if (i > 100){
        printf("error output\n");
        return -1;
    }

    i--;
    while(i >= 0){
        printf("%d", P[i]);
        i--;
    }
    printf("\n");
    printf("finished");
    return 0;
}

