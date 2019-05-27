/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:54:13 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/27 11:13:39 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}

int		main()
{
	char str[15] = "hello";
	char str1[15] = "world";
	int ret;

	ret = ft_strcmp(str, str1);
	printf("%d", ret);
	return(0);

}
