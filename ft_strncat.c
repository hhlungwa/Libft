/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:09:57 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/24 12:01:58 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	size_t j;
	size_t i;

	i = 0;
	while(s1[i])
		i++;	
	j = 0;

	while(j < n)
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

int		main()
{
	char str1[20] = "Hello";
	char str2[20] = "Deshey";
	char *ret;

	ret = ft_strncat(str2, str1, 5);
	printf("%s\n", ret);
	return(0);


}
