/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:16:10 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/27 15:08:04 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isascii(int c)
{
	if(c >= 0 && c <= 177)
		return(1);
	else
		return(0);
}

int		main(void)
{
	int str = '/';
	int ret;

	ret = ft_isascii(str);
	printf("%d", ret);
	return(0);
}
