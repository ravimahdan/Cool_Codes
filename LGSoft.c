/*
* Find Minimus no. of blocks in which total legos are arranged
* when you have been given "N (1<=i<=N)" no. of blocks with diffent no. of legos initially.
* -----------------------------------------------
* Author   : Ravi Mahdan
* Email	   : inforavimahdan@gmail.com
* LinkedIn : https://www.linkedin.com/ravimahdan
* -----------------------------------------------
*/
//Include Standard Input/Output Header File.
#include <stdio.h>

int findMin(int N, int A[]){
        int sum = 0, i, j, value;
        
        for(i = 0; i < N; i++){ sum = sum + A[i]; }
        
        for(j = 2; j < N; j++){
            if( (sum % j ) == 0){
                value = (sum / j);
            }
        }
        printf("Minimum No of Blocks required are %d\n",value);        
        return 0;
}

int main() {
    int n, i;
    printf("Enter Blocks: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter Block's Legos Number: \n");
    for (i = 0; i < n; ++i) {
        printf("%d - ", (i+1));
        scanf("%d", (A+i));
    }
    findMin(n, A );
    return 0;
}
