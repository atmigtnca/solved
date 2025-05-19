#include <stdio.h>

int main(){
    int m,h,a;
    scanf("%d %d",&h,&m);
    a = (h*60)+m-45;


   /* if (h == 0)
        h = 1;
    

    h *= 60;
    a = m + h - 45;

    h = a / h;
    m = a - (60 * h);
    */
    printf("%d\n",a);
    printf("%d %d\n", h,m);

    return 0;
}