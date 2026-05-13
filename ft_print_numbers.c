#include <unistd.h>

void ft_putchar(char);

void ft_print_numbers(){
	char number = '0';
	while(number <= '9'){
		ft_putchar(number);
		number++;
	}
}

void ft_putchar(char c){
	write(1, &c, 1);
}

int main(){
	ft_print_numbers();
	return 0;
}
