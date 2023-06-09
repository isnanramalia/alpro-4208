#include <iostream>
using namespace std;

/*HOMEWORK 2
1 bool isEven
2 bool isOdd
3 bool isFactor;
4 int sumEven
5 sumOdd
6 maxN
7 minN
8 maxArray
9 minArray
10 bool isFound
11 void swapN*/
 
// deklarasi isEven
bool isEven(int x1);

// deklarasi isOdd
bool isOdd(int x2);

// deklarasi isFactor
bool isFactor(int x3, int f);

// deklarasi sumEven
int sumeven(int sumEven[], int sizeEven);

// deklarasi sumEven
int sumodd(int sumOdd[], int sizeOdd);

// deklarasi maxN
int maxN(int arr[], int n);

// deklarasi minN
int minN(int arr[], int n);

// deklarasi maxArray
int maxArray(int arr8[], int n8);

// deklarasi minArray
int minArray(int arr9[], int n9);

// deklarasi isFound
bool isFound(int ar10r[], int n10, int x10);

// deklarasi fungsi swapN
void swapN(int arr[], int n, int i, int j);

int main()
{
    // bool isEven(int x) : true kalo genap
    cout << "no 1: isEven" << endl;
    int x1 = 10;
    if (isEven(x1))
    {
        cout << x1 << " adl bilangan genap" << endl;
    }
    else
    {
        cout << x1 << " adl bilangan ganjil" << endl;
    }

    // bool isOdd(int x) : true kalo ganjil
    cout << "\nno 2: isOdd" << endl;
    int x2 = 11;
    if (isOdd(x2))
    {
        cout << x2 << " adl bilangan ganjil" << endl;
    }
    else
    {
        cout << x2 << " adl bilangan genap" << endl;
    }

    // bool isFactor(int x, int f): f faktor dr x atau bukan
    cout << "\nno 3: isFactor" << endl;
    int x3 = 20;
    int f = 5;
    if (isFactor(x3, f))
    {
        cout << f << " adalah faktor dari " << x3 << endl;
    }
    else
    {
        cout << f << " bukan faktor dari " << x3 << endl;
    }

    // int sumEven: untuk menghitung bil genap dlm array
    cout << "\nno 4: sumEven" << endl;
    int sumEven[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sizeEven = sizeof(sumEven) / sizeof(sumEven[0]);
    int resultEven = sumeven(sumEven, sizeEven);
    cout << "jumlah elemen genap dalam array adalah: " << resultEven << endl;

    // int sumOdd: untuk menghitung bil ganjil dlm array
    cout << "\nno 5: sumOdd" << endl;
    int sumOdd[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sizeOdd = sizeof(sumOdd) / sizeof(sumOdd[0]);
    int resultOdd = sumodd(sumOdd, sizeOdd);
    cout << "jumlah elemen ganjil dalam array adalah: " << resultOdd << endl;

    // maxN: mencari nilai terbesar dari n bilangan
    cout << "\nno 6: maxN" << endl;
    int arr[] = {2, 5, 1, 7, 4};
    int n = 5;
    int maksimum = maxN(arr, n);
    cout << "nilai maksimum: " << maksimum << endl;

    // minN: mencari nilai terkecil dari n bilangan
    cout << "\nno 7: MinN" << endl;
    int arr7[] = {2, 5, 1, 7, 4};
    int n7 = 5;
    int minimum = minN(arr7, n7);
    cout << "ilai minimum: " << minimum << endl;

    // maxArray: mencari nilai terbesar dlm array
    cout << "\nno 8: MaxArray" << endl;
    int arr8[] = {6, 12, 34, 22, 1};
    int n8 = 5;
    int maksimum8 = maxArray(arr8, n8);
    cout << "nilai maksimum dlm array: " << maksimum8 << endl;

    // minArray: mencari nilai terkecil dlm array
    cout << "\nno 9: MinArray" << endl;
    int arr9[] = {6, 12, 34, 22, 1};
    int n9 = 5;
    int minimum9 = minArray(arr9, n9);
    cout << "nilai minimum dlm array: " << minimum9 << endl;

    // isFound: mencari apakah ada bilangan tertentu pd array
    cout << "\nno 10: IsFound" << endl;
    int arr10[] = {2, 5, 1, 7, 4};
    int n10 = 5;
    int x10 = 5;
    bool found = isFound(arr10, n10, x10);
    if (found)
    {
        cout << "Bilangan " << x10 << " ditemukan dalam array" << endl;
    }
    else
    {
        cout << "Bilangan " << x10 << " tidak ditemukan dalam array" << endl;
    }

    // swapN: menukar dua elemen pada array
    cout << "\nno 11: swapN" << endl;
    int arr11[] = {2, 5, 1, 7, 4};
    int n11 = 5;
    int i11 = 1;
    int j11 = 3;

    cout << "Sebelum ditukar: ";
    for (int k = 0; k < n; k++)
    {
        cout << arr11[k] << " ";
    }
    cout << endl;

    swapN(arr11, n11, i11, j11);

    cout << "Setelah ditukar: ";
    for (int k = 0; k < n; k++)
    {
        cout << arr11[k] << " ";
    }
    cout << endl;

    return 0;
}

// definisi isEven
bool isEven(int x1)
{
    return (x1 % 2 == 0);
}

// definisi isEven
bool isOdd(int x2)
{
    return (x2 % 2 != 0);
}

// definisi isFactor
bool isFactor(int x3, int f)
{
    return (x3 % f == 0);
}

// definisi sumEven
int sumeven(int sumEven[], int sizeEven)
{
    int sum = 0;
    for (int i = 0; i < sizeEven; i++)
    {
        if (sumEven[i] % 2 == 0)
        {
            sum += sumEven[i];
        }
    }
    return sum;
}

// definisi sumOdd
int sumodd(int sumOdd[], int sizeOdd)
{
    int sum = 0;
    for (int i = 0; i < sizeOdd; i++)
    {
        if (sumOdd[i] % 2 != 0)
        {
            sum += sumOdd[i];
        }
    }
    return sum;
}

// definisi maxN
int maxN(int arr[], int n)
{
    int maksimum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maksimum)
        {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

// definisi minN
int minN(int arr7[], int n7)
{
    int minimum = arr7[0];
    for (int i = 1; i < n7; i++)
    {
        if (arr7[i] < minimum)
        {
            minimum = arr7[i];
        }
    }
    return minimum;
}

// definisi maxArray
int maxArray(int arr8[], int n8)
{
    int maksimum8 = arr8[0];
    for (int i = 1; i < n8; i++)
    {
        if (arr8[i] > maksimum8)
        {
            maksimum8 = arr8[i];
        }
    }
    return maksimum8;
}

// definisi minArray
int minArray(int arr9[], int n)
{
    int minimum9 = arr9[0];
    for (int i = 1; i < n; i++)
    {
        if (arr9[i] < minimum9)
        {
            minimum9 = arr9[i];
        }
    }
    return minimum9;
}

// definisi isFound
bool isFound(int arr10[], int n10, int x10)
{
    for (int i = 0; i < n10; i++)
    {
        if (arr10[i] == x10)
        {
            return true;
        }
    }
    return false;
}

// definisi swapN
void swapN(int arr11[], int n11, int i11, int j11)
{
    int temp = arr11[i11];
    arr11[i11] = arr11[j11];
    arr11[j11] = temp;
}
