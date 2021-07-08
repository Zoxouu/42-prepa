#include <unistd.h>

void    ft_print_numbers(void)
{
    int i;

    i = 48;// 48 = 0
    while (i <= 57)// 57 = 9
    {
        write(1, &i, 1);
        i++;
    }
       
}

int     main(void)
{
    ft_print_numbers();
    write(1, "\n", 1);
}