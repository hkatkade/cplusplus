#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int * data = (int *) calloc(n, sizeof(int));
    if (data == NULL) exit(1);
    for(i=0; i<n;i++){
        printf("%d is the inital value, :", data[i]);
        scanf("%d", &data[i]);
    }
    printf("You entered \n");
    for(i=0;i<n;i++){
        printf("%d\t",data[i]);
    }
    return 0;
}