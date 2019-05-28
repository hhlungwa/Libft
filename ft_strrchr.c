/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:37:44 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/28 10:18:26 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strrchr(char *s, int c)
{
	char a;
	int i;

	a = (int) c;
	i = 0;

	while(s[i])
		i++;

	while(i >= 0)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i--;
	}
	return(NULL);
}

int		main()
{
	char str1[15] = "hallo dashey";
	char *ret;

	ret = ft_strrchr(str1, 97);
	printf("%s", ret);
	return(0);
}
