/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:22:32 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/13 14:19:51 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_intlen(int n)
{
	int len;

	len = 0;
	if(n < 0)
	{
		n *= -1;
		len++;
	}
	while(n)
	{
		n /= 10;
		len++;
	}
	return(len);
}

char	*ft_itoa(int n)
{
	char *str;
	int i;

	i = ft_intlen(n);
	str = (char *) malloc(sizeof(char) * i + 1);
	if(str == NULL)
		return(NULL);
	if (n == -2147483648)
		strcpy(str,"-2147483648");
	str[i--] = '\0';
	if(n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return(str);
}

