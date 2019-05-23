/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:28:33 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/23 09:40:18 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;
	size_t i;

	str1 = (char *) s1;
	str2 = (char *) s2;
	i = 0;
	while(i < n && 	str1[i] == str2[i])
		i++;
	return(str1[i] - str2[i]);	
}

int		main()
{
	char str1[15] = "hello world";
	char str2[15] = "hello Hitekani";
	int ret;

	ret = ft_memcmp(str1, str2, 11);
	printf("%d\n", ret);
}
