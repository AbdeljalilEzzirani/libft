/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:23:47 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/30 21:49:34 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char			*p;
	int				size;

	size = ft_strlen(s1);
	p = (char *) malloc (sizeof(char) * size + 1);
	if (p == NULL)
		return (NULL);
	if (s1 == NULL)
		return (NULL);
	ft_memcpy(p, s1, size);
	p[size + 1] = '\0';
	return (p);
}

/*int	main ()
{
	char str[200]="hello world !";
	char *ptr;
	ptr = ft_strdup(str);
	printf ("%s\n", ptr);

	char src[200]="hello world !";
	char *p;
	p = strdup(src);
	printf ("%s\n", p);

	return (0);
}*/
