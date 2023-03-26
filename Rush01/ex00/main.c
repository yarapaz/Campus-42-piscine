/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yapaz-go <yapaz-go@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:19:09 by yapaz-go          #+#    #+#             */
/*   Updated: 2023/02/12 19:44:00 by sanferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	inicializate(int **counters, int ****combinations, int **l, int **in);
void	loop(int ****combs, int *input);
int		get_input(int n, char **arraydarrays, int **storage);
int		calculate_limits(int **storage, int ***memory);
void	incrementate(int **counters, int *limits);
int		vld(int *p_cmb_0, int *p_cmb_1, int *p_cmb_2, int *p_cmb_3, int *p_input);
void	ft_print_error(void);

int	main(int argc, char *argv[])
{
	int		*i;
	int		*limits;
	int		***cmbs;
	int		*input;
	int		c;

	inicializate(&i, &cmbs, &limits, &input);
	if (get_input(argc, argv, &input) == 1)
	{
		loop(&cmbs, input);
		if ((calculate_limits(&limits, cmbs)) == 1)
		{
			while (i[0] <= limits[0])
			{
				c = vld(cmbs[0][i[0]], cmbs[1][i[1]], cmbs[2][i[2]], cmbs[3][i[3]], input);
				if (c == 1)
					return (0);
				else
					incrementate(&i, limits);
			}
		}
	}
	ft_print_error();
	return (1);
}
