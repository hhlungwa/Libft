/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 10:47:34 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/11 15:18:49 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putendl(char const *s)
{
		int i;

		i = 0;
		while(s[i])
			write(1, &s[i++], 1);
		write(1, "\n", 1);
}

int		main()
{
	char str[15] = "hello world";
	ft_putendl(str);
}
