#include <stdio.h>
int main()
{
    double n=0.0;
    for(int k=1;k<=318000;k++){
        if(k%2==1){
            n=n+4./(2.*k-1.);
        }else{
            n=n-4./(2.*k-1.);
        }
        
    }
    printf("%f",n);
    return 0;
}
