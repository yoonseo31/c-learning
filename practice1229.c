// 1. 변수 선언 주의 사항 예제1 54p
// int main(void)
// {
//     int num1;
//     int num2;
//     num1=0;
//     num2=0;
// }

// 2. 변수의 자료형 (덧셈)
// #include <stdio.h>

// int main(void)
// {
//     int num1=3;
//     int num2=4;
//     int result=num1+num2;

//     printf("덧셈 결과: %d \n", result);
//     printf("%d+%d=%d \n", num1, num2, result);
//     printf("%d와(과) %d의 합은 %d입니다. \n", num1, num2, result);
//     return 0;
// }

// 3. 변수의 자료형 (다양한 연산자)
// #include <stdio.h>

// int main(void)
// {
//     int num1=9, num2=2;
//     printf("%d+%d=%d \n", num1, num2, num1+num2);
//     printf("%d-%d=%d \n", num1, num2, num1-num2);
//     printf("%d*%d=%d \n", num1, num2, num1*num2);
//     printf("%d/%d의 몫=%d \n", num1, num2, num1/num2);
//     printf("%d/%d의 나머지=%d \n", num1, num2, num1%num2);
//     return 0;
// }

// 4. 복합 대입 연산자
// *=, /=, %=, +=, -=, <<=, >>=, &=, ^=, |=

// ex) a= a + b -> a+=b
// #include <stdio.h>

// int main(void)
// {
//     int num1=2, num2=4, num3=6;
//     num1 += 3; // num1 = num1 + 3;
//     num2 *= 4; // num2 = num2 * 4;
//     num3 %= 5; // num3 = num3 % 5;
//     printf("Result: %d, %d, %d \n", num1, num2, num3);
//     return 0;
// }

// 5. 부호연산의 의미를 갖는 + 연산자와 - 연산자
// #include <stdio.h>

// int main(void)
// {
//     int num1 = +2;
//     int num2 = -4;

//     num1 = -num1;
//     printf("num1: %d \n", num1);
//     num2 = -num2;
//     printf("num2: %d \n", num2);
//     return 0;
// }

// 6. 증가 감소 연산자1
// #include <stdio.h>

// int main(void)
// {
//     int num1=12;
//     int num2=12;
//     printf("num1: %d \n", num1);
//     printf("num1++: %d \n", num1++); // 후위 증가
//     printf("num1: %d \n\n", num1);

//     printf("num2: %d \n", num2);
//     printf("++num2: %d \n", ++num2); // 전위 증가
//     printf("num2: %d \n", num2);
//     return 0;
// }

// 7. 증가 감소 연산자2
// #include <stdio.h>

// int main(void)
// {
//     int num1=10;
//     int num2=(num1--)+2; // 후위 감소

//     printf("num1: %d \n", num1);
//     printf("num2: %d \n", num2);
//     return 0;
// }