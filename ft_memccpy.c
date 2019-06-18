/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:16:13 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/18 11:57:20 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*str1;
	char	*str2;
	char	a;
	size_t	i;

	str1 = (char *)dest;
	str2 = (char *)src;
	a = (unsigned char)c;
	i = 0;
	if (!str1 && str2 == NULL)
		return (NULL);
	while (i < n)
	{
			str1[i] = str2[i];
			if (str2[i] == a)
			{
				
				return(str1);
			}
			i++;
	}
	return(0);
}
