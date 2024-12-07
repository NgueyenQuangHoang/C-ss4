#include<stdio.h>

int main(){
    int a , b , c; scanf("%d%d%d", &a,&b,&c);
    if(c < b && c > a){
        printf("so %d nam giua %d va %d", c , a , b);
    }else{
        printf("so %d khong nam giua %d va %d",c , a, b);
    }
    return 0; 
}