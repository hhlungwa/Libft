/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:16:34 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/27 15:24:40 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return(1);
	else
		return(0);
}

int		main()
{
	int str = 'p';
	int ret;

	ret = ft_isprint(str);
	printf("%d", ret);
	return(0);
}
