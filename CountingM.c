/*
This code will allow the user to imput a number, eg. 5, then will ask the user how many 
numbers after this would they like to count eg. 10, giving out and output of 6,7,8...15. 

This is to test my knowledge of loops and come up with a creative idea. 
Written by Joel Ruiz 
Language C 
Compiler gcc 
A file will live on Github: https://github.com/Joelruiz39/Computer-Science-

Date 10/13/2024


*/


#include <stdio.h>

void get_count(int starting_num, int numbers_counted); //gets the call from the for-loop


int main(void){
	
	int starting_num, numbers_counted; //int for imputs from the user 

		printf("Welcome, I am a counting machine! Let's begin\n"); // introduction 
		printf("Let's start with any number, this will be our starting point: \n"); //starting point 
		scanf("%d",&starting_num); //assignment to startning point 
		printf("Now give me another number and I'll start counting!: \n"); //by how many numbers will we count 
		scanf("%d", &numbers_counted); //assignment to count 
		printf("_________________________________________________\n"); // line break 
		printf(" \n");	
	
		get_count(starting_num, numbers_counted); //provides the output  		



return 0; 
}



void get_count(int starting_num, int numbers_counted){


	// i = 1  will make sure to start from the starting point as it will be plus 1  
	//i not = will insure the number will not go over 
	//i++ will continue the loop 

	for (int i = 0; i <= numbers_counted; i++){ 
	printf("%d  \n", starting_num + i); // starting point plus i will print out the result. i will continue to grow by 1  

	}
	printf(" \n"); 
}



