#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);

int main(){
    int len;
    char line[MAXLINE];

    while((len = getline(line, MAXLINE)) > 0){
        if(len > 80){
            printf("%s",line);
        }
    }

    return 0;
}

int getline(char line[], int maxline){
    int c, i;

    for(i = 0; i < maxline && (c=getchar()) != EOF && c!='\n'; ++i){
        line[i] = c;
    }
    if(c == '\n'){
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}