#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
//pas le droit a 42
int main(void) 
{
    ft_putchar('a');
}