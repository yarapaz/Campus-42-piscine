/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:19:09 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/02/12 19:44:00 by sanferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	calculate_limits(int **storage, int ***memory)
{
	int	i;

	i = 0;
	(*storage)[0] = memory[0][0][0];
	(*storage)[1] = memory[1][0][0];
	(*storage)[2] = memory[2][0][0];
	(*storage)[3] = memory[3][0][0];
	while (i < 4)
	{
		if ((*storage)[i] == 0)
			return (0);
		i++;
	}
	return (1);
}
