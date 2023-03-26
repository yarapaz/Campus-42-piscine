/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incrementate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:50:27 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/02/12 18:50:31 by yapaz-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	incrementate(int **counters, int *limits)
{
	(*counters)[3]++;
	if ((*counters)[3] > limits[3])
	{
		(*counters)[2]++;
		(*counters)[3] = 1;
		if ((*counters)[2] > limits[2])
		{
			(*counters)[1]++;
			(*counters)[2] = 1;
			if ((*counters)[1] > limits[1])
			{
				(*counters)[0]++;
				(*counters)[1] = 1;
			}
		}
	}
}
