/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:09:57 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/06 15:17:09 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t j;
	size_t i;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (j < n)
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
