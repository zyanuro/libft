/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:47:38 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 19:55:46 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "libft.h"

int	ft_toupper(int c)
{
	char	result;

	if ((c >= 97 && c <= 122))
	{
		result = (char)c - 32;
		return (result);
	}
	else
		return (c);
}
