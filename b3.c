#include<stdio.h>

int main(){
    int n; scanf("%d", &n);

    if( n%3==0 && n%5!=0 ){
        printf("%d chi chia het cho 3",n);
    }else if(n%3!=0 && n%5==0){
        printf("%d chi chia het cho 5",n);
    }else if(n%3==0 && n%5==0){
        printf("%d chia het cho ca 5 & 3",n);
    }
    return 0;
}