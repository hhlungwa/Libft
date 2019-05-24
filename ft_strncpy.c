/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:36:37 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/23 15:15:01 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_strncpy(char *dest, char *src, size_t len)
{
	size_t i;
	
	i = 0;
	while(i < len)
	{
		dest[i] = src[i]; 
		i++;
	}

	return(dest);
}

int		main()
{
	char str1[15] = "deshey world";
   	char str2[15] = "hello Deshey";	
		
	ft_strncpy(str2, str1, 3);
	printf("%s\n", str2);
	return(0);
}
