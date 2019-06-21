/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:22:32 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/21 10:47:34 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int len;
	
	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * ft_intlen(n) + 1)))
		return (NULL);
	if (n == -2147483648)
		ft_strcpy(str, "-2147483648");
	str[ft_intlen(n)] = '\0';
	if (n <= 0)
	{
		str[0] = '-';
		i = 1;
	}
	while (n >= 10)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (str);
}
