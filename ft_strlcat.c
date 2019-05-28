/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:31:08 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/28 13:25:48 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t		ft_strlcat(char *s1, char *s2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(s1[i])
		i++;
	while(s2[j])
		j++;

	while(s1[j] && i + j < len)
	{
		s1[i + j] = s2[i];
		j++;
		i++;
	}
	return(i + j);
}

int		main()
{
	char str[15] = "hello deshey";
	char str1[15] = "Be Smart";
	size_t ret;

	ret = ft_strlcat(str, str1, sizeof(str));
	printf("%zu", ret);
	return(0);

}
