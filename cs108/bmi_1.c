/*
This program will prompt users to imput their weight
and height and then it will calculate their BMI 
and declare where they rank

written by Joel Ruiz 
language C / GCC compiler 
date 10/2/2024 


*/

#include <stdio.h> 
#include <math.h> 

double get_bmi(int weight, double height);
int main(void) 
{

	int  weight;
	double height, bmi; 
	printf("Enter your weight in lbs: \n"); 
	scanf("%d",&weight); 
	printf("Enter your height: \n"); 
	scanf("%lf", &height);

	bmi = get_bmi(weight, height); 

	printf("your bmi is %.1f\n", bmi); 

return 0; 

}

double get_bmi(int weight, double height) {

	height = height * 12;/*converting into inch*/  
	return (703 * weight) / (height * height);
	

	}
