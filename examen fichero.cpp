#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
string a;
ofstream fich("Emilia.txt");
cout<<"Como se siente el dia de hoy?";
getline(cin, a);
fich<<a;


return 0;
}
