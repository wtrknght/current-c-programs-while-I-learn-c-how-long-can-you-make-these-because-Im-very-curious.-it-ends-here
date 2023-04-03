#include <stdio.h>
#include <unistd.h>
int main(){
	int ho[] = {1,2,3,4,5};
	for(int h = 0; h <= 4; h++){
		printf("%d\n", ho[h]);
		sleep(1);
	}
	sleep(5);
	return 0;
}
