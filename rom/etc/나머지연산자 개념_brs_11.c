#include <stdio.h>

int main(void){

    int a, b;       //a=472, b=385
    int num1, num10, num100;

    scanf("%d%d", &a, &b);
   
    num1 = b%10;        //세자리수 숫자의 1의 자리를 구함 ex)385 = 1의자리 '5'를 구함
    num10 = (b/10)%10;      //385의 두번째자리, 385/10 =38.5 int니까 뒤에 사라지므로 38 =>38의 나머지 (%)10 하면 3.8 나머지는 소수점 뒤니까 '8'
    num100 = (b/100)%10;        //계산이 계단식으로 위에 같음

    printf("%d\n", a*num1);
    printf("%d\n", a*num10);
    printf("%d\n", a*num100);
	printf("%d\n", a*b);
    
	return 0;
}
