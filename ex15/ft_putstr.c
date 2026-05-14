#include <unistd.h>

void ft_putchar(char);

void ft_putstr(char *str){
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void ft_putchar(char c){
	write(1, &c, 1);
}

int main(){
	ft_putstr("testee");
}
