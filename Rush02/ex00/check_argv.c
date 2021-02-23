#include <unistd.h>

void	ft_check_argv(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			write(1, "Error\n", 6);
			break;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_check_argv(ac, av[1]);
	else if (ac == 3)
		ft_check_argv(ac, av[2]);
	else
	{
		write(1, "Error\n", 6);
		break;
	}
	return (0);
}
