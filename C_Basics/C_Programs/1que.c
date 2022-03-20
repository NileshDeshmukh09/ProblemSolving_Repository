// # include <stdio.h>
// // mutiplication of 10 in decreasing order.
// int main(){
//         printf("\n\n\t***** Multiplication of 10  ****\n\n");
//     for (int i = 10; i ; i--){
//         printf("\t\t10 X %d = %d\n", i , 10*i);
//     }
//     return 0;
// }

// 2.

// # include <stdio.h>
// // sum of 1st 10 Natural Numbers
// int main(){
//     int i =1,sum = 0;
//     while(i <=10){
//          sum = sum + i;

//        printf("Sum : %d\n", sum);

//        i++;
//     }

// 3.

#include <stdio.h>

int main()
{
    int i, prime;
    while (i <= 45)
    {
        if (45 % i == 0)
        {
            printf("45 is not a prime Number");
            break;
        }
        else{
            printf("45 is not a prime Number");
        }
        i++;
    }
    return 0;
}
