# include <stdio.h>

int main(){
    int *a  = 56;
    int b  = 34;

    printf("The address 'a' of value %d is %u \n",a, &a);
    printf("The address 'b' of value %d is  %u \n", b, &b);
    printf(" %d", a);
    return 0;
} 