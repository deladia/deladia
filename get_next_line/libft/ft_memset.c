/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deladia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 12:40:16 by deladia           #+#    #+#             */
/*   Updated: 2019/04/09 16:39:05 by deladia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t n)
{
	unsigned char	*de;

	de = dest;
	while (n > 0)
	{
		*de++ = ch;
		n--;
	}
	return (dest);
}
