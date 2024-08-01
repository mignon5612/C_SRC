#include <stdio.h>
#include <string.h>

int main(void){
	char fruit[20] = "strawberry";
	
	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n", fruit, "jam");
	
	printf("---------------------------------\n\n");
	
	strcpy(fruit, "banana");
	
	return 0;
}
