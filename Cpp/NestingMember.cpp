#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);

};

void binary :: read(void){
    cout<< "Enter a binary Number" << endl ;
    cin>> s;
}

void binary :: chk_bin(void){

    for(int i=0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<< "Incorrect Binary Format!" << endl;
            // cout<< s.length;
            exit(0);
        }
    }
}


int main()
{
    // oops - classes and objects

    //c++ --. intiallh called --. C will clases by striystroup
    // class --> extension of structure ( in C)
    //structuure had limitations
    //  --> Members are public
    //Nesting of member function

    binary b; 
    b.read();
    b.chk_bin();

    return 0;
}