/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:27:56 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 19:00:16 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	mem;
	void	*ptr;

	mem = count * size;
	ptr = malloc(mem);
	if (ptr == (void *)0)
		return ((void *)0);
	else
		ft_bzero(ptr, mem);
	return (ptr);
}
