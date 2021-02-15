//
//  main.cpp
//  GitXcodeBV011
//
//  Created by Анна Горячева on 15.02.2021.
//

#include <iostream>
using namespace std;

void FillRand(int* arr, const int n);
void Print(int arr[], const int n);


int main()
{
    setlocale (LC_ALL, "");
    int n;
    cout << " Введите размер массива: "; cin >> n;
    int* arr = new int[n] {};
    cout << arr << endl;
    FillRand(arr,n);
    Print(arr,n);
    
//    int brr[5];
//    cout << brr << endl;
//    FillRand(brr,5);
//    Print(brr,5);
    
    int value; // добавляемые значения
    cout << "Введите добавляемое значение: "; cin >> value;
    arr[n]=value;
    n++;
    Print(arr,n);
    int* buffer[n+1];
    delete[]arr;
    
    return 0;
}
void FillRand(int arr[], const int n)
{
for (int i=0; i<n; i++)
{
    *(arr+i)=rand()%100;    // * - возвращает значение по адресу
}
}
void Print(int arr[], const int n)
{
for (int i=0; i<n; i++)
{
    cout << arr[i] << "\t";   // оператор индексирования [] возвращает значение по индексу
}
cout << endl;
}
