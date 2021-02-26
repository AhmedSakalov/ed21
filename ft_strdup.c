#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
char *ft_strdup(char *src){
    int i = 0;

    while(src[i] != '\0'){
        i++;
    }
    char *s = NULL;
    s = (char *)malloc(i);
    if(NULL == s){;
        return s;
    }
    s = src;
    return s;
}
int main(){
    char *src = "Hello World!";
    char *dist = ft_strdup(src);
    printf("%s", dist);
    return 0;
}