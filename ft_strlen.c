/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:53:15 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/23 10:49:28 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strlen(const char *s)
{
	size_t i;
	
	i = 0;
	while(s[i])
	{
		i++;
	}
	return(i);

}

int		main()
{
	char str[15] = "hello world";
	printf("%d\n", ft_strlen(str));
	return(0);
}
