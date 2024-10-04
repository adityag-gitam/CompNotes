#include <stdio.h>

int main() {
    int a=1, b=0, r, z=0;
    while (a) {
        printf("enter a number:");
        scanf("%d",&a);
        z= z*10 + a;
    }
    a=z;
    while (a>0) {
        r=a%10;
        b=b*10 + r;
        a=a/10;
    }
    printf("%d is Yournumber\n",z/10);
    printf("%d is REVERSE of %d",b,z/10);
    return 0;
}

/*
enter a number:1
enter a number:2
enter a number:3
enter a number:4
enter a number:5
enter a number:0
12345 is Yournumber
54321 is REVERSE of 12345
*/