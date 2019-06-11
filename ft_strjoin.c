/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 07:52:50 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/11 09:51:15 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;
	int len;

	len = (strlen(s1) + strlen(s2));
	str = (char *) malloc(sizeof(char) * len + 1);
	if(str == NULL)
		return(NULL);
	
	i = 0;
	j = 0;

	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
		
	}
	str[i] = '\0';
	str[j] = '\0';
	return(str);
}

int		main()
{
	char str1[5] = "hello";
	char str2[5] = "world";
	
	printf("%s", ft_strjoin(str1, str2));
	return(0);
}
