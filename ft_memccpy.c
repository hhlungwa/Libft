/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:16:13 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/21 15:35:29 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
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
			if(str2[i] == c)
			{
				i++; //loops until the c character
				break;
			}
			i++; 
	}
	str1[i] = '\0';
	return(str1);
}	

int main()
{
	char str1[15] = "Hi Deshey";
	char str2[15] = "think: enough";

	ft_memccpy(str1, str2, ':', 14);
	printf("%s\n", str1);

}
