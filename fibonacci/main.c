#include <stdio.h>
#include <stdlib.h>
int sequence(int);
int sequence(int n){
    int result;
    switch(n){
        case 0 : return 0;
        case 1 : return 1;
        default : result=sequence(n-1)+sequence(n-2);
    }
    return result;
}
int main(){
    int n, result;
    printf("Witch number of the sequence you want to know?\n");
    scanf("%i", &n);
    result=sequence(n);
    printf("The %i number in the sequence is: %i", n, result);
    return 0;
}
