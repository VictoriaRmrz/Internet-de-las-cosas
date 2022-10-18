#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
    char c;
    char min;
    int vocals = 0;
    int n = 0;
    do{
        n = read(STDIN_FILENO, &c, 1);
        min = tolower(c);
        if (min == 'a' || min == 'e' || min == 'i' || min == 'o' || min == 'u'){
            vocals = vocals + 1;
        }
        

    }while( n != 0);
    printf("\nEl total de vocales es: %d \n", vocals);
    return 0;

}