#include <stdio.h>

int main() {
    int a, b=0, r, z;
    printf("enter a number:");
    scanf("%d",&z);
    a=z;
    while (a>0) {
        r=a%10;
        b=b + r*r*r;
        a=a/10;
    }
    if (b==z){
        printf("ARMSTRONG!!!");
    }
    return 0;
}
