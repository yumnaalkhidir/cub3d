/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqaroot <oqaroot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:08:03 by omaimaqaroo       #+#    #+#             */
/*   Updated: 2025/12/11 16:05:57 by oqaroot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*str;
	char			*ptr;

	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	ptr = str;
	while (*s != '\0')
	{
		*ptr = f(ptr - str, *s);
		ptr++;
		s++;
	}
	*ptr = '\0';
	return (str);
}
