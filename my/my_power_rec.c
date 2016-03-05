/*
** my_power_rec.c for  in /home/henon_t/rendu/Piscine_C_J05
**
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
**
** Started on  Mon Oct  5 08:02:54 2015 Thomas Henon
** Last update Tue Feb 16 15:12:06 2016 thomas
*/

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    return (1);
  if (power != 1)
    nb = nb * my_power_rec(nb, (power - 1));
  else
    return (nb);
}
