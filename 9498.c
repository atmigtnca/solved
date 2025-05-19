#include<stdio.h>

int main(){
    int a;
    char gra;
    scanf("%d",&a);

    if (a>=90)
        gra = 'A';
    else if (a>=80)
        gra = 'B';
    else if (a>=70)
        gra = 'C';
    else if (a>=60)
        gra = 'D';
    else
        gra = 'F';

    printf("%c\n",gra);

    return 0;
}