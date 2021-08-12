#include <iostream>

using namespace std;

int main() {
  int num[3];
  for (int i=0; i<3; i++){
    cout<<"Ingrese numero"<<endl;
    cin>>num[i];
  }
  for (int i=0; i<3; i++){
    if(num[0]<num[1]){
      if(num[0]<num[2]){
        cout<<"El numero menor.. es: "<<num[0];
        i=i+1;
        }
        else
          cout<<"El numero menor es: "<<num[2];
        i++;
    }
    else
      cout<<"El numero menor... es: "<<num[1];
    

  }
}