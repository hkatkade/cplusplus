#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,n;
    char * buffer;
    printf("Enter the length of the string: ");
    scanf("%d", &n);
    buffer = (char *) malloc(n+1);
    if(buffer == NULL) exit(1);
    for(i = 0; i < n; i++){
        buffer[i] = rand()%26 + 'a';
    }
    buffer[i] = '\0';
    printf("Random String: %s", buffer);
    free(buffer);

    return 0; 
}