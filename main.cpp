////////////////////////////////////////////////////
//Staff Management project Part 1-Serouj Djabraian//
////////////////////////////////////////////////////

#include <iostream>
#include <cstdlib>
using namespace std;

class Employee          //Template class for the other 3 classes
{
protected:
    string first_name;
    string last_name;
    unsigned short int day;
    unsigned short int month;
    unsigned short int year;
    unsigned short int age;
    int holidays_taken;
    int holidays_remaining;
    string holiday_date;
    string date_array[32];
public:
    Employee():first_name(),last_name(),year(),age(),holidays_taken(),holidays_remaining(),holiday_date(){};
    void assignHolidays();
};

void Employee::assignHolidays()         //assign number of holidays depending on the age
{
    age=2020-year;
    if (age>=50)
    {
        holidays_remaining=32;
    }
        else holidays_remaining=30;
}

class HourlyEmployee: public Employee   //class for employees with an hourly rate
{
private:
    unsigned short int hourly_wage;
    unsigned short int hours_worked;
    bool foundemployee;
public:
    HourlyEmployee():Employee(),hourly_wage(),hours_worked(){};
    void enterData();
    void showData();
    void findEmployee(string,string);
    bool foundEmployee();
    void resetIt();
    void takeHoliday(int);
    void showHolidays(int);
};

void HourlyEmployee::enterData()    //prompts data from the user
{
    cout<<"--Hourly Employee--"<<endl;
    cout<<"First name: ";
    cin>>first_name;
    cout<<"Last name: ";
    cin>>last_name;
    cout<<"What is the date of birth?"<<endl;
    cout<<"Day: ";
    cin>>day;
    cout<<"Month: ";
    cin>>month;
    cout<<"Year: ";
    cin>>year;
    cout<<"Hourly wage: ";
    cin>>hourly_wage;
    cout<<"Hours worked: ";
    cin>>hours_worked;
}

void HourlyEmployee::showData()     //shows data to the user from the class HourlyEmployee
{
    cout<<first_name<<" "<<last_name<<" --> "<<"\t"<<"age: "<<age<<" | hourly wage: "<<hourly_wage<<" | hours worked: "<<hours_worked;
    cout<<" | remaining holidays: "<<holidays_remaining<<endl<<endl;
}

void HourlyEmployee::findEmployee(string f,string l)    //Check if the employee exists
{
    if (f==first_name && l==last_name)
    {
        foundemployee=true;
    }
}

bool HourlyEmployee::foundEmployee()                //Check if the employee exists
{
    return foundemployee;
}

void HourlyEmployee::resetIt()                 //Check if the employee exists
{
    foundemployee=false;
}

void HourlyEmployee::takeHoliday(int hdaycounter)       //Assign a holiday to the chosen employee
{

    cout<<"Please Choose a Holiday (dd/mm/yyyy): ";
    cin>>holiday_date;
    date_array[hdaycounter]=holiday_date;
    holidays_taken++;
    holidays_remaining--;
}

void HourlyEmployee::showHolidays(int hdaycounter)         //Show data for the chosen employee
{
    cout<<endl<<first_name<<" "<<last_name<<" --> "<<"\t"<<"age: "<<age<<" | hourly wage: "<<hourly_wage<<" | hours worked: "<<hours_worked;
    cout<<" | remaining holidays: "<<holidays_remaining<<endl<<endl;
    cout<<first_name<<" "<<last_name<<" has taken the following holidays(dd/mm/yyyy):"<<endl;
    for (int i=0;i<hdaycounter;i++)
    {
        cout<<"["<<i+1<<"] "<<date_array[i]<<endl;
    }
}

class SalariedEmployee : public Employee        //class for an employee with a salary
{
private:
    unsigned int annual_salary;
    bool foundemployee;
public:
    SalariedEmployee():Employee(),annual_salary(){};
    void enterData();
    void showData();
    void findEmployee(string,string);
    bool foundEmployee();
    void resetIt();
    void takeHoliday(int);
    void showHolidays(int);
};

