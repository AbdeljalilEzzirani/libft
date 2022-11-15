/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:48:55 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/15 17:08:46 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main ()
{
	char	ch;
	int				fd;

	fd = open("file_descriptor", 777);
	ch = 'H';
	ft_putchar_fd(ch, fd);
	ft_putchar_fd('\n', fd);
}*/
