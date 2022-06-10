// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0, i = 0, j = 0;
    char v[] = { 'a', 'e', 'i', 'o', 'u', '\0'};
    char c[2], input[50];
    do{
        printf("Enter any string - \r");
        //scanf("%[^\n]%*c", input);
        scanf("%[^\n]s", input);
        //fgets(input, 50, stdin);
        
        for(i = 0; i < strlen(v); i++){
            while(input[j] != '\0'){
                if(v[i] == input[j]){
                    count++;
                }
                j++;
            }
            if(count == 0){}
            else{ printf("Count of %c in the input string is - %d\n", v[i], count); }
            count = 0;
            j = 0;
        }
        input[50]= NULL;
        printf("\nDo you want to check another string? Y or N\r");
        scanf("%[^\n]s", c);
        printf("\n");
    }while(c[0] == 'Y' || c[0] == 'y');
    
    return 0;
}
