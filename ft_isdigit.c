/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:32:27 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/27 13:43:14 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return(1);
	else
		return(0);		
}

int		main(void)
{
	int str = 'a';
	int ret;

	ret = ft_isdigit(str);
	printf("%d", ret);
	return(0);
}
