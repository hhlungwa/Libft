/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:55:24 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/23 11:47:43 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void		 *ft_strdup(char *s1)
{
	char *str = NULL;
	int i;

	i = 0;
	while(s1[i] != '\0')
	{
		i++;
		str = (char *)malloc(sizeof(char) *i);
	}
	while(i >= 0)
	{
		str[i] = s1[i];
		i--;
	}
	return(str);
}

int		main()
{
	char str1[15] = "hello world";

	char *str2  = ft_strdup(str1);
	printf("%s\n", str2);
	return(0);
}
