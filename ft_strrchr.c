/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubazzane < ubazzane@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:19 by ubazzane          #+#    #+#             */
/*   Updated: 2023/11/17 18:53:25 by ubazzane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int				i;
	char			*ptr;
	unsigned char	uc;

	i = 0;
	ptr = NULL;
	uc = (unsigned char)c;
	while (string[i])
	{
		if (string[i] == uc)
			ptr = (char *)&string[i];
		i++;
	}
	if (uc == '\0')
		return ((char *)&string[i]);
	return (ptr);
}
