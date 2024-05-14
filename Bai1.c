#include <stdio.h>
int main(void){
    // Your code here!
    int n = 100;
    printf("So nguyen co 2 chu so va la boi cua 7 la: ");

    for(int i = 10; i < n; i++)
    {
        if(i%7==0)
            printf("\t%d", i);
    }
}

