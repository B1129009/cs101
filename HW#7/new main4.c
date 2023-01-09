#include <stdio.h>

int main() {
    int y,j,k,i=12345;
    k=i%10;
    if(i<1000){
        j=0;
    }else{
        j=(i/1000)%10;
    }
    y=i-(1000*j)+(1000*k)-k+j;
    printf("%d",y);
    return 0;
}
