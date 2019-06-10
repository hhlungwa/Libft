/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 15:53:55 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/10 13:19:31 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) malloc(sizeof(char) * strlen(s));
	if(!str && !f)
		return(NULL);
	while(s[i])
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	str[i] = '\0';
	return(str);
}

int		main()
{
	char str1[15] = "hellow world";
	printf("%s", ft_strmap(str1, ft_toupper));
	return(0);
}
