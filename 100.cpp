#include <iostream>
#include "windows.h"
#include<cstdio>
using namespace std;
int main()
{
		int x;
	x=MessageBox(GetForegroundWindow(),"【twelve】","【是否进行】",1);
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
  cout << "娆㈠害鏄ヨ妭" <<endl;
	int ch=1;
  while (ch<5)
  {
    cout << "                     011                                " <<endl;
    cout << "                     101                      100       " <<endl;
    cout << "                     111         000          101" <<endl;
    cout << "                     100         111          000       " <<endl;
    cout << "                     011         101          011        " <<endl;
    cout << "                     101         001          011             " <<endl;
    cout << "                     100         001          111" <<endl;
    cout << "                     010         111          111 " <<endl;
    cout << "                                 001" <<endl;
    system("ping -n 3 127.0.0.1 >nul 2>nul"); 
    ch++;
  }
  cout << "                     [  0 ]      [  0 ]      [  0 ]"<<endl;
  cout << "               ------(    )------(    )------(    )----------"<<endl;
  cout << "               |      [  ]        [  ]        [  ]          |"<<endl;
  cout << "               |      (  /        (  /        (  /          |"<<endl;
  cout << "               --------^------------^-----------^------------"<<endl;
  cout << "               |||                                        |||"<<endl;
  cout << "               |||                                        |||"<<endl;
  cout << "               |||                                        |||"<<endl;
  cout << "               y||                                        ||j"<<endl;
  cout << "               //////##################################\\\\\\   "<<endl;
  cout << "              //////####################################\\\\\\"<<endl;
  cout << "             //////              1111111111              \\\\\\  "<<endl;
  cout << "            //////               0000000000               \\\\\\" <<endl;
  cout << "           //////                0000000000                \\\\\\"<<endl;
  cout << "          //////                 ||||||||||                 \\\\\\  " <<endl;
  cout << "         //////------------------{苏拉威西}-------------------\\\\\\                      "<<endl;
  
  
  
  cout <<" shift"<<endl;
  return 0;
}
