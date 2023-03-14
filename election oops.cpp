#include <iostream>
using namespace std;

class election{
    int votes[6]={0};

    public:

    void giveVotes(int index){
        if(index>=0 && index<=5 )
        votes[index]++;
    }
    void displayVotes(){
       
       {
          for(int i=1; i<=5; i++){
             cout << "Total votes for candidate "<<i<< ": "<<votes[i]<<endl;
          }
       }
        
            cout<<"Spoiled Vote count is: "<<votes[0]<<endl;
    }
};

int main()
{
    election elect;
    bool voting = true;
    while(voting){
        for(int i=1; i<=5; i++)
        {
            cout<<"Press "<<i<<"to vote candidate "<<i<<endl;
        }
        cout << "Press 0 to Spoil your vote.\n";
        cout<< "Press -1 to exit"<< endl;
        int input;
        cin>>input;
        if(input==-1){
         voting = false;
        }
        else
        elect.giveVotes(input);
    }
    elect.displayVotes();
    return 0;
}
