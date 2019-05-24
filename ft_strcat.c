/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:02:00 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/24 10:35:09 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_strcat(char *s1, char *s2)
{
		int i;
		int j;

		i = 0;
		while(s1[i])

			i++;
		j = 0;

		while(s2[j])
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
	char str1[15] = "Hello Deshey";
	char str2[15] = "Be Smart";
	char *ret;

	ret = ft_strcat(str2, str1);
	printf("%s\n", ret);
	return(0);
}
