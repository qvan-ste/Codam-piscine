/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/17 17:10:26 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:23:57 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str [i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}