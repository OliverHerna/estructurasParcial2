#include <bits/stdc++.h>
using namespace std;
int movs = 0;
void tower(int a,char from,char aux,char to){
   if(a==1){
      cout<<"\nMover disco 1 de "<<from<<" a "<<to<<"\n";
      movs++;
      return;
   }
   tower(a-1,from,to,aux);
   cout<<"\nMover disco "<<a<<" de "<<from<<" a "<<to<<"\n";
   movs++;
   tower(a-1,aux,from,to);//this is the back to pile disk  
}
int main(){
     int n;
     cout<<"*****Torres de Hanoi*****\n";
     cout<<"Ingresa el numero de discos a jugar: ";
     cin>>n;
     cout << endl;
     tower(n,'A','B','C');
     cout << "Numero Total de movimientos: " << movs << endl;
     return 0;
}	

