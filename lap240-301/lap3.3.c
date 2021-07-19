#include<stdio.h>
int main(){
    int starter , dessert , main_c,prices1,prices2,x;
    scanf("%d %d %d",&starter,&dessert,&main_c);
    printf("Enter number of starter: %d\n",starter);
    printf("Enter number of dessert: %d\n",dessert);
    printf("Enter number of main_c: %d\n",main_c);

    if((starter > 0) && (dessert > 0) && (main_c > 0)){
        prices1 = ((starter*80)+(dessert*40)+(main_c*100));
        printf("total cost =%d bath\n",prices1);
    }  
    else if(main_c >= 2){
         x = dessert = dessert-1;
         prices2 = ((starter*80)+((x)*40)+(main_c*100));
        printf("total cost =%d bath\n",prices2);
    }
    return 0;
}