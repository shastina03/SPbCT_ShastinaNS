

#include <fstream>  //Для файловых потоков
#include <iostream> 
#include <string>   //Для контейнера string
#include <vector>  //Для контейнера vector
#include <iterator> //Для вывода элементов вектора  на экран с помощью алгоритма copy
#include <string>
#include <windows.h>
#include <algorithm>
#include<sstream>
#include <ctime>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS"); SetConsoleCP(1251); SetConsoleOutputCP(1251);
	cout << "Выполнила Шастина Наталья" << endl;
	tm ptr;//отображение текущего времени
	time_t lt = time(nullptr);
	localtime_s(&ptr, &lt);
	cout << ptr.tm_hour << ':' << ptr.tm_min;
	cout << ':' << ptr.tm_sec << endl;
	int ch = 0;  //Это переменная, в которую нужно считывать символы
	string s;  //Это строка, она в примере будет абзацем
	vector<string> v;//векторы строк
	vector<string> v1;
	vector<string> v2;
	vector<string> v3;
	vector<string> v4;
	vector<string> v5;
	vector<string> v6;
	vector<string> v7;
	vector<string> v8;
	vector<string> v9;
	ifstream file("data.txt");   //открыли для чтения  файл
	cout << "Исходные данные:" <<endl;
	while ((ch = file.get()) != EOF) {
		if (char(ch) != '\n') s = s + char(ch);
		//Считываем символ из файла и сразу проверяем его на признак переноса строки. 
		else {
			v.push_back(s); //Если текущий символ перенос, то записываем строку в вектор
			s.clear(); //Очищаем строку
		}
		
	}
	v.push_back("");//Дописываем последнюю строку в вектор
	file.close();

	int ch1 = 0;  //Это переменная, в которую нужно считывать символы
	string s1;  //Это строка, она в примере будет абзацем
	vector<string> v10;
	ifstream file1("data1.txt");     //открыли для чтения  файл
	while ((ch1 = file1.get()) != EOF) {
		if (char(ch1) != '\n') s1 = s1 + char(ch1);
		//Считываем символ из файла и сразу проверяем его на признак переноса строки. 
		else {
			v10.push_back(s1); //Если текущий символ перенос, то записываем строку в вектор
			s1.clear(); //Очищаем строку
		}

	}
	sort(v2.rbegin(), v2.rend());//cортировка в порядке убывания
	file1.close();
	v.push_back("Итоговые данные:");
	copy(v.begin(), v.end(), ostream_iterator<string>(cout, "\n"));
	
	copy(v10.begin(), v10.end(), ostream_iterator<string>(cout, "\n"));
	
	//Вывожу вектор на экран
	cin.get();
	return 0;
}



