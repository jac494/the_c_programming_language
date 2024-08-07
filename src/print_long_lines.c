#include <stdio.h>
#define MAXLINE 1000
#define PRINTLENMAX 80

/* Exercise 1.17
 * Write a program to print all input lines that are longer than 80 characters
 */

int get_line(char line[], int maxline);

int main() {
    int len;
    char line[MAXLINE];
    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > PRINTLENMAX) {
            printf("%s", line);
        }
}

int get_line(char s[], int lim) {
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}