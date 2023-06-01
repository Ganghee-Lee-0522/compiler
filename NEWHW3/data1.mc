// 2023 Compiler Testdata 1

//global variables
const int input = 5;
int intarray[10];
int intarray[10];

int fibonacci(int a) { 
	int res_fibo = 0;
	int first, second;
	int i;

	first = 1;
	second = 1;
	i = 3;

	while (i <= a) {
		res_fibo = first + second;
		i++;
		first = second;
		second = res_fibo;
	}
	return res_fibo;
}

int triangle(int width, int height) {
	int result_tri;
	result_tri = width * height / 2;
	return result_tri;
}

int main() {
	int fibo;
	int tri;

	if (input >= 3) 
		fibo = fibonacci(input);
	
	else 
		fibo = fibonacci(input + 3);
	

	tri = triangle(input, input);
	
	return 0;
}