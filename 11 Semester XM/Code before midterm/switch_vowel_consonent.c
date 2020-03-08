//C program to check whether a character is vowel or consonant using switch statement
#include <stdio.h>

int main() {
    char c;

    /*
     * Take a character as input form user
     */
    printf("Enter an Alphabet\n");
    scanf("%c", &c);

    /* Check If input alphabet is vowel or not
    using switch statement */
    switch(c) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': printf("%c is VOWEL", c);
            break;
        default: printf("%c is CONSONANT", c);
    }

    return 0;
}
