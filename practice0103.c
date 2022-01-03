// 1. 관계 연산자 예제
// #include <stdio.h>

// int main(void)
// {
//     int num1=10;
//     int num2=12;
//     int result1, result2, result3;

//     result1=(num1==num2);
//     result2=(num1<=num2);
//     result3=(num1>num2);

//     printf("result1: %d \n", result1);
//     printf("result2: %d \n", result2);
//     printf("result3: %d \n", result3);
//     return 0;
// }

// 2. 논리 연산자 예제
// #include <stdio.h>

// int main(void)
// {
//     int num1=10;
//     int num2=12;
//     int result1, result2, result3;

//     result1 = (num1==10 && num2==12);
//     result2 = (num1<12 || num2>12);
//     result3 = (!num1);

//     printf("result2: %d \n", result1);
//     printf("result2: %d \n", result2);
//     printf("result3: %d \n", result3);
//     return 0;
// }

// 3. 콤마 연산자 예제
// #include <stdio.h>

// int main(void)
// {
//     int num1=1, num2=2;
//     printf("Hello"), printf("world! \n");
//     num1++, num2++;
//     printf("%d", num1), printf("%d", num2), printf("\n");
//     return 0;
// }

// 4. scanf 예제1
// #include <stdio.h>

// int main(void)
// {
//     int result;
//     int num1, num2;

//     printf("정수 one: ");
//     scanf("%d", &num1); // 첫 번째 정수 입력
//     printf("정수 two: ");
//     scanf("%d", &num2); // 두 번째 정수 입력

//     result=num1+num2;
//     printf("%d + %d = %d \n", num1, num2, result);
//     return 0;
// }

// scanf 예제2
// #include <stdio.h>

// int main(void)
// {
//     int result;
//     int num1, num2, num3;

//     printf("세 개의 정수 입력: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     result=num1+num2+num3;
//     printf("%d + %d + %d = %d \n", num1, num2, num3, result);
//     return 0;
// }

// 문제03-1
// #include <stdio.h>

// int main(void)
// {
//     int result1, result2;
//     int num1, num2;

//     printf("두 개의 정수 입력");
//     scanf("%d %d", &num1, &num2);

//     result1=num1-num2, result2=num1*num2;
//     printf("%d - %d = %d, %d * %d = %d \n", num1, num2, result1, num1, num2, result2);
//     return 0;
// }

// 문제03-1 new version
// #include <stdio.h>

// int main(void)
// {
//     int num1, num2;

//     printf("두 개의 정수 입력");
//     scanf("%d %d", &num1, &num2);

//     printf("%d - %d = %d, %d * %d = %d \n", num1, num2, num1-num2, num1, num2, num1*num2);
//     return 0;
// }

// 문제03-2
// #include <stdio.h>

// int main(void)
// {
//     int num1, num2, num3, result1;

//     scanf("%d %d %d", &num1, &num2, &num3);
//     result1=num1*num2+num3;
//     printf("%d x %d + %d = %d \n", num1, num2, num3, result1);
//     return 0;
// }

// 문제03-2 new version

// #include <stdio.h>

// int main(void)
// {
//     int num1, num2, num3;

//     scanf("%d %d %d", &num1, &num2, &num3);
//     printf("%d x %d + %d = %d \n", num1, num2, num3, num1*num2+num3);
//     return 0;
// }