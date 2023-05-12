#include <stdio.h>
int main(){
    char wow[50];
    //this looks weird to accespt spaces and things like that
    scanf("%[^\n]%*", wow);
    printf("%s", wow);
}
