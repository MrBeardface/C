#include <stdio.h>
#include <math.h>

int main(void)
{	
	int counter25,counter10,counter5, counter1;
	float Owed, num;
	counter25 = 0;
	counter10 = 0;
	counter5 = 0;
	counter1 = 0;

	do {
		printf("How much are you owed? ex(4.32)\n");
		scanf("%f", &Owed);
		num = Owed;
	}while(Owed < 0);
	
	num *= 100;
	num = round(num);

	int new_num = num;

	while(new_num > 0)
	{
		while(new_num >= 25){
			counter25++;
			new_num -= 25;			
		}
		while(new_num >= 10){
			counter10++;
			new_num -= 10;			
		}
		while(new_num >= 5){
			counter5++;
			new_num -= 5;			
		}
		while(new_num >= 1){
			counter1++;
			new_num -= 1;			
		}
	}	
	int totalCoins = counter25 + counter10 + counter5 + counter1;
	printf("%d\n", totalCoins );
}