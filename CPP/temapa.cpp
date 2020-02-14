#include<iostream>
using namespace std;
template<class v>
class nova{
private:
    v c;
public:
    nova(){
    }
    void set_dados(){
        cout<<"Digite: "<<"\n\n";
        cin >> c;

    }
    void print_dados(){
        cout << c <<"\n\n";

    }
    ~nova(){
    }

};
int main(){
    nova<int> w;
    w.set_dados();
    w.print_dados();





}
