//문제03-1
// #include <stdio.h>

// int main(void)
// {
//     int num1,num2;

//     scanf("%d %d", &num1, &num2);
//     printf("%d - %d = %d, %d * %d = %d \n", num1, num2, num1-num2, num1, num2, num1*num2);

//     return 0;
// }
//문제03-2
// #include <stdio.h>

// int main(void)
// {
//     int num1, num2, num3;
    
//     scanf("%d %d %d", &num1, &num2, &num3);
//     printf("%d * %d + %d = %d \n", num1, num2, num3, num1*num2+num3);

//     return 0;
// }
//문제 03-3
// #include <stdio.h>

// int main(void)
// {
//     int num1;

//     scanf("%d", &num1);
//     printf("%d * %d = %d \n", num1, num1, num1*num1);

//     return 0;
// }
//문제 03-4
// #include <stdio.h>

// int main(void)
// {
//     int num1, num2;
    
//     scanf("%d %d", &num1, &num2);
//     printf("%d / %d = %d, %d %% %d = %d \n", num1, num2, num1/num2, num1, num2, num1%num2);

//     return 0;
// }
//문제 03-4
// #include <stdio.h>

// int main(void)
// {
//     int num1, num2, num3;

//     scanf("%d %d %d", &num1, &num2, &num3);
//     printf("%d \n", (num1-num2)*(num2+num3)*(num3%num1));
   
//     return 0;
// }
// 데이터 표현 방식의 이해
//문제 04-1 10진수 8부터 20까지를 2진수와 16진수로 각각표현해보자. 참고로 이는 그림 04-2와 04-3을 참조하면 쉽게 해결이 가능한 문제이다.
// 10진수 0 1  2  3   4   5   6   7    8    9   10   11   12   13   14    15   16    17    18    19     20
// 2진수  0 1  10 11 100 101 110 111 1000 1001 1010 1011 1100 1101 1110  1111 10000 10001 10010 10011  10100
// 16진수 0 1  2  3   4   5   6   7    8    9    A    B    C    D    E     F   10    11    12    13     14
// // 문제 04-2 10진수 5부터 18까지를 8진수로 표현해보자. 8진수에 대해서는 언급하지 않았지만 0부터 7까지 8개의 숫자만 사용하는 진법이라는 
// // 사실만 이해하면 충분히 해결할수있다. 참고로 필자는 이문제를 통해서 여러분이 진법에대한 기본적인 원리를 이해했는지를 묻고있는것이다.
// 5 6 7 8 9 10 11 12 13 14 15 16 17 18
// 0 1 2 3 4 5 6 7 8 