/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:25:13 by ybalkan          #+#    #+#              */
/*   Updated: 2025/11/26 09:25:14 by ybalkan         ###   ########.tr        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void	cleanup_err(char *b, t_map *m)
{
	if (m)
		free(m);
	if (b)
		free(b);
	ft_puterr();
}

static void	process_buffer(char *buf)
{
	t_map	*m;

	if (!buf)
		return (ft_puterr());
	m = malloc(sizeof(t_map));
	if (!m)
		return (cleanup_err(buf, NULL));
	if (parse_map(buf, m) < 0)
		return (cleanup_err(buf, m));
	solve_map(m);
	fill_solution(m);
	print_map(m);
	free_map(m);
	free(buf);
}

static void	run_path(char *path)
{
	char	*buf;

	buf = read_all(path);
	if (!buf)
		return (ft_puterr());
	process_buffer(buf);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		run_path(NULL);
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		run_path(av[i]);
		if (i + 1 < ac)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
