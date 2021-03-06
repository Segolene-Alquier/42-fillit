/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bafraiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:17:44 by bafraiki          #+#    #+#             */
/*   Updated: 2018/11/13 21:53:20 by bafraiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!(s1 && s2))
		return (0);
	while (*s1 == *s2 && *s1 != '\0' && n > 0 && n-- > 0)
	{
		s1++;
		s2++;
	}
	if ((*s1 == '\0' && *s2 == '\0') || n == 0)
		return (1);
	return (0);
}
