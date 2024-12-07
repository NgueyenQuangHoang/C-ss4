#include<stdio.h>

int main(){
    double f, l; 
    printf("tien dien dau thang: "); scanf("%lf", &f);
    printf("tien dien cuoi thang: "); scanf("%lf", &l);
    double sum = l -f;
    if(0 <= sum < 50){
        double giadien = sum * 10000;
        printf("gia dien thang nay la: %0.lf", giadien);
    }else if(50 <= sum < 100){
        double giadien = sum * 15000;
        printf("gia dien thang nay la: %0.lf", giadien);
    }else if(100 <= sum < 150){
        double giadien = sum * 20000;
        printf("gia dien thang nay la: %0.lf", giadien);
    }else if(150 <= sum < 200){
        double giadien = sum * 25000;
        printf("gia dien thang nay la: %0.lf", giadien);
    }else if(200 <= sum){
        double giadien = sum * 30000;
        printf("gia dien thang nay la: %0.lf", giadien);
    }
    return 0;
}