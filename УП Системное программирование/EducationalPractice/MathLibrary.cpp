// MathLibrary.cpp : Defines the exported functions for the DLL.
//#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "MathLibrary.h"



void writeTo(const std::vector<char>& data)
    {
        std::ofstream filestream("sorted.txt", std::ios::app);
        copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, " "));
        filestream << "\n";
        filestream.close();
    }
//void run(std::vector<char> v1, std::ifstream f, char []) {
//	for (int i = 0; i < 10; i++)
//	{
//		f >> values[i];
//		v1.push_back(values[i]);
//	}
//	sort(v1.begin(), v1.end());
//	writeTo(v1);
//}

