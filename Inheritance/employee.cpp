//GIVEN THAT EMPLOYEE CLASS CONTAINS FOLLOWING MEMBERS : DATA MEMEBER : EMPLOYEE NUM ,  EMPLOYEE NAME , BASIC SALARY , DA , NET SALARY AND PRINT DATA MEMBER THERE ARE FOLLOWING DESIGNATION :  PRINCIPAL , HOD , PROFESSOR , LAB ASSISTANT

#include <iostream>

using namespace std;


class Employee{
    public:
    string name;
    string num;
    float basic;
    float nets;
    float da ;

    void setdetails(){
        cout<<"Enter your name : ";
        cin>>name;

        cout<<"Enter your employee num : ";
        cin>>num;


        cout<<"Enter the basic salary : ";
        cin>>basic;
        
    }


};  
 
class Principal:public Employee{
    public:
    int getsalary(){
        da = (0.30*int(basic*1000))/1000;
        
        nets = da + basic;
        return nets;
        
    }
};

class Hod:public Employee{
    public:
    int getsalary(){
        da = (0.25*int(basic*1000))/1000;
        
        nets = da + basic;
        return nets;
        
    }
};

class Labassist:public Employee{
    public:
    int getsalary(){
        da = (0.15*int(basic*1000))/1000;
        
        nets = da + basic;
        return nets;
        
    }
};

class Professor:public Employee{
    public:
    int getsalary(){
        da = (0.20*int(basic*1000))/1000;
        
        nets = da + basic;
        return nets;
        
    }
};


int main(){
    int n,empnum,designat;
    char y;

    cout<<"Enter the number of data you want to see? ";
    cin>>n;

    Employee emp[n];

    for(int i = 0 ; i < n ; i++){
        cout<<"Enter "<<i+1<<" Employee data : \n";
        emp[i].setdetails();
        
    }

    another:

    cout<<"\nWhose salary you want to check for(Employee no.)? : ";
    cin>>empnum;

    for(int i = 0 ; i < n ; i++){
        if(to_string(empnum) == emp[i].num){
            cout<<"Designation of "<<emp[i].name<<" \n1(Hod)\n2(Principal)\n3(Lab-Assistant)\n4(Professor): ";
            cin>>designat;

            if(designat == 1){
                Hod obj;
                obj.basic = emp[i].basic;
                cout<<"\nHead Of Department GETS 25% DA\n";
                cout<<"NET SALARY =  ₹"<<obj.getsalary();
            }
            else if(designat == 2){
                Principal obj;
                obj.basic = emp[i].basic;
                cout<<"\nPRINCIPAL GETS 30% DA\n";
                cout<<"NET SALARY =  ₹"<<obj.getsalary();
            }
            else if(designat == 3){
                Labassist obj;
                obj.basic = emp[i].basic;
                cout<<"\nLAB ASSISTANT GETS 15% DA\n";
                cout<<"NET SALARY =  ₹"<<obj.getsalary();
            }
            else if(designat == 4){
                Professor obj;
                obj.basic = emp[i].basic;
                cout<<"\nPROFESSOR GETS 20% DA\n";
                cout<<"NET SALARY :  ₹"<<obj.getsalary();
            }
            else{
                return 0;
            }

        }
    }

    cout<<"\nDo you want check another employee's salary? (y/n) : ";
    cin>>y;

    if(toupper(y) == 'Y'){
        goto another;
    }

    return 0;
}
