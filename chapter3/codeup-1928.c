#include <stdio.h>
#define DEBUG
struct date {
    int year;
    int month;
    int day;
};

int is_LeapYear(int y){
    if(y%400 == 0 || (y%4 == 0 && y%100 != 0 ))
        return 1;
    return 0;
}

//0 is common year,1 is leap year 
int month_day[2][12] = {31,28,31,30,31,30,31,31,30,31,30,31,\
                        31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int i,j;
    int countday=0;
    printf("diff date calculation\n");
    printf("please make sure first date forehead second date\n");
    printf("------------------------\n");
    // show the month
    
    /*    for(i=0; i<2; i++) */
    /*    { */
    /*    if(i == 0){ */
    /*    printf("Common year\n"); */
    /*    }else{ */
    /*    printf("Leap year\n"); */
    /*    } */
    /*    for(j=0; j<12;j++) */
    /*    { */
    /*    printf("%d\n", month_day[i][j]); */
    /*    } */
    /*    } */

    //stuct the date
    struct date d1;
    struct date d2;
    
    //input the data
    printf("input first date:");
    scanf("%4d%2d%2d", &d1.year, &d1.month, &d1.day);
    printf("input second date:");
    scanf("%4d%2d%2d", &d2.year, &d2.month, &d2.day);

#ifdef DEBUG
    printf("input shown\n");
    printf("D1 %d-%d-%d\n", d1.year,d1.month,d1.day);
    printf("D2 %d-%d-%d\n", d2.year,d2.month,d2.day);
#endif


    //legal input

    while(d1.year != d2.year || d1.month != d2.month || d1.day != d2.day){
        countday++;
        d1.day++;
        if(d1.day > month_day[is_LeapYear(d1.year)][d1.month - 1]){
            d1.day = 1;
            d1.month++;
            if(d1.month > 12){
                d1.year++;
                d1.month = 1;
            }
        }
    }
    
    printf("count day = %d\n", countday);


}
