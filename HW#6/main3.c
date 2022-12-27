#include <stdio.h>

int main()
{
    int year =2022;
    if(year%400==0){
        printf("%d是閨年\n",year);
    }else if(year%4==0){
        printf("%d是閨年\n",year);
    }else{
        printf("%d不是閨年\n",year);
    }
    return 0;
}
