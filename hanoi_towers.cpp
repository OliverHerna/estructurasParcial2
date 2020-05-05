#include <bits/stdc++.h>
using namespace std;
int movs = 0;
void tower(int a,char from,char aux,char to){
   if(a==1){//this is the condition to get back and unstack all the previous functions
      cout<<"\nMove disk 1 from "<<from<<" to "<<to<<"\n";
      movs++;
      return;
   }
   tower(a-1,from,to,aux);
   cout<<"\t\tMove disk "<<a<<" from "<<from<<" to "<<to<<"\n";
   movs++;
   tower(a-1,aux,from,to);//this is the back to pile disk  
}
int main(){
     int n;
     cout<<"Towers of Hanoi algorithm\n";
     do{
         cout<<"Enter the number of disks to play(Max 20/ Min 1): " << endl;
         cin>>n;
         cout << endl;
     }while(n < 1 || n > 20);
     tower(n,'A','B','C');
     cout << "Total movements: " << movs << endl;
     return 0;
}	
