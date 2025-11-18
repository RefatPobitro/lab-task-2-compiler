#include<iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string s;

ifstream File("Read.txt");



int Token(){

    while(getline(File,s)){

        stringstream ss(s);
        string token;


        while(ss>>token){

            if(token == "int" ||token == "return" ||token == "main" ){

               cout << "\"" << token << "\": " << "**Keyword**" << endl;

            }
            else if (token == "=" || token == ";" || token == "(" || token == ")" || token == "{" || token == "}") {
                cout << "\"" << token << "\": " << "**Operator/Punctuator**" << endl;
            }
            else if (token == "0" || token == "4") {
                cout << "\"" << token << "\": " << "**Constant/Literal (Number)**" << endl;
            }
            else {

                cout << "\"" << token << "\": " << "**Identifier**" << endl;
            }


        }

    }

}


int main(){

    cout<<"Each Token Found In the source code: "<<endl;





    while (getline (File, s)) {

            cout << s<<endl;

            Token();



}










return 0;
}
