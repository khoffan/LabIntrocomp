#include<stdio.h>
int main(){
    int total_sales,sales_Commission;
    scanf("%d",&total_sales);
    if(total_sales<1000){
        sales_Commission = (total_sales*5)/100;
        printf("commission = %d\n",sales_Commission);
    }
    else if(1000 <= total_sales && total_sales <= 5000){
        sales_Commission = (total_sales*7)/100;
        printf("commission = %d\n",sales_Commission);
    }
    else if(total_sales > 5000){
        sales_Commission = (total_sales*10)/100;
        printf("commission = %d\n",sales_Commission);
    }
    return 0;
}