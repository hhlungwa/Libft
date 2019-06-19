/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 09:25:20 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/19 14:41:05 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (!s)
		return(NULL);
	j = ft_strlen(s) - 1;
	str = (char *)malloc(sizeof(*s) * j + 1);
	if (!str)
		return(NULL);
	i = 0;
	while (s[i] == 32 || (s[i] == 9 && s[i] == 13))
		i++;
	while (s[j - 1] == 32 || (s[j - 1] == 9 && s[j - 1] == 13))
		j--;
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
