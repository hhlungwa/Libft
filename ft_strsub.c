/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 09:30:53 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/18 14:48:25 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (*s || start == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = start[i + len];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
