#include <iostream>
using namespace std;
class Array {
public:
  void input();
  void proses();
  void output();

private:
  int array[20][20], array2[50];
  int n, z, m, k, temp;
};

void Array::input() {
  cout << "Masukan Jumlah Buku :";
  cin >> z;
  for (int i = 0; i < z; i++) {
    cout << "Nomor buku ke [" << i+1 << "] : ";
    cin >> array2[i];
  }

  cout << "\nNomor buku :" << endl;
  for (int k = 0; k < z; k++) {
    cout << array2[k] << "  ";
  }
}

void Array::proses(){ 
  for (int i = 0; i < z; i++) {
    for (int c = 0; c < z - 1; c++) {
      if (array2[c] > array2[c + 1]) {
        temp = array2[c];
        array2[c] = array2[c + 1];
        array2[c + 1] = temp;
      }
    }
  }


  cout << "\n\nInput jumlah baris : ";
  cin >> n;
  cout << "Input jumlah kolom : ";
  cin >> m;
  k = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      array[i][j] = array2[k];
      k++;
    }
  }
}

void Array::output(){ 
  cout << "\nSusunan buku :" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << array[i][j] << "\t";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << "\nRak ke " << i + 1 << ", kolom ke " << j + 1 << ", Buku nomor "
           << array[i][j] << endl;
    }
  }
}

int main() {
  Array run;
  run.input();
  run.proses();
  run.output();
  return 0;
}
