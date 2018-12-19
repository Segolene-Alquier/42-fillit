/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salquier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 18:26:44 by salquier          #+#    #+#             */
/*   Updated: 2018/12/19 15:40:39 by salquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* 
 * coordonnees : tab[h][w]
 * on connait la hauteur de la piece : h + 1 // largeur : w + 1
 * il ne doit jamais y avoir plus de 1 de difference entre les h et les w
 * OU j'additione w et x de chaque case, et je dois jamais avoir 1 de diff avec
 * la somme precedente
 * */
/*
   int		existing_piece(char tab[4][2])
   {
   int i;
   int sum[4];

   i = 0;
   while (i < 4)
   {
   sum[i] = (tab[i][0]) + (tab[i][1]);
   printf("sum[%d] : %d\n", i, sum[i]);
   i++;
   }
   i = 0;
   while (i < 3)
   {
   printf("(sum[%d] - sum[%d]): %d\n", i + 1,i, (sum[i + 1] - sum[i]));
   fflush(stdout);
   printf("i : %d\n",i);
   if ((sum[i + 1] - sum[i]) > 1)
   {
   printf("%s\n", "not ok");
   exit (EXIT_FAILURE);
   }
   i++;
   }
   printf("%s\n", "ok");
   return (0);
   }
   */

int ft_cmp(int a, int b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);
}

int		existing_piece(char tab[4][2])
{
	int i;
	int j;
	int min;
	int t;

	i = 0;
	while (i < 4)
	{
		j = -1;
		min = 2;
		while (++j < 4)
			if (j != i)
			{
				t = ft_cmp(tab[i][0],tab[j][0]) + ft_cmp(tab[i][1], tab[j][1]);
				if (t < min)
					min = t;
			}
		if (min > 1)
			exit(EXIT_FAILURE);
		i++;
	}
	return (1);
}

int		main(void)
{
	char tab[4][2];

	tab[0][0] = 0;
	tab[0][1] = 0;
	tab[1][0] = 1;
	tab[1][1] = -1;
	tab[2][0] = 1;
	tab[2][1] = 0;
	tab[3][0] = 1;
	tab[3][1] = 1;

	printf("%d\n", existing_piece(tab));
	return (0);
}