void SalariedEmployee::enterData()          //Enter data for an employee type salaried
{
    cout<<"--Salaried Employee--"<<endl;
    cout<<"First name: ";
    cin>>first_name;
    cout<<"Last name: ";
    cin>>last_name;
    cout<<"What is the date of birth?"<<endl;
    cout<<"Day: ";
    cin>>day;
    cout<<"Month: ";
    cin>>month;
    cout<<"Year: ";
    cin>>year;
    cout<<"Annual salary: ";
    cin>>annual_salary;
}

void SalariedEmployee::showData()           //Show data of an employee type salaried
{
    cout<<first_name<<" "<<last_name<<" --> "<<"\t"<<"age: "<<age<<" | annual salary: "<<annual_salary;
    cout<<" | remaining holidays: "<<holidays_remaining<<endl<<endl;
}

void SalariedEmployee::findEmployee(string f,string l)
{
    if (f==first_name && l==last_name)
    {
        foundemployee=true;
    }
}

bool SalariedEmployee::foundEmployee()
{
    return foundemployee;
}

void SalariedEmployee::resetIt()
{
    foundemployee=false;
}

void SalariedEmployee::takeHoliday(int hdaycounter)
{

    cout<<"Please Choose a Holiday (dd/mm/yyyy): ";
    cin>>holiday_date;
    date_array[hdaycounter]=holiday_date;
    holidays_taken++;
    holidays_remaining--;
}

void SalariedEmployee::showHolidays(int hdaycounter)
{
    cout<<endl<<first_name<<" "<<last_name<<" --> "<<"\t"<<"age: "<<age<<" | annual salary: "<<annual_salary;
    cout<<" | remaining holidays: "<<holidays_remaining<<endl<<endl;
    cout<<first_name<<" "<<last_name<<" has taken the following holidays(dd/mm/yyyy):"<<endl;
    for (int i=0;i<hdaycounter;i++)
    {
        cout<<"["<<i+1<<"] "<<date_array[i]<<endl;
    }
}

class Manager : public Employee         //class for a manager type
{
private:
    unsigned int profit_sharing;
    bool foundemployee;
public:
    Manager():Employee(),profit_sharing(){};
    void enterData();
    void showData();
    void findEmployee(string,string);
    bool foundEmployee();
    void resetIt();
    void takeHoliday(int);
    void showHolidays(int);
};

void Manager::enterData()
{
    cout<<"--Manager--"<<endl;
    cout<<"First name: ";
    cin>>first_name;
    cout<<"Last name: ";
    cin>>last_name;
    cout<<"What is the date of birth?"<<endl;
    cout<<"Day: ";
    cin>>day;
    cout<<"Month: ";
    cin>>month;
    cout<<"Year: ";
    cin>>year;
    cout<<"Profit sharing: ";
    cin>>profit_sharing;
}

void Manager::showData()
{
    cout<<first_name<<" "<<last_name<<" --> "<<"\t"<<"age: "<<age<<" | profit sharing: "<<profit_sharing;
    cout<<" | remaining holidays: "<<holidays_remaining<<endl<<endl;
}

void Manager::findEmployee(string f,string l)
{
    if (f==first_name && l==last_name)
    {
        foundemployee=true;
    }
}

bool Manager::foundEmployee()
{
    return foundemployee;
}

void Manager::resetIt()
{
    foundemployee=false;
}

void Manager::takeHoliday(int hdaycounter)
{

    cout<<"Please Choose a Holiday (dd/mm/yyyy): ";
    cin>>holiday_date;
    date_array[hdaycounter]=holiday_date;
    holidays_taken++;
    holidays_remaining--;
}

void Manager::showHolidays(int hdaycounter)
{
    cout<<endl<<first_name<<" "<<last_name<<" --> "<<"\t"<<"age: "<<age<<" | profit sharing: "<<profit_sharing;
    cout<<" | remaining holidays: "<<holidays_remaining<<endl<<endl;
    cout<<first_name<<" "<<last_name<<" has taken the following holidays(dd/mm/yyyy):"<<endl;
    for (int i=0;i<hdaycounter;i++)
    {
        cout<<"["<<i+1<<"] "<<date_array[i]<<endl;
    }
}

