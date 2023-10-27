#include "libft.h"
#include <stdlib.h>

int	ft_len(int n)
{
	int	len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char	*ft_result(int n, int len, int sign)
{
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (n < 0)
    {   
        str[0] = '-';
        n = -n; 
    }   
    while (len-- > sign)
    {   
        str[len] = n % 10 + '0';
        n /= 10; 
    }   
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	if (n == -2147483648)
	{
		str = (char *)malloc((12) * sizeof(char));
		if (!str)
			return 0;
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		len = ft_len(n) + 1;
	}
	else
		len = ft_len(n);
	return (ft_result(n, len, sign));
}

