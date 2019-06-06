/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 12:35:10 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/06 14:16:55 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{	
	char *str1;
	char *str2;
	size_t i;

	str1 = (char *) dest;
	str2 = (char *) src;
	i = 0;
	while(i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return(str1);
}
