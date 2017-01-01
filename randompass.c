/* random password 16 char long */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        int r;
        int a;
        int i = 0;
        srand(time(NULL));
        for(i = 0; i < 16; i++)   /* there I whant to change 16 into a user's valu
e */
        {
                while (r < 64)
                {
                        r = rand()%125;
                }
                a = rand()%10;
                if(a<5)
                {
                        printf("%d", rand()%10);
                }
                else
                {
                        printf("%c",r);
                }
                r = 0;
        }
        printf("\n");
        return(0);
}
