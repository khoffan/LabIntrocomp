#include<stdio.h>
int main()
{
	float books[2][5][3] = 
	{
		{
			
		{280.50, 350, 152.5},
		{410.00, 280, 202.5},
		{1590.75, 406, 858.7},
		{296.50, 310, 102.5},
		{1210.50, 450, 952.0},
		
		},
		{
		{80.50, 75, 45},
		{2015, 500, 575},
		{120.0, 25, 30.75},
		{456.50, 150, 200},
		{110.50, 50, 130},
			
		}
	};


int i,j,k;
float maxPrice = 0, minPage = books[0][0][1], avgWeight=0;
float sum=0;

printf("%32s %10s %11s\n", "Price", "Pages", "Weight");
for(i=0; i<2; i++)
{
	printf("Level %d\n",i+1);
	for(j=0,sum=0; j<5; j++)
	{
	    printf("%5sBook position %2d : %8.2f %10d %11.2f\n","", j+1, books[i][j][0], (int)books[i][j][1], books[i][j][2]);
	    if(books[i][j][0] > maxPrice)
	    {
		    maxPrice = books[i][j][0];
	    }
		if(minPage > books[i][j][1])
		{
			minPage = books[i][j][1];
		}
		sum += books[i][j][2];
	}
    avgWeight= sum/5;
	printf("Average Weight of level %d = %.2f\n\n",i,avgWeight);
}

printf("\nMax price = %.2f\n",maxPrice);
printf("Min page = %d\n",(int)minPage);

return 0;
}

