/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:22:57 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/27 11:39:16 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, size_t len)
{
	size_t i;

	i = 0;
	while( i < len && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);

}

int		main()
{
	char str[15] = "Deshey";
	char str1[15] = "world";
	int ret;

	ret = ft_strncmp(str, str1, 5);
	printf("%d", ret);
	return(0);
}
