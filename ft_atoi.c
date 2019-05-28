#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while(str[i])
	{
		i++;

		if(str[i] >= 32 && str[i] <= 47)
		{
			sign = -1;
		}
		while(str[i] >= '0' && str[i] <= '9')
		{
			nbr = (nbr * 10) + (str[i] - '0');
			i++;
		}
		return(nbr * sign);
	}	
	return(0); 
}

int	main()
{
	char str[15] = "-123";
	int ret;

	ret = ft_atoi(str);
	printf("%s", str);
	return(0);
}

