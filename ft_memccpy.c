/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:16:13 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/06 13:36:11 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)dest;
	str2 = (char *)src;
	i = 0;
	while (i < n)
	{
			str1[i] = str2[i];
			if (str2[i] == c)
			{
				i++;
				break;
			}
			i++; 
	}
	return (str1);
}	
