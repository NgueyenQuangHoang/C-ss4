#include<stdio.h>

int main(){
    double a;
    scanf("%lf", &a);
    if (a >=0 )
    {
        printf("%0.lf la so duong", a);
    }else{ printf("%0.lf la so am", a);}
    return 0;
}