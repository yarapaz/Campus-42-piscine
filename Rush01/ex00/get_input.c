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
int	get_input(int n, char **arraydarrays, int **storage)
{
	int	i;

	i = 0;
	if (n == 2)
	{
		while (arraydarrays[1][i] != '\0')
		{
			if (((i % 2) == 0) && (i < 33))
			{
				if ((arraydarrays[1][i] >= '0') && (arraydarrays[1][i] <= '9'))
					(*storage)[i / 2] = arraydarrays[1][i] - '0';
			}
			else
			{
				if (arraydarrays[1][i] != ' ')
					return (0);
			}
			i++;
		}
		if ((i == 31) && (arraydarrays[1][i] == '\0'))
			return (1);
	}
	return (0);
}
