#include <stdio.h>

int main(void){
    int a = 10;
    int *p = &a;
    double *pd;

    pd = p;
    printf("%d\n", *((int*)pd));
	
	return 0;
}
