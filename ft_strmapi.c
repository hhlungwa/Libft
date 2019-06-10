/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:22:11 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/10 14:52:00 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char 	ft_toupper(unsigned int num, char c)
{
	if(c >= 97 && c <= 122)
		c -= num;
	return(c);

}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*str;

	i = 0;
	str = (char *) malloc(sizeof(char) * strlen(s));
	if(!str && !f)
		return(NULL);
	while(s[i])
	{
		str[i] = (*f)(32, s[i]);
	   	i++;	
	}
	str[i] = '\0';
	return(str);
}

int main()
{
	char str1[15] = "hello wolrd";
	printf("%s", ft_strmapi(str1, ft_toupper));
	return(0);		

}
