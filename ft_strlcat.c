/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:31:08 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/05 10:16:30 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t		ft_strlcat(char *restrict s1, const char *restrict s2, size_t size)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	while(s1[i])
		i++;
	while(s2[j])
		j++;
	len = i + j;
	j = 0;
	while (s2[j] && i <= (size - strlen(s1) - 1))
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return(len);
}

int		main()
{
	char str[15] = "hello deshey";
	char str1[15] = "Be Smart";
	size_t ret;

	ret = ft_strlcat(str, str1, sizeof(str));
	printf("%zu.. %s", ret, str);
	return(0);

}
