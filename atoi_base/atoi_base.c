
int is_valid(char c, int base)
{
  if (base <= 10 && !(c >= '0' && c <= '0' + base - 1))
    return (0);
  if (base > 10 && !(c >= '0' && c <= '9') && !(c >= 'a' && c <= 'a' + base%10 - 1) && !(c >= 'A' && c <= 'A' + base%10 - 1))
    return (0);
  return (1);
}

int value(char c)
{
  if (c >= '0' && c <= '9')
    return (c - '0');
  if (c >= 'a' && c <= 'f')
    return (10 + c - 'a');
  if (c >= 'A' && c <= 'F')
    return (10 + c - 'A');
  return -9999999;
}

int atoi_base(const char *str, int str_base)
{
  int sign = 1;
  int res = 0;
  while(*str == ' ' || *str == '\t' || *str == '\n')
    str++;
  if (*str == '-' || *str == '+')
  {
    if (*str == '-')
      sign = -1;
    str++;
  }
  while (*str && is_valid(*str, str_base))
    res = res*str_base + value(*(str++));
  return (sign * res);
}
