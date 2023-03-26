/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:49:18 by marco-fe          #+#    #+#             */
/*   Updated: 2023/02/12 21:42:01 by marco-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checker(int *p_array)
{
	int	check;
	int	count_1;
	int	count_2;

	check = 1;
	count_1 = 0;
	while (count_1 <= 3)
	{
		count_2 = 0;
		while (count_2 <= 3)
		{
			if (count_1 != count_2)
			{
				if (p_array[count_1] == p_array[count_2])
					check = 0;
			}
		count_2++;
		}
	count_1++;
	}
	return (check);
}
