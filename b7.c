#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    if(n%4==0 && n%100 != 0|| n%400==0){
        printf("nam %d la nam nhuan", n);
    }else if( n%100 && n%400 != 0){
        printf("nam %d la nam khong nhuan",n);}
    return 0;
}