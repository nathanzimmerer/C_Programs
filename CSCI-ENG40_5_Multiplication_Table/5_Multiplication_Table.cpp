#include<stdio.h>
#include<stdlib.h>

int main (void)
{
        int a, b, ans;

        a = 10;
        b = 0;
        while (b < 12)
        {
                b++;
                ans = a * b;
                printf("%4d x %4d = %4d \n", a, b, ans);
        }
        printf("\n");

        system("pause");
        return (0);
}

/*

  10 x    1 =   10
  10 x    2 =   20
  10 x    3 =   30
  10 x    4 =   40
  10 x    5 =   50
  10 x    6 =   60
  10 x    7 =   70
  10 x    8 =   80
  10 x    9 =   90
  10 x   10 =  100
  10 x   11 =  110
  10 x   12 =  120

Press any key to continue . . .

*/

