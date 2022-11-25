/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:43:28 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/25 02:04:00 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*diir_chii_fchiii(char *one, char *two, char *swap)
{
	size_t				i;
	size_t				j;

	i = 0;
	j = 0;
	while (one[i])
	{
		swap[i] = one[i];
		i++;
	}
	while (two[j])
	{
		swap[j + i] = two[j];
		j++;
	}
	swap[i + j] = '\0';
	return (swap);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char					*ptr;
	size_t					totalenergie;
	int						i;
	int						j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	totalenergie = (i + j);
	ptr = (char *) malloc ((totalenergie + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	return (diir_chii_fchiii((char *)s1, (char *)s2, ptr));
}
/*
int	main ()
{
	char s3[200]="hello world !";
	char s4[200]="abdeljalil _!loop";
	char *ptr;
	ptr = ft_strjoin(s3, s4);
	printf ("%s\n", ptr);
}*/
