int	ft_count_if(char **tab, int (*f)(char*))
{
    int count;
    int i;

    if (!tab)
		return (0);
    count = 0;
    i = 0;
    while (tab[i])
    {
        if(f(tab[i]))
                count++;
        i++;
    }
    return (count);   
}