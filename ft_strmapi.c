/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:22:11 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/18 14:09:56 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * strlen(s));
	if (!str && !f)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(32, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
