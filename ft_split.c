/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:49:20 by abez-zir          #+#    #+#             */
/*   Updated: 2022/11/07 22:04:53 by abez-zir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int count_nbr_case_in_tab2D(char const *s, char c)
{
	int				nbr;
	int				i;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i])
			nbr = nbr + 1;
	}
	return (nbr);
}

char **ft_split(char const *s, char c)
{
	int				i;
	int				j;
	int				len;
	int				swap;
	char			**tab;
	int				nbr;
	int				f;

	i = 0;
	j = 0;
	f = 0;
	nbr = count_nbr_case_in_tab2D(s, c);
	tab = (char **) malloc(sizeof(char*) * (nbr + 1));
	/*if (tab[j] == NULL)
		{
			while (tab[++f])
				free(tab[f]);  {   henaa fiin deret lfree  }
			free(tab);
			return (NULL);
		}*/
	while (s[i] && j < nbr)
	{
		while (s[i] == c)
			i++;
		swap = i;
		while (s[i] != c)
			i++;
		len = i - swap;
		tab[j] = ft_substr(s, swap, len);
		j++;
	}
	tab[j] = 0;
	return (tab);
}

int	main ()
{
	char src[]="i__hello__world_how_are_you___";
	char			**p;
	int				i;

	i = 0;
	p = ft_split(src, '_');
	while (p[i])
	{
		printf ("%s\n", p[i]);
		i++;
	}
}
