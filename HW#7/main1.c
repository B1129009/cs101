#include <stdio.h>

int main()
{
    int n=7;
    int i;
    int s;
    int j;
   for(i=1;i<8;i++){
       for(s=n;s>0;s--){
           printf(" ");
       }
       for(j=1;j<=i;j++){
           printf("%d ",i);
     }
     printf("\n");
     n--;
  }
    return 0;
}
