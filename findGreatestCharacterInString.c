  
/*
* Find the greatest character in an entered string.
* -----------------------------------------------
* Author   : Ravi Mahdan
* Email	   : inforavimahdan@gmail.com
* LinkedIn : https://www.linkedin.com/ravimahdan
* -----------------------------------------------
*/
//Include Standard Input/Output Header File.
#include <stdio.h>
#include <string.h>
#define MAX 1000
int main(){

        int i = 0, j = 0;
        char sentence[MAX];
        printf("Enter any sentence: ");
        scanf("%[^\n]%*c", sentence);
        int len = strlen(sentence), count = sentence[0];
        while( sentence[i] != '\0'){
                for( j = 0; sentence[i] > count ; ++j){
                        count = sentence[i];
                }
                ++i;
        }
        printf("Greater Character is %c.\n", count);

        return 0;
}
