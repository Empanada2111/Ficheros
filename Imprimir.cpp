#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
cout<<"Su estado de animo es:";
ifstream archivo;
string texto;
archivo.open("Emilia.txt");
getline (archivo,texto);
cout<<texto;
archivo.close();
return 0;
}
