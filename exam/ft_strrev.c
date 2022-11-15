#include <unistd.h>
#include <stdio.h>

// reverse a string in place with modification

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	a;
	char 	b;
	
	if (str == 0)
		return str;
	i = 0;
	len = ft_strlen(str);
	len --;
	while (i < len / 2 )
	{
		a = str[i];
		b = str[len - i];
		str[i] = b;
		str[len - i] = a;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "Hello world"; 
	printf("%s", ft_strrev(str));
	return (0);
}
