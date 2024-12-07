#include<stdio.h>

int main(){
    int t; scanf("%d",&t);
    
    switch (t)
    {
    case 1:
        printf("thang %d co 31 ngay", t);
        break;
    case 2:
        printf("thang %d co 28 hoac 29 ngay", t);
        break;
    case 3:
        printf(" thang %d co 31 ngay", t);
        break;
    case 4:
        printf(" thang %d co 30 ngay", t);
        break;
    case 5:
        printf(" thang %d co 31 ngay", t);
        break;
    case 6:
        printf(" thang %d co 30 ngay", t);
        break;
    case 7:
        printf(" thang %d co 31 ngay", t);
        break;
    case 8:
        printf(" thang %d co 31 ngay", t);
        break;
    case 9:
        printf(" thang %d co 30 ngay", t);
        break;
    case 10:
        printf(" thang %d co 31 ngay", t);
        break;
    case 11:
        printf(" thang %d co 30 ngay", t);
        break;
    case 12:
        printf(" thang %d co 31 ngay", t);
        break;
    default:
        printf("thang khong hop le");
        break;
    }
    return 0;
}