int main()
{
    int i=0,j=0,k=0, select1, select2;         //select1 for menu navigation, select2 for employee type selection
    int ijk=0;                                 //variable which keeps the total number of employees up to a max
    int holidaycounter1=0;
    int holidaycounter2=0;
    int holidaycounter3=0;
    int maxemployeecapacity=500;               //max number of employees allowed to be created

    HourlyEmployee he[500];                    //You can store a max of 500 employees in each array but
    SalariedEmployee se[500];                  //without the max number which is capped at 500 employees
    Manager m[500];


    do{
        system("cls");
        cout<<"---Welcome to the Staff Management System---"<<endl<<endl;
        cout<<"Please choose one of the options below: "<<endl<<endl;
        cout<<"[1] "<<"Create an employee"<<endl;
        cout<<"[2] "<<"Delete an employee (By name)"<<endl;
        cout<<"[3] "<<"Choose an employee's holidays (By name)"<<endl;
        cout<<"[4] "<<"Show an employee's data (By name)"<<endl;
        cout<<"[5] "<<"List of all employee data"<<endl;
        cout<<"[0] "<<"End the program"<<endl<<endl;
        cout<<"Your selection: ";
        cin>>select1;
        switch(select1)
        {
        case 1:                         //You can choose the class array that you want to create your employee in
            {
                ijk=i+j+k;
                system("cls");
                cout<<"What is the type of the employee?"<<endl<<endl;
                cout<<"[1] "<<"Hourly employee"<<endl;
                cout<<"[2] "<<"Salaried employee"<<endl;
                cout<<"[3] "<<"Manager"<<endl<<endl;
                cout<<"Your selection: ";
                cin>>select2;
                switch(select2)
                {
                    case 1:                     //For an HourlyEmployee
                        {
                            if (ijk<maxemployeecapacity)
                            {
                                system("cls");
                                he[i].enterData();
                                he[i].assignHolidays();
                                i++;
                                break;
                            }
                            else cout<<"-->Max number of employees reached!"<<endl;
                            system("pause");
                            break;
                        }
                    case 2:                     //For a SalariedEmployee
                        {
                            if (ijk<maxemployeecapacity)
                            {
                                system("cls");
                                se[j].enterData();
                                se[j].assignHolidays();
                                j++;
                                break;
                            }
                            else cout<<"-->Max number of employees reached!"<<endl;
                            system("pause");
                            break;
                        }
                    case 3:                     //For a manager
                        {
                            if (ijk<maxemployeecapacity)
                            {
                                system("cls");
                                m[k].enterData();
                                m[k].assignHolidays();
                                k++;
                                break;
                            }
                            else cout<<"-->Max number of employees reached!"<<endl;
                            system("pause");
                            break;
                        }
                    default:
                        {
                            system("cls");
                            cout<<"Incorrect input!"<<endl<<endl;
                            system("pause");
                        }
                }
                break;
            }
        case 2:                     //delete an employee of any type by typing his first and last names
            {
                bool checkemployee=false;
                string first_name;
                string last_name;
                system("cls");
                cout<<"Enter the first name of the employee: ";
                cin>>first_name;
                cout<<"Enter the last name of the employee: ";
                cin>>last_name;
                for (int p=0;p<i;p++)
                {
                    he[p].findEmployee(first_name,last_name);
                    se[p].findEmployee(first_name,last_name);
                    m[p].findEmployee(first_name,last_name);

                    if (he[p].foundEmployee()==true)            //search in HourlyEmployee array
                    {
                        he[p]=he[i-1];                          //used to get rid of the zero elements from
                        he[i-1]=HourlyEmployee();               //the delete object and replace them with newer data
                        he[p].resetIt();
                        cout<<"-->Employee has been deleted."<<endl;
                        i=i-1;
                        checkemployee=true;
                        break;
                    }
                    else if (se[p].foundEmployee()==true)       //search in SalariedEmployee array
                    {
                        se[p]=se[j-1];
                        se[j-1]=SalariedEmployee();
                        se[p].resetIt();
                        cout<<"-->Employee has been deleted."<<endl;
                        j=j-1;
                        checkemployee=true;
                        break;
                    }
                    else if (m[p].foundEmployee()==true)        //search in manager array
                    {
                        m[p]=m[k-1];
                        m[k-1]=Manager();
                        m[p].resetIt();
                        cout<<"-->Employee has been deleted."<<endl;
                        k=k-1;
                        checkemployee=true;
                        break;
                    }

                }
                if (checkemployee==false)               //If the input name is wrong or does not match
                {
                    cout<<endl<<"-->Employee does not exist!"<<endl;
                }
                system("pause");
                break;
            }

        case 3:                            //Choose the holidays of an employee by searching his name (multiple times)
            {
                bool checkemployee=false;
                string fn;
                string ln;
                system("cls");
                cout<<"Enter the first name of the employee: ";
                cin>>fn;
                cout<<"Enter the last name of the employee: ";
                cin>>ln;
                for (int s=0;s<i;s++)
                {
                    he[s].findEmployee(fn,ln);
                    se[s].findEmployee(fn,ln);
                    m[s].findEmployee(fn,ln);
                    if (he[s].foundEmployee()==true)
                    {
                        he[s].takeHoliday(holidaycounter1);
                        he[s].resetIt();
                        holidaycounter1++;
                        checkemployee=true;
                        cout<<"-->Holiday taken!"<<endl;
                        break;
                    }
                    else if (se[s].foundEmployee()==true)
                    {
                        se[s].takeHoliday(holidaycounter2);
                        se[s].resetIt();
                        holidaycounter2++;
                        checkemployee=true;
                        cout<<"-->Holiday taken!"<<endl;
                        break;
                    }
                    else if (m[s].foundEmployee()==true)
                    {
                        m[s].takeHoliday(holidaycounter3);
                        m[s].resetIt();
                        holidaycounter3++;
                        checkemployee=true;
                        cout<<"-->Holiday taken!"<<endl;
                        break;
                    }
                }
                if (checkemployee==false)
                {
                    cout<<endl<<"-->Employee does not exist!"<<endl;
                }
                system("pause");
                break;
                system("pause");
                break;
            }

        case 4:                             //Show the data of a single employee by typing his first and last name
            {
                bool checkemployee=false;
                string f_n;
                string l_n;
                system("cls");
                cout<<"Enter the first name of the employee: ";
                cin>>f_n;
                cout<<"Enter the last name of the employee: ";
                cin>>l_n;
                for (int ss=0;ss<i;ss++)
                {
                    he[ss].findEmployee(f_n,l_n);
                    se[ss].findEmployee(f_n,l_n);
                    m[ss].findEmployee(f_n,l_n);
                    if (he[ss].foundEmployee()==true)
                    {
                        he[ss].resetIt();
                        he[ss].showHolidays(holidaycounter1);
                        checkemployee=true;
                        break;
                    }
                    else if (se[ss].foundEmployee()==true)
                    {
                        se[ss].resetIt();
                        se[ss].showHolidays(holidaycounter2);
                        checkemployee=true;
                        break;
                    }
                    else if (m[ss].foundEmployee()==true)
                    {
                        m[ss].resetIt();
                        m[ss].showHolidays(holidaycounter3);
                        checkemployee=true;
                        break;
                    }
                }
                if (checkemployee==false)
                {
                    cout<<endl<<"-->Employee does not exist!"<<endl;
                }
                system("pause");
                break;

            }
        case 5:                               //Show all important data of all employees
            {
                system("cls");
                for(int q=0;q<i;q++)
                {
                      he[q].showData();
                }
                for(int qq=0;qq<j;qq++)
                {
                      se[qq].showData();
                }
                for(int qqq=0;qqq<k;qqq++)
                {
                      m[qqq].showData();
                }
            system("pause");
            break;
            }
        case 0:
            {
                system("cls");
                cout<<"Bye Have a nice day!"<<endl;
                break;
            }
        default:
            {
                system("cls");
                cout<<"Incorrect input!"<<endl<<endl;
                system("pause");
            }
        }
    }while(select1!=0);
}

