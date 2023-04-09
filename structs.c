#include <stdio.h>
// for sleep function
#include <unistd.h>
int main(){
	struct people{
		char *name;
		int age;
	};
	struct people person1 = {"Wyatt", 12};
	printf("Hi, I'm %s and I'm %d", person1.name, person1.age);
	sleep(5);
}