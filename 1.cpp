//Muhammad Ibad Saleem 19K0220 E1 (G)
//Question 1


#include <iostream>

using namespace std;

class Student{

    string Name;
    int Id;

    public:
    Student() {}
    Student(string name,int id){
        Name=name;
        Id=id;
    }

    string getName()
    {
        return Name;
    }

    int getId()
    {
        return Id;
    }

    char getFirstLetter()
    {
        return Name[0];
    }

};

int main()
{
string name;
int id,NS;
 typedef Student* studentPtr;
    cout<<"Enter Number of Students: ";
    cin>>NS;
    cout<<"\n\n\n";
  studentPtr students = new Student[NS];

    for (int i=0;i<NS;i++)
    {
        cout<<"Student "<<i+1<<endl<<"---------------------\n";
        cout<<"Enter Name: ";
        cin>> name;
        cout<<endl;
        cout<<"Enter Id: ";
        cin>>id;
        students[i]=Student(name,id);  
    }


        
    

    for (int i=0;i<NS-1;i++)
    {
         if(int(students[i].getFirstLetter())<int(students[i+1].getFirstLetter()))
        {
            Student temp=students[i+1];
            students[i+1]=students[i];
            students[i]=temp;
        }  
        
    }
    
    for (int i=0;i<NS;i++){
        cout<<"Student "<<i+1<<"\n";
        cout<<students[i].getName()<<"\n";
        cout<<students[i].getId();
        cout<<endl;
        }
    


}