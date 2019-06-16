/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 16:04:36 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/14 09:03:21 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned int	i;
	char			*str1;
	char			*str2;

	str1 = (char *)dest;
	str2 = (char *)src;
	i = 0;
	if(!str1 && str2 == NULL)
		return(NULL);
	if (src < dest)
	{
		i = len;
		while (i-- > 0)
			str1[i] = str2[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (dest);
}
