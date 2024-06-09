/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:45 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 17:57:08 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;

	p = ptr;
	while (num--)
	{
		*p++ = (unsigned char)value;
	}
	return (ptr);
}
