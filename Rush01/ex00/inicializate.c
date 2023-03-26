/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicializate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:50:45 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/02/12 18:50:49 by yapaz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	inicializate(int **counters, int ****combinations, int **l, int **in);

void	inicializate(int **counters, int ****combinations, int **l, int **in)
{
	int	i;

	i = 0;
	*counters = (int *) malloc(4 * sizeof(int));
	while (i < 4)
	{
		(*counters)[i] = 1;
		i++;
	}
	*combinations = (int ***) malloc (4 * sizeof(int **));
	i = 0;
	*l = (int *) malloc(4 * sizeof(int));
	while (i < 4)
	{
		(*l)[i] = 0;
		i++;
	}
	*in = (int *) malloc(16 * sizeof(int));
}
