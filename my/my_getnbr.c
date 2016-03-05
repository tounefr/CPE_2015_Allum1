/*
** my_getnbr.c for  in /home/henon_t/rendu/Piscine_C_J06
**
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
**
** Started on  Mon Oct  5 15:37:11 2015 Thomas Henon
** Last update Tue Feb 16 15:10:16 2016 thomas
*/

int	my_getnbr(char *str)
{
  int	num;
  int	i;
  int	i2;

  if (!str)
    return (0);
  i = my_strlen(str) - 1;
  i2 = 0;
  num = 0;
  while (i >= 0)
    {
      if (str[i] >= '0' && str[i] <= '9')
	num += (str[i] - '0') * my_power_rec(10, i2++);
      i--;
    }
  if (str[i + 1] == '-')
    num = -num;
  return (num);
}
