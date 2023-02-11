#include <bits/stdc++.h>
using namespace std;
class class1 {
public:
    void printsimethin(){
        cout<<"i am idot";
    }
};
class  class2{
public:
    void print_(){
        cout<<"i am  idot chlid";
    }
};
class child:public class1,public class2{
public:
    void printchlid(){
        cout<<"i am grandchild of chlid";
    }
};
int main() {
    child obj;
    obj.printsimethin();
    cout<<"\n";
    obj.print_(); 
    obj.printchlid();
    return 0;
}
