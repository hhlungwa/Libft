/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:59:24 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/21 14:04:33 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{	
	char *str1;
	char *str2;
	size_t i;

	str1 = (char *) dest;
	str2 = (char *) src;
	i = 0;
	while(i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return(str1);
}

int		main()
{
	char str1[15] = "hello world";
	char str2[15] = "hieveryone";

	ft_memcpy(str1, str2, 5);
	printf("%s\n", str1);
}
