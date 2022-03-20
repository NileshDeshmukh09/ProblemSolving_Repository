# include <stdio.h>
void display(); //function prototype
int main(){
    
    int a ;
    printf("\n\nIntializing display function!\n\n");
    display(); //function call
    printf("display functions works!\n\n");
    return 0;
}

// function Defination
void display(){
    printf("Hey! , function display is here!\n\n");
}