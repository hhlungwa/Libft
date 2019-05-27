/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:57:45 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/27 10:34:28 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		*ft_strnstr(char *str, char *needle, size_t len)
{
	int j;
	size_t i;

	i = 0;
	while(i < len)
	{
	
		j = 0;
		while(needle[j] == str[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return(str + i);
			}
			j++;
		}
		i++;
	}
	return(0);
}

int main()
{
	char str1[20] = "helloworldamdeshey";
	char str2[20] = "llowor";
	char *ret;
   	
	ret = ft_strnstr(str1, str2, 9);
	printf("%s", ret);	



}
