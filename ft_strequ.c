/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:02:11 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/19 15:33:00 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (s1 && s2)
	{
		if (s1 == NULL && s2 == NULL)
			return (0);
		if (ft_strlen(s1) != ft_strlen(s2))
			return (0);
		while (s1[i] && s2[i])
			if (s1[i] != s2[i])
			{	
				i++;
				return (0);
			}
			else if (s1[i] == s2[i])
				i++;
		return (1);
	}
	return (0);
}
