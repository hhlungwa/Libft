/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 09:25:20 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/18 14:58:32 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	while (s[i] == 32 || (s[i] == 9 && s[i] == 13))
		i++;
	j = ft_strlen(s) - 1;
	while (s[j - 1] == 32 || (s[j - 1] == 9 && s[j - 1] == 13))
		j--;
	k = 0;
	while (i < j)
	{
		str[k] = s[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
