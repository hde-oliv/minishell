/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:53:10 by hde-oliv          #+#    #+#             */
/*   Updated: 2022/01/06 20:56:22 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtins.h"

int	env(char **ms_env)
{
	int	i;

	i = 0;
	while (ms_env[i])
		printf("%s\n", ms_env[i++]);
	return (0);
}
