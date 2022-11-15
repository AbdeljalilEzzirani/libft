/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:31:04 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/15 17:10:22 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int					i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
/*
int main ()
{
	char src[]="are you ready !!?";
	int					fd;

	fd = open ("hada-file", 777);
	ft_putstr_fd(src, fd);
	ft_putchar_fd('\n', fd);
}*/
