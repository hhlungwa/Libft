/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:39:08 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/14 14:01:50 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char *str;
	size_t i;

	i = 0;
	str = (char *) malloc(sizeof(char) * size);

	if(str == NULL)
	{
		return(NULL);
	}
	
	while(i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return(str);
}
