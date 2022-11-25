/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:58:01 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/24 23:27:24 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	heseebliya(char const *s1, char const *set)
{
	int				i;
	int				j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (s1[i] != set[j])
			break ;
		i++;
	}
	return (i);
}

int	heseeb_recto_verso(char const *s1, char const *set)
{
	int					k;
	int					l;

	l = ft_strlen(s1);
	while (s1[l - 1])
	{
		k = 0;
		while (set[k])
		{
			if (s1[l] == set[k])
				break ;
			k++;
		}
		if (s1[l] != set[k])
			break ;
		l--;
	}
	return (l);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				m;
	int				n;
	int				lent;
	char			*p;

	m = heseebliya(s1, set);
	n = heseeb_recto_verso(s1, set);
	lent = n - m;
	p = ft_substr(s1, m, lent + 1);
	return (p);
}
/*
int main ()
{
	char s2[]="_+_+_+_+hello _+_ world_+_+_+_+";
	char s3[]="_+_+_+_+";
	char *ptr;
	ptr = ft_strtrim(s2, s3);
	printf ("%s\n", ptr);
}*/
