#include <unistd.h>

void ft_putchar(char);

void ft_is_negative(int n){
	if(n < 0){
		ft_putchar('N');
	} else {
		ft_putchar('P');
	}
}

void ft_putchar(char c){
	write(1, &c, 1);
}

int main(){
	ft_is_negative(5);
	ft_is_negative(0);
	ft_is_negative(-2);

	return 0;
}
