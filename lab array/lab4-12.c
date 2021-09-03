#include <stdio.h>
int main(){
	int start_day;
	char str[256];
	int count, length, digit, index;
	int i, j;
	printf("Day of the week of the first month: ");
	scanf("%d", &start_day);
	gets(str);
	printf("Number of days of each month: ");
	gets(str);
	count = 0;
	i=0;
	if(str[0] != '\0'){
		count = 1;
		while (str[i] != '\0') {
			if(str[i] == ' '){
				count++;
			}
		    i++;
		}
	}
	int number[count];
	i = 0;
	index = 0;
	digit = 2;
	if(str[0] != '\0'){
		while (str[i] != '\0') {
			if(str[i] == ' '){
				digit = 2;
				index++;
			}else if(digit == 2){
				number[index] = 10 * (str[i] - '0');
				digit--;
			}else if(digit == 1){
				number[index] += (str[i] - '0');
			}
			i++;
		}
	}
	index = start_day;
	for(i=0; i<count; i++){
		j = 0;
		do{
			if(start_day-1 <= 0){
				printf("%2d ", ++j);	
				index++;
			}else{
				printf("   ");	
				start_day--;
			}
			if(index > 7){
				printf("\n");
				index = 1;
			}
		}while(j < number[i]);
		start_day = index;
		printf("\n");
	}
	return 0;
}
