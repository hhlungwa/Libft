/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 16:04:36 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/07 14:05:17 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *str1;
	char *str2;
	size_t i;

	str1 = (char *) dest;
	str2 = (char *) src;
	i = 0;

	while(i < len)
	{
		str1[i] = str2[i];
		i++;
	}	
	return (str1);
}

