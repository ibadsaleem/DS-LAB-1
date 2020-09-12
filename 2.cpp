//Muhammad Ibad Saleem 19K0220 E1(G)
//Question 2

#include <iostream>

using namespace std;

class Employees{
    
    int id;
    int age;
    string name;
    double workinghours;
    double salary;
    int experience;
    
    public:
    
    Employees(){}
    Employees(int Age,int ID,string Name,double WH,double Salary,int exp){
        age=Age;
        id=ID;
        name=Name;
        workinghours=WH;
        salary=Salary;
        experience=exp;
    }
   
    double calculateSalary(int age, int experience, double workinghours)
    {
        if (age>50 && experience>10 && workinghours>240)
        {
            salary=workinghours*500;
            return salary;
        }
        else if(age<=50 && age>40 && experience>6 && experience<=10 && workinghours>200 && workinghours<=240)
        {
            salary=workinghours*425;
            return salary;
        }
        else if(age<=40 && age>30 && experience>3 && experience<=6 && workinghours>160 && workinghours<=200)
        {
            salary=workinghours*375;
            return salary;
        }
        else if(age<=30 && age>22 && experience>1 && experience<=3 && workinghours>120 && workinghours<=160)
        {
            salary=workinghours*300;
            return salary;
        }
        else{
            cout<<"Invalid Parameters";
            return 0;
        }
    }

    int getId(){return id;}
    int getAge(){return age;}
    string getName(){return name;}
    int getExp(){return experience;}
    double getWH(){return workinghours;}
    double getSalary(){return salary;}
};


int main()
{
    int size=0,age=0,id=0,Experience=0;
    double WorkingHour=0.00,Salary=0.00;
    string name="";

    cout<<"Enter Number of Employees: ";
    cin>>size;
    typedef Employees* emp;
    emp Employee= new Employees[size];

    for(int i=0;i<size;i++)
    {
        cout<<"\nEmployee "<<i+1<<"\n--------------\n";
        cout<<"Enter Name: ";
        cin>>name;
        // cout<<"Enter ID: ";
        id=i+1000;                      //Random ID generation
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Experience: ";
        cin>>Experience;
        cout<<"Enter Working Hours: ";
        cin>>WorkingHour;
        Salary=Employee[i].calculateSalary(age,Experience,WorkingHour);
        // cout<<Salary         debug to check salary
        Employee[i]=Employees (age,id,name,WorkingHour,Salary,Experience);
    }


    for (int i = 0; i < size; i++)
    {
        cout<<"Employee "<<i+1<<"\n---------------------\n";
        cout<<"Name: Mr."<<Employee[i].getName()<<endl;
        cout<<"ID: "<<Employee[i].getId()<<endl;
        cout<<"Age: "<<Employee[i].getAge()<<" Years"<<endl;
        cout<<"Experience: "<<Employee[i].getExp()<<" Years"<<endl;
        cout<<"Working Hours: "<<Employee[i].getWH()<<" Hours"<<endl;
        cout<<"Salary: Rs."<<Employee[i].getSalary()<<endl;
    }2
    

}








