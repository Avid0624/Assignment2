/*********************
Name: Alexandra DeLeon
COSC-2436-004
**********************/

#include "main.h"
using namespace std;

int main(){
  cout<<"Hello World"<<endl;
}

int main(int argc , char ** argv){
    cout<<"My Command line analyzer...."<<endl;
    cout<<"The number of command line parameters are: "<<argc<<endl;
    cout<<"The length of the name of the program is: "<<string_length(argv[0])<<endl;
    if(argc > 1){

        for(int i = 1 ; i < argc ; i++){
            cout<<"The length of the parameter "<<i<<" is "<<string_length(argv[i])<<endl;
        }

    }
}
