/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:33:04 by ybalkan           #+#    #+#             */
/*   Updated: 2025/11/26 12:34:06 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_map
{
	int		rows;
	int		cols;
	char	empty;
	char	obst;
	char	full;
	char	*data;
	int		best_size;
	int		best_i;
	int		best_j;
}	t_map;

char	*read_all(char *path);
int		parse_map(char *buf, t_map *m);
int		set_header_values(char *buf, int i, t_map *m);
void	solve_map(t_map *m);
void	fill_solution(t_map *m);
void	print_map(t_map *m);
void	ft_puterr(void);
int		ft_atoi_n(const char *s, int n);
void	free_map(t_map *m);

#endif
