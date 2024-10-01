#include <stdio.h>

int main() {
    int a, b, r;
    printf("enter a number:");
    scanf("%d",&a);
    while (a>0) {
        r=a%10;
        b=b*10 + r;
        a=a/10;
    }
    printf("%d REVERSE!",b);
    return 0;
}
