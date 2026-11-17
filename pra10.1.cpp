//Practical 10.1
#include<iostream>
#include<string>
using namespace std;

struct student_data
{

//PART A-Composite Data Modelling(Structure)
    struct student_per_data
    {
        string en,sname,branch;
        short int sem;
        float per;
    } a;

//Part B– Hierarchical Composite Data Grouping (Nested Structures)
    struct student_contact_info
    {
        long long int mobile_no;
        string email_id;
    } b;

};

//PART D– Address-based Data Sharing (Pointer to Structure)
void displayStudentData(const student_data *ptr)
{

    float per=ptr->a.per;
    cout<<"Enrollment Number:"<<ptr->a.en<<endl;
    cout<<"Student Name     :"<<ptr->a.sname<<endl;
    cout<<"Branch           :"<<ptr->a.branch<<endl;
    cout<<"Semester         :"<<ptr->a.sem<<endl;
    cout<<"Percentage       :"<<per<<"%"<<endl;
    if(per>90)
    {
        cout<<"Grade  :"<<"A+"<<endl;
    }
    else if(per>80)
    {
        cout<<"Grade  :"<<"A"<<endl;
    }
    else if(per>70)
    {
        cout<<"Grade  :"<<"B+"<<endl;
    }
    else if(per>60)
    {
        cout<<"Grade  :"<<"B"<<endl;
    }
    else if(per>50)
    {
        cout<<"Grade  :"<<"C"<<endl;
    }
    else if(per>45)
    {
        cout<<"Grade  :"<<"D"<<endl;
    }
    else
    {
        cout<<"Grade  :"<<"F"<<endl;
    }
    cout<<"Mobile Number:"<<ptr->b.mobile_no<<endl;
    cout<<"Email ID     :"<<ptr->b.email_id<<endl;
}


int main()
{
    short int N;

    cout<<"*************************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"*************************************************\n\n";
    cout<<"Enter Number of Students:";
    cin>>N;
    cout<<"-------------------------------------------------\n";
    student_data s[20];

    //PART C
    for(int i=0; i<N; i++)
    {
        cout<<"Student "<<i+1<<endl;
        cout<<"Enter Enrollment Number:";
        cin>>s[i].a.en;
        cout<<"Enter Student Name:";
        cin.ignore();
        getline(cin,s[i].a.sname);
        cout<<"Enter Branch:";
        cin>>s[i].a.branch;
        cout<<"Enter Semester:";
        cin>>s[i].a.sem;
        cout<<"Enter Percentage:";
        cin>>s[i].a.per;
        if(s[i].a.per>90)
        {
            cout<<"Grade  :"<<"A+"<<endl;
        }
        else if(s[i].a.per>80)
        {
            cout<<"Grade  :"<<"A"<<endl;
        }
        else if(s[i].a.per>70)
        {
            cout<<"Grade  :"<<"B+"<<endl;
        }
        else if(s[i].a.per>60)
        {
            cout<<"Grade  :"<<"B"<<endl;
        }
        else if(s[i].a.per>50)
        {
            cout<<"Grade  :"<<"C"<<endl;
        }
        else if(s[i].a.per>45)
        {
            cout<<"Grade  :"<<"D"<<endl;
        }
        else
        {
            cout<<"Grade  :"<<"F"<<endl;
        }
        cout<<"Enter Mobile Number:";
        cin>>s[i].b.mobile_no;
        cout<<"Enter Email ID:";
        cin>>s[i].b.email_id;
        cout<<"--------------------------------------------\n";
    }

    // Displaying all student records using pointers (Part D)
    cout << "\n\n=========================================\n";
    cout << "       STUDENT RECORDS REPORT             \n";
    cout << "=========================================\n";

    for (int i = 0; i < N; ++i)
    {
        cout << "\nRecord " << (i + 1) << ":\n";
        displayStudentData(&s[i]); // Passing address of structure
        cout << "-----------------------------------------\n";
    }

    cout<<"Press enter to exit the code\n";
    cin.ignore();
    cin.get();


    return 0;
}

