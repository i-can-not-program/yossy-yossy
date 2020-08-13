#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000
int main(){
    char* name = (char *)malloc(MAXLINE * sizeof(char));
    size_t size = MAXLINE;
    printf("Give me some characters (your name)\n");
    getline(&name,&size,stdin);
    printf("Do you like yossy %s\n",name);
    return 0;
}