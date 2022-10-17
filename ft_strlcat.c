#include "libft.h"

size_t	strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t			i;

	i = ft_strlen (dst);
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

int	main ()
{
	char src[]="hello world !";
	char dst[]="ppppppppppppp";
	int			n;
	int			m;

	n = ft_strlcat(dst, src, 10);
	printf ("hada deyaliii : %d\n", n);
	printf ("hada deyaliii : %s\n", dst);
	m = strlcat(dst, src, 5);
	printf ("hada system : %d\n", m);
	printf ("hada system : %s\n", dst);
}