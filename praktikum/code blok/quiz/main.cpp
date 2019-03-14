#include <iostream>
#include <windows.h>

using namespace std;

int main () {
   int i, j;

   for(i = 1; i<=100; i++) {
   		for(j = 1; j<=i; j++) {
	   		cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
	   		cout<<endl;
	   		if(j+1==i){
            cout<<"---------------!\\(^-^)~~~~~MIMI PERI~~~~~~~(^-^)//!--------";
            cout<<endl;
			   }
  		}
      	Sleep(500);
   		system("cls");
   		for(j = 1; j<=i; j++) {
	   		cout<<"............................................................";
	   		cout<<endl;
	   		if(j+2==i){
            cout<<"---------------!\\(^-^)~~~~~MIMI PERI~~~~~~~(^-^)//!--------";
            cout<<endl;
			   }
   		}
   		if(i<100){
	   		Sleep(500);
	   	    system("cls");
		}
   		}
   return 0;
}
