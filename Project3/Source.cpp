
#include<iostream>
#include<ctime>
//#include<cmath>

using namespace std;

void main() {
	int a;
	cin>> a;
	
	cout << (a / 1000 * 10 + a %1000/ 100) / (a % 100/10 + a %10*10 );
}
/*int fact(int N) {
	if (N == 0)
		return 0;
	if (N == 1)
	    return 1;

	return N * fact(N - 1);
}

void main() {
	setlocale(LC_ALL, "RU");
	/*cout << fact(5) << endl;
	int v, t;
	cin >> v >> t;
	int z = fabs(v * t + 109);
	cout << fabs((109-z) % 109);
	
}
	
int sum(int a, int b, int c) {
	cout << "test" << endl;
	return a + b+c;
}
int sum(int a, int b) {
	return a + b;
}
double sum(double a, double b) {
	return a + b;
}*/
/*void foo(int a=5) {
	for (int i = 0; i < a; i++) {
		cout << "*" << endl;
}
}

void main6() {
	foo ();
}

int a=1;
void foo(int a) {
	a++;
}

void main5() {
	setlocale(LC_ALL, "Ru");
	foo(2);
	a++;
	cout << a<<endl;
	
}

void fillarr(int arr[],const int size) {
  
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
	
	
}
void printarr(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		cout<< arr[i] <<endl;
	}

}
void main4() {
	setlocale(LC_ALL, "Ru");
	const int SIZE = 10;
	int arr[SIZE]{};
	fillarr(arr, SIZE);
	printarr(arr,SIZE);

}

  void foo() {
	setlocale(LC_ALL, "Ru");
	cout << "������� �������� ���� ���� ��";
}
int sum(int a,int b) {
	return a + b;
}
void main3() {
setlocale(LC_ALL, "Ru");

int c;
int q = 1;
int w = 12;
c = sum(q,w);
cout << c<<endl;





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
	cout << "������� ����� 1-����������� 2-���������� ���������� ���������� ������� 3-������� 4-���� ������� 5 -������� ���������";
	cin >> a;

	switch(a)
	{
	case 1: void main1();
		break;
	case 2: void main2();
		break;
	case 3: void main3();
		break;
	case 4: void main4();
		break;
	case 5: void main5();
		break;
	
	
	}
}*/

