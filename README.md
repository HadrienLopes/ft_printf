<div align="center">

# FT_PRINTF
</div>

> [!IMPORTANT]
> The ft_printf function is now included in [hlibc](https://github.com/HadrienLopes/hlibc).

## Printf function implementation:

ft_printf specifier avalaible: **s, S, p, d, D, i, o, O, u, U, x, X, c, C and %**  
ft_printf length avalaible: **hh, h, ll, l, j and z**  
ft_printf flags avalaible: **#, 0, -, + and (space)**  
ft_printf **precision avalaible**  
ft_printf **width avalaible**  

## How to compile
```fish
$> git clone https://github.com/HadrienLopes/ft_printf/
$> cd ft_printf
$> make
```

## How to use
```fish
$> gcc main.c ./sources/*.o -L ./libft -lft
```
> [!IMPORTANT]
> The library is only available in static version for the moment.
