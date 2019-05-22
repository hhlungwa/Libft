/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:26:30 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/22 14:22:47 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	char charc;
	size_t i;
	
	charc =(int) c;
	str = (char *) s;
	i = 0;
	while(i < n)
	{
		if(str[i] == c)
		{
			return(str+i);
		}
		i++;
	}
	return(NULL);
}

int		main()
{
	char str[20] = "hellow world";
	char ch = 'w';
	char *turn;

	turn = ft_memchr(str, ch, 6);
	printf("%s\n", turn);
	return(0);

}
