#include <stdio.h>
#include "libft.h"

int main(void)
{
    char src[] = "Hello, 42!";
    char dest[20];
    size_t copied_length;

    printf("Testing ft_strlcpy:\n");

    copied_length = ft_strlcpy(dest, src, sizeof(dest));
    printf("Source String: %s\n", src);
    printf("Destination String: %s\n", dest);
    printf("Length of Source: %zu\n", copied_length);
    printf("\n");

    return 0;
}


