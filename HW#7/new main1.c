#include <stdio.h>

int main()
{
    int n=7,i,s,j,k=n;
   for(i=1;i<k+1;i++){
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
