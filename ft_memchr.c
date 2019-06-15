/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:26:30 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/14 11:49:44 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	char charc;
	size_t i;
	
	charc = (int)c;
	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		{
			return (str+i);
		}
		i++;
	}
	return (NULL);
}
