/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:57:53 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/19 15:33:18 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 && s2)
	{
		if (s1 == NULL && s2 == NULL)
			return (0);
		if (strlen(s1) != strlen(s2))
			return (0);
		while (s1[i] && s2[i] && i < n)
			if (s1[i] != s2[i])
			{
				i++;
				i = n;
				return (0);
			}
			else if (s1[i] == s2[i])
				i++;
		i = n;
		return (1);
	}
	return (0);
}
