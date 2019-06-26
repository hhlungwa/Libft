/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:29:13 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/26 11:09:09 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (needle[j] == str[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
