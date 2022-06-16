#include<stdio.h>

int main(){
    int f,c;
    printf("Enter fahrenheit :=");
    scanf("%d",&f);
    c = (f - 32)*0.56;
    printf("Celsius is = %d", c);
    return 0;
}