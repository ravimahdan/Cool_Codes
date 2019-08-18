/*
* Enter any number and If number is between 1-9, then print it as a string,
* Otherwise check number is even or odd.
* -----------------------------------------------
* Author   : Ravi Mahdan
* Email	   : inforavimahdan@gmail.com
* LinkedIn : https://www.linkedin.com/ravimahdan
* -----------------------------------------------
*/

//Include Standard Input/Output Header File.
#include <stdio.h>

enum Count{ one = 1, two, three, four, five, six, seven, eight, nine};

//Function for printing the enum string using entered number.
void getDayName(enum Count no){
   switch (no) 
   {
      case one:   	return (printf("one\n"));
      case two: 	return (printf("two\n"));
      case three: 	return (printf("three\n"));
      case four: 	return (printf("four\n"));
      case five: 	return (printf("five\n"));
      case six: 	return (printf("six\n"));
      case seven: 	return (printf("seven\n"));
      case eight: 	return (printf("eight\n"));
      case nine: 	return (printf("nine\n"));
       
   }
}


//Main Start Here.
int main(){
	
	int n, status;
	enum Count Number;

	do{
		printf("Enter any number: ");
		scanf("%d", &n);
		Number = n;
		( ( n >= 1 ) && ( n <= 9 ) ) ? getDayName(Number) : ( ((n%2) == 0)? (printf("Even\n")) : (printf("Odd\n")) ) ; 

	}while(n > 0);

	return 0;
}
//Main Ends here.
