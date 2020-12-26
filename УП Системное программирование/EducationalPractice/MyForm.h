#pragma once
#include "MathLibrary.h"
#include <iostream>
#include <mutex>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <chrono>


namespace EducationalPractice {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Threading;
	


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			DateTime datetime = DateTime::Now;
			this->label2->Text = datetime.ToString();
			
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	//Потоки
	private: Thread^ myThread1;
	private: Thread^ myThread2;
	private: Thread^ myThread3;
	private: Thread^ myThread4;
	private: Thread^ myThread5;
	


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(387, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Шастина Наталья, 590 группа";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(259, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Дата";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(434, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(312, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Отсортировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(32, 113);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(358, 120);
			this->textBox1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(434, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(312, 31);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Вывод на экран";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(150, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Изначальный текст";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(35, 258);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(354, 159);
			this->textBox2->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(150, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Отсортированный";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 491);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


	
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Считываю первый файл и вывожу на экран
	String^ Filename = "text.txt";
	StreamReader^ file = File::OpenText(Filename); 
	textBox1->Text = file->ReadToEnd(); 
}
	
//Функции для потоков
public: void tr1() {
	char letter;
	ifstream f;
	std::vector<char> v1, v2;
	f.open("text.txt");
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v1.push_back(letter);//запись
	}
	sort(v1.begin(), v1.end());//сортировка
	reverse(v1.begin(), v1.end());//переворот вектора
	v1[0] = '*';
	writeTo(v1);//вывод в файл
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v2.push_back(letter);
	}
	sort(v2.begin(), v2.end());
	reverse(v2.begin(), v2.end());
	v2[1] = '*';
	writeTo(v2);
	f.close();
}

public: void tr2() {
	char letter;
	ifstream f;
	std::vector<char> v3, v4;
	f.open("text.txt");
	for (int i = 0; i < 20; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v3.push_back(letter);
	}
	sort(v3.begin(), v3.end());
	reverse(v3.begin(), v3.end());
	v3[2] = '*';
	writeTo(v3);
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v4.push_back(letter);
	}
	sort(v4.begin(), v4.end());
	reverse(v4.begin(), v4.end());
	v4[3] = '*';
	writeTo(v4);
	f.close();
}

public: void tr3() {
	char letter;
	ifstream f;
	std::vector<char> v5, v6;
	f.open("text.txt");
	for (int i = 0; i < 40; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v5.push_back(letter);
	}
	sort(v5.begin(), v5.end());
	reverse(v5.begin(), v5.end());
	v5[4] = '*';
	writeTo(v5);
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v6.push_back(letter);
	}
	sort(v6.begin(), v6.end());
	reverse(v6.begin(), v6.end());
	v6[5] = '*';
	writeTo(v6);
	f.close();
}

public: void tr4() {
	char letter;
	ifstream f;
	std::vector<char> v7, v8;
	f.open("text.txt");
	for (int i = 0; i < 60; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v7.push_back(letter);
	}
	sort(v7.begin(), v7.end());
	reverse(v7.begin(), v7.end());
	v7[6] = '*';
	writeTo(v7);
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v8.push_back(letter);
	}
	sort(v8.begin(), v8.end());
	reverse(v8.begin(), v8.end());
	v8[7] = '*';
	writeTo(v8);
	f.close();
}

public: void tr5() {
	char letter;
	ifstream f;
	std::vector<char> v9, v10;
	f.open("text.txt");
	for (int i = 0; i < 80; i++)
		f >> letter;
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v9.push_back(letter);
	}
	sort(v9.begin(), v9.end());
	reverse(v9.begin(), v9.end());
	v9[8] = '*';
	writeTo(v9);
	for (int i = 0; i < 10; i++)
	{
		f >> letter;
		v10.push_back(letter);
	}
	sort(v10.begin(), v10.end());
	reverse(v10.begin(), v10.end());
	v10[9] = '*';
	writeTo(v10);
	f.close();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ofstream filestream("sorted.txt");
	filestream.close();
	//создаю потоки
	myThread1 = gcnew Thread(gcnew ThreadStart(this, &MyForm::tr1));
	myThread2 = gcnew Thread(gcnew ThreadStart(this, &MyForm::tr2));
	myThread3 = gcnew Thread(gcnew ThreadStart(this, &MyForm::tr3));
	myThread4 = gcnew Thread(gcnew ThreadStart(this, &MyForm::tr4));
	myThread5 = gcnew Thread(gcnew ThreadStart(this, &MyForm::tr5));
	//запускаю потоки и жду их окончания
	myThread1->Start();
	myThread1->Join();
	myThread2->Start();
	myThread2->Join();
	myThread3->Start();
	myThread3->Join();
	myThread4->Start();
	myThread4->Join();
	myThread5->Start();
	myThread5->Join();


	//считываю файл и вывожу на экран
	String^ Filename = "sorted.txt";
	StreamReader^ file = File::OpenText(Filename);
	textBox2->Text = file->ReadToEnd();
	file->Close();
}
};
}
