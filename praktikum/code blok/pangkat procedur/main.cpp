#include <conio.h>


void hitungPangkat(int X, int Y) {
     int bil,n,hasil,i;
    bil=hasil;
    hasil=hasil*bil;
    cout << "Pangkat : " << hasil << endl;
}
int main(){
   cout<<"masukan X = ";
   cin>>hasil;
   cout<<"masukan Y = ";
   cin>>n;
    if(n==0) cout<<"hasil1=1"<<endl;
       else{
          bil=hasil;
        for(i=1;i<n;i++){
         hasil=hasil*bil;
           }
            }
        hitungPangkat(X,Y);
}
