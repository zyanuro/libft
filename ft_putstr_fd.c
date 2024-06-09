/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:46:25 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 19:39:13 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	write(fd, s, len);
}
