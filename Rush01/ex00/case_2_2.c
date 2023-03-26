/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_2_2_A.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:54:15 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/02/12 18:54:20 by yapaz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	case_2_2_a(int ***memoria);
void	case_2_2_b(int ***memoria);

void	case_2_2(int ***memoria)
{
	int	i;
	int	n_possibilities;

	n_possibilities = 6;
	i = 1;
	*memoria = (int **) malloc((n_possibilities + 1) * sizeof(int *));
	(*memoria)[0] = (int *) malloc (1 * sizeof(int));
	while (i <= n_possibilities)
	{
		(*memoria)[i] = (int *) malloc(4 * sizeof(int));
		i++;
	}
	(*memoria)[0][0] = n_possibilities;
	case_2_2_a(memoria);
	case_2_2_b(memoria);
}
