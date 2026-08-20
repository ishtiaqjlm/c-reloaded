#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *));

int	start_with_a(char *str)
{
	if (str[0] == 'a')
		return (1);
	return (0);
}

int	main(void)
{
	char	*tab[] = {
		"apple",
		"banana",
		"avocado",
		"orange",
		"apricot",
		NULL
	};

	printf("%d\n", ft_count_if(tab, start_with_a));
	return (0);
}