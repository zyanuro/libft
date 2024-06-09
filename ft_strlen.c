/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:28:52 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 17:58:16 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_strlen(const char *s)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}
