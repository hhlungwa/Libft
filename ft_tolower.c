/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:51:08 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/27 16:00:16 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_tolower(int c)
{
	if(c >= 'A' && c <= 'Z')
		return(c + 32);
	else
		return(c);
}

int		main()
{
	int str = 'A';
	char ret;

	ret = ft_tolower(str);
	printf("%c", ret);
	return(0);

}
