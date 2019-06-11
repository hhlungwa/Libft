/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 10:47:34 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/11 12:01:12 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

void	ft_putstr(char const *str)
{
	size_t i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return;
}

void	ft_putendl(char const *s)
{
		ft_putstr(s);
		ft_putchar('\n');
}

int		main()
{
	char str[15] = "hello world";
	ft_putendl(str);
}
