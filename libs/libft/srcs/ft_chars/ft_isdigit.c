//
// Created by Hajar Sabir on 2/19/22.
//

#include "libfm.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}