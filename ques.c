//q 1
// #include <stdio.h>
// int sumDigits(int n){
//     if(n == 0) return 0;
//     return (n % 10) + sumDigits(n / 10);
// }
// int main(){
//     return 0;
// }


//q2
// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }


//q3
// #include <stdio.h>
// int main() {
//     int num, sum = 0;
//     do {
//         scanf("%d", &num);
//         sum += num;
//     } while(num != 0);
//     printf("%d", sum);
//     return 0;
// }


//q4
// #include <stdio.h>
// enum Weekday  {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY,SUNDAY};
// int main() {
//     int day;
//     int valid = 0;
//     scanf("%d", &day);
//     for(int i = 0; i < 7; i++) {
//         if(i == day) {
//             if(i == SUNDAY)
//                 printf("Sunday\n");
//             else if(i == MONDAY)
//                 printf("Monday\n");
//             else if(i == TUESDAY)
//                 printf("Tuesday\n");
//             else if(i == WEDNESDAY)
//                 printf("Wednesday\n");
//             else if(i == THURSDAY)
//                 printf("Thursday\n");
//             else if(i == FRIDAY)
//                 printf("Friday\n");
//             else if(i == SATURDAY)
//                 printf("Saturday\n");
//             valid = 1;
//             break;
//         }
//     }
//     if(!valid)
//         printf("Invalid day!\n");
//     return 0;
// }


//q5
// #include <stdio.h>
// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     if(a >= b && a >= c) {
//         printf("The largest number is: %d\n", a);
//     } 
//     else if(b >= a && b >= c) {
//         printf("The largest number is: %d\n", b);
//     } 
//     else {
//         printf("The largest number is: %d\n", c);
//     }
//     return 0;
// }
