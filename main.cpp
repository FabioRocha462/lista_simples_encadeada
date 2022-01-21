#include <iostream>
#include"Lista.cpp"
using namespace std;

int main() {
  Lista* lista= new Lista();
  lista->inserir(10);
  lista->inserir(9);
  lista->inserir(8);
  lista->print();
  lista->reverte();
  cout<<endl;
  lista->print();
  lista->inserir(7);
  cout<<endl;
  lista->print();
 
} 