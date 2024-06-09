/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:30:13 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 19:54:03 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "libft.h"

int	ft_tolower(int c)
{
	char	result;

	if ((c >= 65 && c <= 90))
	{
		result = (char)c + 32;
		return (result);
	}
	else
		return (c);
}
