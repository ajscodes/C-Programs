#include <stdio.h>

// Function declaration
void printMessage(int num);

int main() {
    int input;
    int i=0;
    while(i<=100){
    printf("Enter a number: ");
    printf("(1 for Naam bataiye?, ");
	printf("2 for US mein kaha kaha gaye ho?) \n");
	scanf("%d", &input);
    
   printMessage(input);
   i++;
    }
     
    
    
    return 0;
}

// Recursive function to print message
void printMessage(int num) {
    if (num == 1 || num == 2) {
        printf("Bhupendra Jogi\n");
       // printMessage(num);
        return;
    }
}
