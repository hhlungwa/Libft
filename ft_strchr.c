/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:47:54 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/26 09:39:34 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		a;
	int		i;

	i = 0;
	a = (char)c;
	if (c == '\0')
	{
		while (*s)
			s++;
		return (&*s);
	}
	while (s[i] != '\0')
	{
		if (s[i] == a)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
