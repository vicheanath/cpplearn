#include <stdio.h>
#include <string.h>

int main(){
    char str[] = { "abbba"};


    // start from leftmost and
    // rightmost corners of str

    int l =0 ;
    int h = strlen(str) -l ;

    // Keep comparing characters
    // while they are same
    while (h>1)
    {
        if (str[l++] != str[h--]){
            printf("%s is not a palindrome\n",str);
            return 0;
        }
    }

    printf("%s is a palidrome\n",str);
    
}

