/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:52:10 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/22 13:25:59 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *str1;
	char *str2;
	size_t i;

	str1 = (char *) dest;
	str2 = (char *) src;
	i = 0;

	while(i < len)
	{
		str1[i] = str2[i];
		i++;
	}

	str1[i] = '\0';
	return(str1);
}

int 	main()
{
	char str1[10] = "Hitekani";
	char str2[10] = "hellow";

	ft_memmove(str1, str2, 7);
	printf("%s\n", str1);
}
