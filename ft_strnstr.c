/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:57:45 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/05 16:00:58 by hhlungwa         ###   ########.fr       */
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
	char str1[30] = "hello i am super man";
	char str2[10] = "";
	char *ret;
   	
	ret = strnstr(str1, str2, 20);
	printf("%s", ret);	



}
