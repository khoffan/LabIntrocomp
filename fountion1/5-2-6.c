#include<stdio.h>
int q(float x,float y);
int main(){
	float x,y;
	printf("Enter x and y\n");
	printf("x =",x); scanf("%f",&x);
	printf("y =",y); scanf("%f",&y);
	q(x,y);
}
int q(float x,float y){
	if(x > 0 && y > 0){
		printf("(Q=1)  Quadrant 1");
	}
	else if(x < 0 && y > 0){
		printf("(Q=2)  Quadrant 2");
	}
	else if(x < 0 && y < 0){
		printf("(Q=3)  Quadrant 3");
	}
	else if(x > 0 && y < 0){
		printf("(Q=4)  Quadrant 4");
	}
	else if(x > 0 && y == 0){
		printf("(Q=5)  X-Axis");
	}
	else if(x == 0 && y > 0){
		printf("(Q=6)  y-Axis");
	}
	else if(x == 0 && y == 0){
		printf("(q=0) Original");
	}	
}
