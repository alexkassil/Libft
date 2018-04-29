#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(char *)(dest++) = *(char *)(src++);
		if (*(unsigned char *)(dest - 1) == (unsigned char)c) {
			return (dest);
		}
	}
	return (NULL);
}
