#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    if (n < 0)
    {
        ft_putchar('N');
        return ;
    }
    ft_putchar('P');
}

int     main(void)
{
    ft_is_negative(-1);// si le chuffre a un moins sa send N inverse sa send P
    write(1, "\n", 1);
}