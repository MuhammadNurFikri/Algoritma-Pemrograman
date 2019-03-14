#include <iostream>
#include <windows.h>

using namespace std;

int main () {
   int i, j;

   for(i = 1; i<=100; i++) {
   		for(j = 1; j<=i; j++) {
	   		cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
	   		cout<<endl;
	   		if(j+10==i){
	   			cout<<"--------------------------KENDANG--------------------------";
	   			cout<<endl;
			   }
  		}
      	Sleep(1000);
   		system("cls");
   		for(j = 1; j<=i; j++) {
	   		cout<<"............................................................";
	   		cout<<endl;
	   		if(j+10==i){
	   			cout<<"--------------------------KENDANG--------------------------";
	   			cout<<endl;
			   }
   		}
   		if(i<50){
	   		Sleep(1000);
	   	    system("cls");
		}
   		}
   return 0;
}
