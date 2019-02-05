/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkuchyna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 16:00:23 by nkuchyna          #+#    #+#             */
/*   Updated: 2018/04/27 17:25:07 by nkuchyna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10

# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct				s_readlist
{
	char					*str;
	int						fd;
	int						get_end;
	struct s_readlist		*next;
}							t_readlist;

int							get_next_line(const int fd, char **line);

#endif
