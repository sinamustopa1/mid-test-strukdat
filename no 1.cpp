/*
Nama : Sina Mustopa
Kelas : A
NPM : 140810180017
TANGGAL : 23 April 2019
*/
#include<iostream>
using namespace std;

struct ElemtList{
 char no_daftar;
 char tim[20];
 char asal_daerah[20];
 int gol;
 ElemtList* next;
};

typedef ElemtList* pointer;
typedef pointer List;

void createList (List& First){
First = NULL;
}

void createElmt (pointer& pBaru){
 pBaru= new ElemtList;
 cout<< "No Daftar : "; cin>>pBaru->no_daftar;
 cout<< "Nama Tim : "; cin>>pBaru->tim;
 cout<< "Asal Daerah : "; cin>>pBaru->asal_daerah;
 pBaru->next=NULL;
}

/*void insertFirst (List& First, pointer pBaru){
 if (First==NULL)
 First=pBaru;
 else{
  pBaru->next=First;
  First=pBaru;
 }
}*/

void traversal (List First){
 pointer pBantu;
 if (First==NULL){
    cout << "List Kosong\n";
  }
  else{
  pBantu=First;
  do{
   cout << pBantu->no_daftar<<"    ";
   cout<<pBantu->tim<<"    ";
   cout<<pBantu->asal_daerah<<"    "<<endl;
   pBantu = pBantu->next;
  }while(pBantu != NULL);{
   cout << endl;
  }
 }
}

void insertLast(List& First, pointer pBaru){
 pointer last; 
 if (First==NULL){ 
  First=pBaru;
  }
 else { 
  last=First; 
  while (last->next!=NULL){
  last=last->next;
  }
 last->next=pBaru; 
 }
}



void sorting (    ){
	
}

int main(){

	pointer p;
	int n;
	List list;
	
	createList(list);

	cout<<"Masukkan jumlah Pendaftar : ";cin>>n;
	for(int i=0; i<n; i++){
		createElmt(p);
		insertLast(list,p);
		cout<<"=-=-=-=-=-=-=-="<<endl;
	}
	traversal(list);
}
