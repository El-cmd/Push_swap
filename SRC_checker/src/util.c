/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:57:55 by vloth             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/03/18 23:32:19 by vloth            ###   ########.fr       */
=======
/*   Updated: 2022/03/07 02:54:58 by vloth            ###   ########.fr       */
>>>>>>> edfa8cfda3018999997f965da160edb564c79cd4
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

<<<<<<< HEAD
int64_t	ft_atoi(const char *nptr)
{
	int64_t	i;
	int64_t	n;
	int64_t	j;
=======
int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	j;
>>>>>>> edfa8cfda3018999997f965da160edb564c79cd4

	j = 0;
	i = 0;
	n = 1;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\f'
		|| nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			n *= -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		j = j * 10 + (nptr[i] - 48);
		i++;
	}
	return (n * j);
}

size_t	ft_strlen(char *s)
{
	unsigned int	size;

	size = 0;
	if (!s)
		return (0);
	while (s[size])
		size++;
	return (size);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s)
	{
		i = ft_strlen(s);
		write(fd, s, i);
	}
}