#include <iostream>


void three_max(int &a, int &b, int &c) {
	int max = a;
	if (b > a && b > c)
		max = b;
	else
		if (c > a && c > b)
			max = c;
	int* p = &max;
	a = b = c = *p;
}
int& arr(int n, int d[]) {
		int im = 0;
		
		for (int i = 0; i < n; i++) {
			if (d[i] < 0)
				im = i;
			continue;
			if (d[i] >= 0)
				d[i] = d[im];
		}
		return d[im];	
}

void pr_ar(int length, int arr[], int length1, int arr1[]) {
	int* parr = &arr[0];
	int* parr1 = &arr1[0];
	for (int i = 0; i < length; i++)
		for (int k = 0; k < length1; k++) {
			if (*(parr + i) == *(parr1 + k))
				*(parr1 + k) = 0;
		}
}

void print_arr(int arr[], int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
}

	int main() 
{
	setlocale(LC_ALL, "Russian");

	// Задание 1
	int a, b, c;
	std::cout << "Введите три числа -> ";
	std::cin >> a >> b >> c;
	three_max(a, b, c);
	std::cout << a << ' ' << b << ' ' << c << std::endl;
	std::cout << "\n";

	// Задание 2
	int ar [] = {22, 2,-6, 14 };
	int n = 4;
	std:: cout << arr (n,ar);
	std:: cout << std::endl;

	// Задание 3
	
	
	int pp[] = {2,5,8,3,6};
	int d = 5;
	int ps[] = {1,5,8,4,6,3,11,2};
	int m = 8;
	pr_ar (d,pp, m, ps);
	print_arr(ps, m);
	std::cout << std::endl;
	
	return 0;
}