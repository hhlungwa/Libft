/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:48:59 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/21 11:50:07 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char *str;
	size_t i;

	str = (char *) s;
	i = 0;

	while(i < n)
	{	
		str[i] = '0';
		i++;
	
	}
}

int		main()
{
	char str[15] = "hello world";
	ft_bzero(str, 5);
	printf("%s\n", str);
}
