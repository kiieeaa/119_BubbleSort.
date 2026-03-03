#include <iostream>
#include <string>
using namespace std;

int arr[20]; // deklarasi variabel global array a dengan ukuran 20
int n; // deklarasi variabel global n untuk menyimpan banyaknya elemen pada array

void input()
{
    int d;
    while (true)
    {
        cout << "masukan banyaknya alemen pada array : "; // output ke layar
        cin >> n; // input dari pengguna
        if (n <= 20)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //output ke layar
        }

    }
    cout << endl;
    cout << "====================" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "====================" << endl;
    cout << endl;

    for (int j = 0; j < n; j++)
    {                                           // looping dengan j dimulai dari 0 hingga n-1
        cout << "Data ke-" << (j + 1) << ": "; // output ke layar
        cin >> arr[j]; // input dari pengguna
    }
}

void bubbleSortArray()
{
    int pass = 1; // step 1

    do
    {
        for (int j = 0; j <= n - 1 - pass; j++)
        { 
            if (arr[j] > arr[j + 1])
            {
                int temp ; 
                temp =arr[j];   // step 2
                arr[j] = arr[j + 1];  // step 3
                arr[j + 1] = temp; 
            }
        }

        pass += 1;  //step 4

        cout << "\npass" << pass -1 << ": "; // number of pass
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " "; // menampilkan data pada number of pass
        }

        cout << endl;

     /* code */
    } while (pass < n);  // step 5
    
}

void display()
{
    cout << endl;
    cout << "====================" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "====================" << endl;
    cout << endl;

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] ; // outpou ke lyar
        if (j < n-1)
        {
            cout << ", "; // output ke layar
        }

        cout << endl;
        cout << endl;

        cout << "jumlah pass = " << n-1 <<  endl;
        cout << endl;
        cout << endl;
    }
}
    
    int main(){
        input(); // memanggil fungsi input
        bubbleSortArray(); // memanggil fungsi bubbleSortArray
        display();
        system("pause"); // memanggil fungsi display

        return 0;

    }




