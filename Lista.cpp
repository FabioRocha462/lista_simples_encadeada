#include<iostream>
#include"No.cpp"
using namespace std;
class Lista{
  private:
  No* cabeca;
  int cont;
  public:
  Lista(){
    No* aux = new No(0);
    cabeca = aux;
    cabeca->setProx(NULL);
    cont = 0;
  }
  bool vazio(){
    return (cabeca->obterProx() == NULL);
  }
  void inserir(int value){
    No* novo = new No(value);
    if(vazio()){
      cabeca->setProx(novo);
      cont++;
    }else{
      No* aux = cabeca->obterProx();
      cabeca->setProx(novo);
      novo->setProx(aux);
      cont++;
    }
  }
  void print(){
    if(vazio()){
      cout<<"Lista vazia \n";
    } 
    No* c = cabeca->obterProx();
    while(c){
      cout<<c->obterValor()<<" ";
      c=c->obterProx();
    }
  }
  int tamanho(){
    return cont;
  }
  void reverte(){
    if(vazio()){
      cout<<"Lista Vazia \n";
    }else{
    No* ant = NULL;
    No* prox = cabeca->obterProx();
    No* seg =prox;
   while(prox){
     seg=prox->obterProx();
      prox->setProx(ant);
      ant=prox;
      prox = seg;
    }
    cabeca->setProx(ant);
    }
  }
};