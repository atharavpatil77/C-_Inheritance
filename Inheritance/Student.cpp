//1 - wite a cpp prog to read and print student information for btech admission.
/*2 - Given that employee class content following members: 
     data members:employee no,employee name ,basic salary,Daily allowance,net salary and print data members    
     the employee designation are  principal,HOD,professor,lab assistant*/


#include <iostream>

using namespace std;


class Student{
    private:    
        string name;
        float phy;
        float chem;
        float math;
        float average;

    public:
        int id;
        void setdetails(){
            cout<<"Enter your name : ";
            cin>>name;

            cout<<"Enter your Id : ";
            cin>>id;

            cout<<"Enter your PCM marks one by one with spaces : ";
            cin>>phy>>chem>>math;

            average =  (phy+chem+math)/3;
        }

        void eligiblitycheck(){
            if(average>=60){
                cout<<name<<" is eligible to take admission :) ";
            }
            else{
                cout<<name<<" is NOT eligible to take admission :( ";
            }
        }
};



int main(){
    int n , id;
    char y;

    cout<<"How many data you want to enter : ";
    cin>>n;


    Student stud[n];

    for(int i = 0 ; i < n ; i ++){
        cout<<"\nEnter student "<<i+1<<" Details : \n";
        stud[i].setdetails();
    }

    label:
    cout<<"Which Student you want to check (ID)? ";
    cin>>id;

    for(int i = 0 ; i < n ; i ++){
    if(id == stud[i].id ){
        stud[i].eligiblitycheck();
    }
    }

    cout<<"\nYou want to check another student eligiblity? ";
    cin>>y;

    if(toupper(y) == 'Y'){
        goto label;
    }


    return 0;


}