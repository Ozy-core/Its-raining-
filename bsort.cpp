#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{

    string bname;
    string yesono;
    bool yon= true;
    cout<< "Welcome to the Business Sorting Program!!"<< endl;
    cout<< "Please enter the name of the business:"<< endl;
    cin>> bname;

    vector<string> busList;
    busList.push_back(bname);
    cout<< "Your businesses are:"<< endl;
    for(string i: busList)
    {
        cout<< i<< "\n";
    }

    while(yon)
    {
        cout<< "Another business? "<< endl;
        cin>> yesono;

        if(yesono=="yes"|| yesono=="Yes"|| yesono=="y"|| yesono=="Y")
        {
            yon=true;
            cout<< "Please enter the name of the business:"<< endl;
            cin>>bname;

            busList.push_back(bname);
            sort(busList.begin(),busList.end()); 
            
            cout<<"Your businesses are:"<<endl;

            for(string i: busList)
            {
                cout<< i<< "\n";
            }
        }
        else
        {
            yon=false;
            cout<< "thank you for using the Business Sorting Program!"<< endl;
        }
    }
        return 0;

}