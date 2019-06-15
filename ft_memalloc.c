/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:39:26 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/14 14:01:32 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void		*ft_memalloc(size_t size)
{
	char  *ptr;
	size_t i; 
	i = 0;

	ptr = (char *) malloc(sizeof(char) * size);
	if(ptr == NULL)
		return(NULL);

	while(i < size)
	{
		ptr[i] = '0';
		i++;
	}
	return((void*)ptr);
}
