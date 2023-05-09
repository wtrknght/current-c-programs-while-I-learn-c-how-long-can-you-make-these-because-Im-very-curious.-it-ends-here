#include <stdio.h>
#include <string.h>
//sleep
#include <unistd.h>
int main(){
    char a[]="Shit";
    char b[20]={'P','r','o','g','r','a','m','s','\0'};
    //\0 is null btw
    // using the %d to print int
    int c = strlen(a);
    int d = strlen(b);
    printf("Length of string a = %d \n", c);
    printf("Length of string b = %d \n", d);
    sleep(5);
    return 0;
}
