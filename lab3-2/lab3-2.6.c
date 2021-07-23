#include<stdio.h>
int main(){
    int i,weights,total,num;
    for(i=1;i<=1000;i++){
        printf("Enter weight: ",i);
        scanf("%d",&weights);
        total = total+weights;
			 
		if(total > 400){
        	printf("Over\n");
        	break;
    	}
    }printf("value over:%d",total);
   
    return 0;
}