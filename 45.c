#include<stdio.h>
int getnum();    

int main() {

    int input = 0;
    input = getnum();
    while (!((input <= 9) && (input >= 1)))
    {
        printf("[ERROR] The number you entered is out of range");
      
        input = getnum();
    }
    
    printf(" The number you entered is %d", input);
    return 0;
}      
