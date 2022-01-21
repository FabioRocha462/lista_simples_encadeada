#include<iostream>
using namespace std;
class No{
  private:
  int v;
  No* prox;
  public:
  No(){
    this->prox=NULL;
  }
  No (int value){
    this->v=value;
      this->prox= NULL;
  }

  int obterValor(){
    return v;
  }
  No* obterProx(){
    return prox;
  }
  void setProx(No* p){
    prox = p;
  }
};