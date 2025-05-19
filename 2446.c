/*
예제 입력
5
예제 출력
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
*/

#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    for (;a >= 1;a--)
    {
        for (b = (a*2)-1; b >= 1 ; b--)
        {
            
            for (c=0;c<=b ;c++)
            {
                printf(" ");
            }
            
            printf("*");

        }
        printf("\n");
    }
    return 0;
}