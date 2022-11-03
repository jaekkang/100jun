#include <stdio.h>

int main(void)
{
    char    c;
    char    pm;
    double  ret;

    scanf("%c%c", &c, &pm);
    ret = 0;
    if (c >= 'A' && c <= 'D')
    {
        ret = 4 - (c - 65);
        if (pm == '+')
            ret += 0.3;
        else if (pm == '-')
            ret -= 0.3;
    }
    printf("%.1f\n", ret);
    return (0);
}
