#include <stdio.h>

int main() {
    int a, b=0, r, z;
    printf("enter a number:");
    scanf("%d",&z);
    a=z;
    while (a>0) {
        r=a%10;
        b=b*10 + r;
        a=a/10;
    }
    printf("%d is REVERSE of %d\n",b,z);
    if (b==z){
        printf("PALINROME!!!");
    }
    return 0;
}
