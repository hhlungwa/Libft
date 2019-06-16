/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:29:13 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/05 16:04:20 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *needle)
{
	int i;
	int j;

	i = 0;
	if (needle[0] == '\0')
		return (str);
	while(str[i])
	{

		j = 0;
		while (needle[j] == str[i + j])
		{
			if (needle[j + 1] == '\0')
			{
			return(&str[i]);
			}
			j++;
		}
		i++;
	}
	return(0);
}
