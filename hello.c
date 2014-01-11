a;
main ()
{
  int b = ++a + a, c = b + b, d = c + c, e = d + d, f = e + e, g = f + f, h =
    g + f + c, i = d + b + a, j = h + d, k = h + i;
  char s[] =
    { g + d, h + a, j, j, k, f, g + d + e - a, k, h + e - b, j, h, b + d,
--a };
  puts (s);
}
