/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 15:09:32 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/07 15:27:24 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	while (s[i] = '\0')
	{
		f(s[i]) != '\0';
		i++;
	}

}