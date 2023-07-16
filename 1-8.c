#include <stdio.h>

int main(){
    int c;

    int blanks = 0;
    int tabs = 0;
    int newlines = 0;

    char c;
    while ((c = getchar()) != EOF){
        if (c == ' '){
        ++blanks_nr;
        }else if (c == '\t'){
        ++tabs_nr;
        }else if (c == '\n'){
        ++newlines_nr;
        }
    }

    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", blanks, tabs, newlines);

    return 0;
}