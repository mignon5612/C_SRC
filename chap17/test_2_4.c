#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{             //구조체정의
    char name[10];
    int num;
    int kor;
    int eng;
    int math;
    int tot;
    double avg;
    char grade;
};

void printf_student(struct student*s1);
void input_info(struct student*s1);
void sort_avg(struct student*s1);

int main(void){
    
    struct student s1[5];
    int i;
    int j;

    input_info(s1);

    // for(i=0; i<2; i++){
    //     printf("학번 : ");
    //     scanf("%d", &s1[i].num);
    //     printf("이름 : ");
    //     scanf("%s", s1[i].name);
    //     printf("국어, 영어, 수학 점수 : ");
    //     scanf("%d%d%d", &s1[i].kor, &s1[i].eng, &s1[i].math);

    //     s1[i].tot = s1[i].kor + s1[i].eng + s1[i].math;          //총점
    //     s1[i].avg = s1[i].tot / 3.0;                            // 평균구하기 세과목의 평균

    // }
    printf("# 정렬 전 데이터...\n");
    printf_student(s1);
 
    sort_avg(s1);

    printf("# 정렬 후 데이터...\n");
    printf_student(s1);

    // for(j=0; j<2; j++){
    //     printf("%d %s %4d %4d %4d\n", s1[j].num, s1[j].name, s1[j].kor, s1[j].eng, s1[j].math);
    // }

	return 0;
}

void printf_student(struct student*s1){
    int j;

    for(j=0; j<5; j++){
        printf("%d %s %4d %4d %4d %5d %6.1lf\n", 
                s1[j].num, s1[j].name, s1[j].kor, s1[j].eng, s1[j].math, s1[j].tot, s1[j].avg);
    }
}

void input_info(struct student *s1)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("학번 : ");
        scanf("%d", &s1[i].num);
        printf("이름 : ");
        scanf("%s", s1[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d%d%d", &s1[i].kor, &s1[i].eng, &s1[i].math);

        s1[i].tot = s1[i].kor + s1[i].eng + s1[i].math;         //총점
        s1[i].avg = s1[i].tot / 3.0; // 평균구하기 세과목의 평균
    }
}

void sort_avg(struct student*s1){
    int i, j;
    struct student temp;

    for(i=0; i<(5-1); i++){
        for(j=i+1; j<5; j++){
            if(s1[i].avg < s1[j].avg){
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }
}