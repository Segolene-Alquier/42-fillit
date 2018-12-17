/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bafraiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:53:57 by bafraiki          #+#    #+#             */
/*   Updated: 2018/11/13 21:53:06 by bafraiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	if (!(s1 && s2))
		return (0);
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}
