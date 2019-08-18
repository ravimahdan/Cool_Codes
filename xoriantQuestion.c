/*
* Xoriant Company Question
* Q. Enter integers until negative number is entered and then print the number
*    which is less than 100 but highest among the numbers which are less than 100.
*/
#include <stdio.h>

//Array Size.
#define MAX 1000

//Swap Values in Selection sort used in the program.
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
// Selection Sort.
void sort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
}
//Main Program Start here.
int main(){

	int arr[MAX], temp_var, i = 0, status;

	while(i >= 0){
		printf("Enter %d variable: ",(i+1));
		scanf("%d", &temp_var);
		//Exit Condition Check.
		if(temp_var < 0) { break;} 
		arr[i] = temp_var ;
		//Counter Increment
		++i;
	}
	printf("Given Elements: \n");
	for(int j = 0; j < i; ++j){
		printf("%d\t",arr[j]);
	}
	printf("\n");
	//Sort Array
	sort(arr, i);
	
	printf("Find less than 100 and Highest no.\n");
	for(int m = 0; m < i; m++){
		if (arr[m] > 100){ printf("Number is %d\n", arr[m-1]); break;}
	}

	return 0;
}
//Main Program Ends here.
