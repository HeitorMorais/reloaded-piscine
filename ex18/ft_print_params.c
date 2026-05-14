#include <unistd.h>

int ft_putchar(char c){
	write(1, &c, 1);
}


int ft_putstr(char *str){
	while(*str){
		ft_putchar(*str);
		str++;
	}
}

int main(int argc, char* argv[]){
	if(argc < 2) return 0;
	
	int i = 1;

	while(i < argc){
		ft_putstr(argv[i]);
		i++;
	}

	return 0;
}
