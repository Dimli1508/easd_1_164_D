//1. Algoritma dibutuhkan supaya suatu masalah bisa diselesaikan secara lebih mudah karena sudah tertata dan urut
//2. Static Dan Dynamic
//3. Ukuran program, device, Bahasa pemrograman 
//4. Bubble sort karna simple dan mudah untuk difahami
//5. Quadratic : Bubble Sort, Insertion Sort, Selection Sort
//   LogLinear : Merge Sort, Quick Sort

#include <iostream>
using namespace std;

int dimas[30];
int n;

void selectionsort() {
    for (int DL = 0; DL < n - 1; DL++) {
        int min_index = DL;
        for (int i = DL + 1; i < n; i++)
        {
            if (dimas[i] < dimas[min_index])
            {
                min_index = i;
            }
        }
        if (min_index != DL)
        {
            int temp = dimas[DL];
            dimas[DL] = dimas[min_index];
            dimas[min_index] = temp;
        }
    }
}

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n; 
        if (n <= 30) 
            break;
        else
        { 
            cout << "\nArray dapat mempunyai maksimal 30 elemen.";  
        }
    }
    cout << endl;
    cout << "Masukkan Elemen Array" << endl;   

    for (int i = 0; i < n; i++) {
        cout << "Data Ke-" << (i + 1) << ": ";
        cin >> dimas[i];
    }
}



void display() {
    cout << endl;
    cout << "Element Array yang telah tersusun" << endl;
    for (int DL = 0; DL < n; DL++) { 
        cout << dimas[DL] << endl;
    }
    cout << endl; 
}


int main()
{
    input();
    selectionsort();
    display();
}