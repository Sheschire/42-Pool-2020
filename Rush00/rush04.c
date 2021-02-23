void	ft_putchar(char c);

void	ft_printline(int x, int y, int current_line)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 && current_line == 1)
			ft_putchar('A');
		else if ((current_line == y && y != 1) && (i == x && x != 1))
			ft_putchar('A');
		else if (i == x && current_line == 1)
			ft_putchar('C');
		else if (current_line == y && i == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	ft_printcolumn(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}
void	rush(int x, int y)
{
	int	current_line = 1;
	
	while (current_line <= y)
	{
		if (x == 0 || y == 0)
			return ;
		if (current_line == 1 || current_line == y)
			ft_printline(x, y, current_line);
		else
			ft_printcolumn(x);
		current_line++;
	}
}
