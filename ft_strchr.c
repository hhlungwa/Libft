/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:47:54 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/24 15:29:48 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strchr(char *s, int c)
{
	
	char a;
	int i;

	a = (int) c;
	i = 0;

	while(s[i])
	{
		if (s[i] == c)
		{
			return(&s[i]);
		}
		i++;
	}
	return(NULL);
}

int		main()
{
	char str1[15] = "hallo deshey";
	char *ret;

	ret = ft_strchr(str1, 97);
	printf("%s", ret);
	return(0);
}
