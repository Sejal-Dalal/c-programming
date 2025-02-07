#include<stdio.h>
#include<conio.h>

int main() {
    float p, r, n, si;
    printf("Enter p, r, n :");
    scanf("%f%f%f", &p, &r,&n );
    si = (p*r*n)/100;
    printf("simple intrest is = %f", si);
    getch();
    return(0);
}
