#include <bits/stdc++.h>
using namespace std;
class parent {
public:
    void printsimethin(){
        cout<<"i am idot";
    }
};
class child: public parent{
public:
    void print_(){
        cout<<"i am  idot chlid";
    }
};
class grandchild:public child{
public:
    void printchlid(){
        cout<<"i am grandchild of chlid";
    }
};
int main() {
    grandchild obj;
    obj.printsimethin();
    cout<<"\n";
    obj.print_(); 
    obj.printchlid();
    return 0;
}
