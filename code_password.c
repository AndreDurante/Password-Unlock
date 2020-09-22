#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*no comments*/

int main(){
    int senha = 2005;
    int x;
    printf("please, enter with your password (is a number between 1000 and 2006): \n");
  
    scanf("%d", &x);
    while(x != 2005){
        printf("wrong password, please try again!\n");
        printf("password: ");
        scanf("%d", &x);
        
    }
        printf("\ncorrect password, entering...\n");
        
    return 0;
    
}
