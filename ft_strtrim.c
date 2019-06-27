/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 09:25:20 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/27 14:24:08 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	int		i;
	int		k;
	int		j;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (j >= 0 && (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'))
		j--;
	if (j < i)
		j = i - 1;
	if (!(str = (char*)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	k = 0;
	while (i <= j)
	{
		str[k++] = s[i++];
	}
	str[k] = '\0';
	return (str);
}
