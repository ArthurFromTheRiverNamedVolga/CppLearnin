
#include<iostream>
#include<ctime>

using namespace std;


void main() {
	setlocale(LC_ALL, "Ru");
	{int a;
	a = 10; }
	
}

/*void fillarr(int arr[],const int size) {
  
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
	cout << "функция хуюнкция хуле надо то";
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
	cout << "Введите номер 1-Рандомайзер 2-заполнение двумерного рандомными числами 3-функции";
	cin >> a;

	switch(a)
	{
	case 1: void main1();
		break;
	case 2: void main2();
		break;
	case 3: void main3();
		break;
	
	
	}
}*/

