/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:21:39 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/05/31 10:31:25 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void		*ft_memset(void *b, int c, size_t len)
{ 
	char *str;
	unsigned char a;
	size_t i;
	
	str = (char *) b;
   	a = (unsigned char) c;	
	i = 0; 
	while(i < len) 
	{ 
		str[i] = c; 
		i++;
   	}
	return (b);
}

