#include <stdio.h>

int main(int argc, char const *argv[])
{
	int row, col, left, right, top, bottom, dir;

	printf("Enter row count: ");
	scanf("%d", &row);
	printf("Enter column count: ");
	scanf("%d", &col);

	int arr[row][col];
	int i, j;

	printf("Enter Array Elements--→ \n");
	for (i = 0; i < row; ++i){
		for (j = 0; j < col; ++j){
			printf("Enter a[%d][%d] element: ",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Array--→ \n");
	for (i = 0; i < row; ++i){
		for (j = 0; j < col; ++j){
			printf("\t%d", arr[i][j]);
		}
		printf("\n");
	}

	printf("Array Elements in spiral way---→\n");
	
	left    = 0 ;
	right   = col - 1 ;
	top     = 0 ;
	bottom  = row -1 ;

	while((left <= right) && (top <= bottom)){
		if (dir == 0){
			for(int k = left; k <= right; k++)
				printf("%d ", arr[top][k] );
			top++;
		}
		else if (dir == 1){
			for(int k = top; k <= bottom; k++)
				printf("%d ", arr[k][right] );
			right--;
		}
		else if (dir == 2){
			for(int k = right; k >= left; k--)
				printf("%d ", arr[bottom][k] );
			bottom--;
		}
		else if (dir == 3){
			for(int k = bottom; k >= top; k--)
				printf("%d ", arr[k][left] );
			left++;
		}

		dir = (dir+1)%4;
	}

	return 0;
}

/* Learn from mycodeschool youtube channel. */
