/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::
 *                                                        */
/*   ft_memset.c                                        :+:      :+:    :+:
 *   */
/*                                                    +:+ +:+         +:+
 *                                                    */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+
 *   */
/*                                                +#+#+#+#+#+   +#+
 *                                                */
/*   Created: 2019/05/20 13:08:05 by hhlungwa          #+#    #+#
 *   */
/*   Updated: 2019/05/21 10:17:07 by hhlungwa         ###   ########.fr
 *   */
/*                                                                            */
/* **************************************************************************
 * */

#include <string.h> #include <stdio.h>

void		*ft_memset(void *b, int c, size_t len)
{ 
	char *str; 
	size_t i;
	
	str = (char *) b; 
	i = 0; 
	while(i < len) 
	{ 
		str[i] = c; 
		i++;
   	}
	return (b);
}

int		main()
{
	char str[12] = "hello world";
	ft_memset(str, '&', 5);
	printf("%s\n", str);

}
