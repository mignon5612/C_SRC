#include <stdio.h>

void input_ary(double *pa, int size);       //함수선언
double fine_max(double *pa, int size);
double fine_min(double *pa, int size);

int main(void){
    double ary[5];
    double max, min;
    int size = sizeof(ary)/sizeof(ary[0]);

    input_ary(ary, size);       //함수호출 
    max = fine_max(ary, size);
    printf("배열의 최대값 : %.lf\n", max);

    min = fine_min(ary, size);
	printf("배열의 최소값 : %.lf\n", min);
	return 0;
}

void input_ary(double *pa, int size){
    int i;

    printf("%d개의 실수값 입력 : ", size);
    for(i = 0; i < size; i++){
        scanf("%lf, pa + i");
    }
}

double fine_max(double *pa, int size){
    double max;
    int i;

    max = pa[0];
    for(i = 0; i < size; i++){
        if (pa[i] > max) max = pa[i];
    }

    return max;
}

double fine_max(double *pa, int size){
    double min;
    int i;

    min = pa[0];
    for(i = 0; i < size; i++){
        if (pa[i] < min) min = pa[i];
    }

    return min;
}
