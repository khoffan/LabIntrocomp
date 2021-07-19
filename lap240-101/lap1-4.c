#include<stdio.h>
#include<math.h>
int main(){
	int protene,carb,FAT,enegy2;
	float calorie , enegy1;
	enegy1 = 4.4;
    enegy2 = 9;
	scanf("%d",&protene);
	scanf("%d",&carb);
    scanf("%d",&FAT);
	printf("Enter your protean is :%d\n",protene);
	printf("Enter your carb is :%d\n",carb);
    printf("Enter your FAT :%d\n",FAT);
	calorie = ((protene*enegy1)+(carb*enegy1)+(FAT*enegy2));
	printf("Volum is : %.1f\n",calorie);
	return 0;
}