/*
* Fibonacci Series.
* -----------------------------------------------
* Author   : Ravi Mahdan
* Email	   : inforavimahdan@gmail.com
* LinkedIn : https://www.linkedin.com/ravimahdan
* -----------------------------------------------
*/
//Include Standard Input/Output Header File.
#include <stdio.h>

//Main Program Starts Here.
int main(){

	//Local Variable Declarations.
	int a = 0, b = 1, c, num, i = 0;

	//Input the number of element.
	printf("Enter no of element to be printed: ");
	scanf("%d", &num);

	printf("Fibonacci Series is \n");
	while(i < num){
		printf("%d\n", a);		
		c = a + b ;
		a = b;
		b = c;
		//Counter increment.
		++i;
	}
	return 0;
}
//Main Program Ends here.
