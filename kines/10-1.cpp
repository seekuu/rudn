#include <iostream>
#define LEN 20
#include <cmath>
using namespace std;

/* Дан массив размера N и целые числа K и L (
1 K  L  N
). Найти среднее
арифметическое элементов массива с номерами от K до L включительно*/

class Q
{
private:
  int mas[LEN];	//массив целых чисел
  int kol;	//текущий размер массива
public:
  Q(); /* объявление конструктора*/
  Q(int, int []);
  void output(); //объявление член-функции вывода
  int funk();/*объявление член-функции */
};	//конец объявления класс Q

int main()
{
	setlocale(LC_ALL, "Rus");
	int n; int k;
	int mas[LEN];
	int min;
	int ind;

	cout<<" Vichislenie srednego arifmeticheskogo el-tov massiva otrezka [k;l]"<<endl;
	cout << "Введите количество элементов массива: ";

	do{
		cin >> n;
		if(n <= 0 || n > 20)
			cout << "Ошибка! Введите корректное значение!\n";
	} while(n <= 0 || n > 20);
	cout << "Ввод массива чисел:\n";
	for(int i = 0; i < n; i++){
		cout << "Введите элемент [" << i + 1 << "] = ";
		cin >> mas[i];
	}

	Q obj1(n, mas);
	obj1.output();
	min = obj1.funk();


	return 0;
}

Q::Q() /* конструктор */
{
	kol = 0;
	cout << "\n\nВведите количество элементов массива: ";
	do{
		cin >> kol;
		if(kol <= 0 || kol > 20)
			cout << "Ошибка! Введите корректное значение!\n";
	} while(kol <= 0 || kol > 20);

	for(int i = 0; i < kol; i++)
	{
		cout << "Введите элемент ["<< (i+1) <<"] = ";
		cin >> mas[i];
	}
}

Q::Q(int n, int f[]){
	kol = n;
	for(int i = 0; i < kol; i++)
		mas[i] = f[i];
}

void Q::output() //функция вывода данных
{
	cout <<"Массив:\n";
	for(int i = 0; i < kol; i++)
		cout << mas[i]<< " ";
	cout << endl;
}

int Q::funk()
{
	int k=-1,l=-1;
	double s;
	while(k<0 or k>k or k>kol-1){
		cout<<"Введите k и l"<<endl;
		cin>>k>>l;}
	for(int i=k;i<=l;i++)s+=mas[i];//проходим массив от 0 до к
	cout<<"Srednee arifmeticheskoe :"<<s/(l-k+1)<<endl;
	return 0;
}
