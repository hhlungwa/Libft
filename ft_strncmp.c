/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:22:57 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/06 10:17:59 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
