/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:30:23 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/27 15:47:32 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		return(c - 32);
	else
		return(c);

}

int		main()
{
	int str = 'a';
	char ret;

	ret = ft_toupper(str);
	printf("%c", ret);
}
