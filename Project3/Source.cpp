
#include<iostream>
#include<ctime>
//#include<cmath>

using namespace std;
void ClockByPrintF()
{
	int n, h, m, s;
	cin >> n;
	h = n / 60 / 60 % 24;
	m = n / 60 % 60;
	s = n % 60;
	printf("%d:%0.2d:%0.2d", h, m, s);

}

void ClockByElementaryArithmetic() {
	int n;
	cin >> n;
	cout << n / 3600 % 24 << ":" << n % 3600 / 600 << n / 60 % 10 << ":" << n % 60 / 10 << n % 10;
}

void SymetricByWholeDigits() {
	int f;
	cin >> f;
	int a1 = f / 1000;
	int a2 = f / 100 % 10;
	int a3 = f / 10 % 10;
	int a4 = f % 10;
	int n = (a1 - a4) * (a1 - a4) + (a2 - a3) * (a2 - a3) + 1;
	cout << n;
}
void Symetric9_11() {
	int num;
	std::cin >> num;
	std::cout << num % 11 + num % 1000 / 10 % 11 + 1;

}

void main2() {
	setlocale(LC_ALL, "Ru");
	
	srand(time(NULL));
	const int row = 5;
	const int col = 8;
	
	int arr[row][col]{};
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			arr[i][j] = rand()%10 ;
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	
	
}




void main1()
{
	setlocale(LC_ALL, "RU");
	
	srand(time(NULL));
	
	 const int size = 10;
	 int arr[size];
	
	 bool al;
	for (int i = 0; i < size; )
	{
		al = false;
		
		int n = rand() %20 ;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == n)
			{
				al = true;
				break;
			}

		}
		if (al == !true)
		{
			arr[i] = n;
			i++;
		}
	}





}

void main() {
	setlocale(LC_ALL, "Ru");
	int a;
	cout << "¬ведите номер: \n1-Randomizer \n2-Two-dimensional array with auto-fill \n3-SymetricByWholeDigits \n4-Symetric9_11 \n5-ClockByElementaryArithmetic \n6-ClockByPrintF"<<endl;

	cin >> a;


	switch(a)
	{
	case 1: 
		 main1();
		break;
		
	case 2: 
		 main2();
		break;
		
	case 3:
		 SymetricByWholeDigits();
		break;

	case 4:  
		 Symetric9_11();
		break;

	case 5:  
		 ClockByElementaryArithmetic();
		break;

	case 6:  
		 ClockByPrintF();
		break;

	
	}
}
