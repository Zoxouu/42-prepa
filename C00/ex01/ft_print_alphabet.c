#include <unistd.h>

void	ft_print_alphabet(void)
{
	int i;

	i = 'a';//97 = a
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}
//pas le droit a 42
int main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	write(1, "abcdefghijklmnopqrstuvwxyz", 27);
	write(1, "\n", 1);
}