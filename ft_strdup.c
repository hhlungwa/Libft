/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:55:24 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/14 13:16:59 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
		str = (char *) malloc(sizeof(char) * i);
	}
	while (i >= 0)
	{
		str[i] = s1[i];
		i--;
	}
	return (str);
}
