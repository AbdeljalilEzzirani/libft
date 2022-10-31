/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:43:28 by abez-zir          #+#    #+#             */
/*   Updated: 2022/10/31 14:36:21 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	size_t			totalenergie;
	int			i;
	int			j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	totalenergie = (i + j);
	ptr = (char *) malloc ((totalenergie + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	ft_strlcat((char *)s1, s2, (totalenergie + 1));
	ft_strlcpy(ptr, s1, (totalenergie + 1));
	ptr[totalenergie + 1] = '\0';
	return (ptr);
}

int	main ()
{
	char s3[200]="hello world !";
	char s4[200]="abdeljalil _!loop";
	char *ptr;
	ptr = ft_strjoin(s3, s4);
	printf ("%s\n", ptr);
}
