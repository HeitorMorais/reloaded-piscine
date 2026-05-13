#include <unistd.h>

void ft_putchar(char);

void ft_print_alphabet(){
	char alpha = 'a';
		while(alpha <= 'z'){
			ft_putchar(alpha);
			alpha++;
		}
}

void ft_putchar(char c){
	write(1, &c, 1);
}

int main(){
	ft_print_alphabet();
	return 0;
}
