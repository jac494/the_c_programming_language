#include <stdio.h>

/* Exercise 1.9
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
*/

#define TRUE 1
#define FALSE 0
#define SPACE ' '
#define TAB '\t'

int main() {
    int c;
    int spaceprint = FALSE;
    while ((c = getchar()) != EOF) {
        if (c == SPACE || c == TAB) {
            if (spaceprint == TRUE)    // we've already printed a space, do nothing
                ;
            else {
                spaceprint = TRUE;     // set spaceprint to TRUE
                putchar(SPACE);        // print a single space
            }
        }
        else {
            if (spaceprint == TRUE) {
                spaceprint = FALSE;   // if spaceprint was set, unset it
            }
            putchar(c);
        }
    }
}