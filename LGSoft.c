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
        int sum = 0, i, j, k, value = 0;
        
        for(i = 0; i < N; i++){ sum = sum + A[i]; }
        if((sum % 2 ) == 0){
            //Even Sum
            printf("Even Sum %d\n",sum);
            for(j = 2; j < sum; j++){
                if( (sum % j ) == 0){
                    value = (sum / j);
                }
            }
            
        }
        else{
            printf("Odd Sum %d\n",sum);
            for(k = 3; k < sum; (k+=2)){
                if( (sum % k ) == 0){
                    value = (sum / k);
                }
                else{
                    value = (sum / k) + 1;
                }
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
