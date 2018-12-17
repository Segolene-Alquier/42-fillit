/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bafraiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 15:16:36 by bafraiki          #+#    #+#             */
/*   Updated: 2018/12/17 17:55:48 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_strlen_strchr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '#' && str[i] != '.')
			exit(EXIT_FAILURE);
		i++;
	}
	return (i);
}

void	ft_store_grid(int fd ,char **grid)
{
	int i;
	int ret;

	ret = 1;
	i = -1;
	while (++i < 129 && ret > 0)
		ret = get_next_line(fd, &grid[i]);
	if (ret == 0 && i <= 129)
		grid[i] = 0;
	else
		exit(EXIT_FAILURE);
}

int	ft_grid_validity(int fd)
{
	char *grid[130];
	int i;
	int nb_line;
	int nb_hash;

	i = 0;
	ft_store_grid(fd, grid);
	while (grid[i])
	{
		nb_line = 0;
		while (grid[i] && *grid[i] != '\0' && nb_line < 4)
		{
			if (ft_strlen_strchr(grid[i]) != 4)
				exit (EXIT_FAILURE);
			printf("grid[%d] : %c\n", i, *grid[i]);
			nb_line++;
			i++;
		}
		printf("nb line : %d\n", nb_line);
		if (grid[i] && (nb_line != 4 || (*grid[i] == '\0' && !grid[i + 1])))
			exit(EXIT_FAILURE);
		i++;
	}
	exit(EXIT_SUCCESS);
	return (0);
}
