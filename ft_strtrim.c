/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 09:25:20 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/20 10:41:50 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int	i;
	int	k;
	int	j;
	char	*str;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return(malloc(sizeof(char) * 2));
	j = strlen(s) - 1;
	while( s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	str = (char*)malloc(sizeof(char) * (j - i + 2));
	if (str  == NULL)
		return (NULL);
	while (k < j - i + 1)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
