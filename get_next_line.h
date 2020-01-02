/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldediu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:37:29 by ldediu            #+#    #+#             */
/*   Updated: 2019/10/25 16:37:30 by ldediu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>

# define FD_SIZE 4096
# define BUFF_SIZE 32

int		get_next_line(const int fd, char **line);

#endif
