#include <stdio.h>
#include <string.h>
//sleep
#include <unistd.h>
int main(){
    char a[]="Shit";
    char b[20]={'P','r','o','g','r','a','m','s','\0'};
    //\0 is null btw
    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));
    sleep(5)
    return 0;
}
