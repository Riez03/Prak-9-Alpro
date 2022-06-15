#include <iostream>
using namespace std;
class Array{
  public:
    void input();
  	void cetak_satu();
    void sorting();
    void konversi();
  	void cetak_dua();
  private:
  	int array[20][20],array2[50];
  	int n,z,m,k,temp;
};
void Array::input(){
  cout<<"Masukan Jumlah Buku :";
  cin>>z;
  for(int i=0;i<z;i++){
    cout<<"Nomor buku ke ["<<i<<"] : ";
    cin>>array2[i];
  }
}
void Array::cetak_satu(){
   	cout << "Bentuk Array 1D :"<<endl;
	for (int k=0; k<z; k++){
		cout << array2[k]<<"  ";
	}
}
void Array::sorting(){
	for(int i=0;i<z;i++){
  		for(int c=0;c<z-1;c++){
    		if(array2[c] > array2[c+1]){
     			temp=array2[c];
      			array2[c]=array2[c+1];
      			array2[c+1]=temp;
    		}
  		}
	}
}
void Array::konversi(){
	cout << " \nUbah ke array 2D :\n";
	cout << " Input jumlah baris : ";cin >> n;
	cout << " Input jumlah kolom : "; cin >> m;
  k=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			array[i][j]=array2[k];
			k++;
		}
	}
}
void Array::cetak_dua(){
	cout << "\n Bentuk array 2D :"<<endl;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cout << array[i][j]<<"\t";
		}
		cout << endl;
	}

  for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cout << "Rak ke "<<i+1 <<", kolom ke " <<j+1 <<", Buku nomor "<<array[i][j]<<endl;
		}
	}
}

int main (){
  Array run;
  run.input();
  run.cetak_satu();
  run.sorting();
  run.konversi();
  run.cetak_dua();
  return 0;
}
