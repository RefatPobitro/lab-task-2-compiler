#include<iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    cout<<"Each Token Found In the source code: "<<endl;



    string s;

    ifstream File("Read.txt");

    while (getline (File, s)) {

    cout << s<<endl;

}






return 0;
}
