
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *needle)
{
	int i;
	int j;

	i = 0;
	while(str[i])
	{

		j = 0;
		while (needle[j] == str[i + j])
		{
			if (needle[j + 1] == '\0')
			{
			return(str + i);
			}
			j++;
		}
		i++;
	}
	return(0);
}


int	main()
{
	char str1[50] = "Helloworldyougotthis";
	char str2[15] = "got";
	char *ret;

	ret = ft_strstr(str1, str2);
	printf("%s", ret);
	return(0);

}
