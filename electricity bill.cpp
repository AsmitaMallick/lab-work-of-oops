#include <iostream>
using namespace std;
#include <string>

class electricity{
    
    public:
    void start()
    {
        string name;
        cout<<"Enter your name: "<<endl;
        cin>>name;
        int array[100];
        int unit;
        cout<<"No. of units consumed: ";
        cin>>unit;
        float i, j, k;
            i=((unit-100)*.8)+60;
            j=(i+((unit-300)*.9))+k;
            k=(unit*15)/100;
        if(unit<=100){
            cout<<"Charges: Rs- "<<unit*.6<<"/-"<<endl;
        }
        else if(unit<=300){
            cout<<"Charges: Rs- "<<i<<"/-"<<endl;
        }
        else
        {
             cout<<"Charges: Rs- "<<j<<"/-"<<endl;
        }
    }
    
};

int main(){
    
    electricity obj;
    bool input = true;
    while(input){
       int x;
       cout << "Press 1 to check the price"<<endl;
       cout << "Press 0 to exit"<< endl;
       cin>>x;
       if (x==0){
          input = false;
       }
       else
       obj.start();
    }
    
    return 0;
}




