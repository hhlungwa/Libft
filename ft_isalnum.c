/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:47:12 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/27 14:01:34 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalnum(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 'a' && c <= 'z'))
		return(1);
	else
		return(0);
}

int		main(void)
{
	int str = 'a';
	int ret;

	ret = ft_isalnum(str);
	printf("%d", ret);
	return(0);
}
