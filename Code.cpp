#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


string ID, name, depa[2];
void department()
{
    ifstream dep;
    dep.open("C:\\Users\\mikiy\\Desktop\\DEP.txt");
    if (dep)
    {
        for (int d = 0; d <= 1; d++)
        {
            dep >> depa[d];
        }
    }
}
void Grade()
{
       int i;
    //Asks the user to write number of subject.
    cout << "\nEnter the numbers of subjects:  ";
    cin >> i;
    

    const int num = 20;
    string grade[num];

    string Course_Name[num], Grade[num];

    double  Credit_Hour[num], Final_Grade[num];

    cout << "\n\n~~~~~~~~ Refer this for the course ID ~~~~~~~~\n\n";
    cout << "          1. Calculus I\n";
    cout << "          2. Fundamentals of Database\n";
    cout << "          3. General Physics\n";
    cout << "          4. Introduction to Statistics\n";
    cout << "          5. Fundamental of Programming I\n";
    cout << "          6. Introduction to Emerging Technology\n\n\n";
    int crdt;

    for (int k = 0; k < i; k++)
    {
        cout << "\nEnter subject " << k + 1 << " name:  ";
        cin >> Course_Name[k];

     /*  //This list helps us to get courses
        cout << "\n\n~~~~~~~~ Refer this for the course credit hours ~~~~~~~~\n\n";
        cout << "          1. Calculus ............................... 3 CrdHrs\n";
        cout << "          2. Database ............................... 4 CrdHrs\n";
        cout << "          3. Physics ................................ 3 CrdHrs\n";
        cout << "          4. Statistics ............................. 3 CrdHrs\n";
        cout << "          5. Programming I .......................... 3 CrdHrs\n";
        cout << "          6. Emerging Technology .................... 3 CrdHrs\n";
        */


        cout << "\nEnter credit hour:  ";
        cin >> Credit_Hour[k];

        cout << "\nEnter grade that you have scored:  ";
        cin >> Grade[k];
        
        crdt = Credit_Hour[k];
    
    }


    for (int j = 0; j < i; j++)
    {
        if (Grade[j] == "A+" || Grade[j] == "A")
        {
            Final_Grade[j] = Credit_Hour[j] * 4;
            cout << (Credit_Hour[j] * 4) << endl;
        }
        else if (Grade[j] == "A-" || Grade[j] == "a-")
        {
            Final_Grade[j] = Credit_Hour[j] * 3.75;
            cout << (Credit_Hour[j] * 3.75) << endl;
        }
        else if (Grade[j] == "B+" || Grade[j] == "b+")
        {
            Final_Grade[j] = Credit_Hour[j] * 3.5;
            cout << (Credit_Hour[j] * 3.5) << endl;
        }
        else if (Grade[j] == "B" || Grade[j] == "b")
        {
            Final_Grade[j] = Credit_Hour[j] * 3;
            cout << (Credit_Hour[j] * 3) << endl;
        }
        else if (Grade[j] == "B-" || Grade[j] == "b-")
        {
            Final_Grade[j] = Credit_Hour[j] * 2.75;
            cout << (Credit_Hour[j] * 2.75) << endl;
        }
        else if (Grade[j] == "C+" || Grade[j] == "c-")
        {
            Final_Grade[j] = Credit_Hour[j] * 2.5;
            cout << (Credit_Hour[j] * 2.5) << endl;
        }
        else if (Grade[j] == "C" || Grade[j] == "c")
        {
            Final_Grade[j] = Credit_Hour[j] * 2;
            cout << (Credit_Hour[j] * 2) << endl;
        }
        else if (Grade[j] == "C-" || Grade[j] == "c-")
        {
            Final_Grade[j] = Credit_Hour[j] * 1.75;
            cout << (Credit_Hour[j] * 1.75) << endl;
        }
        else if (Grade[j] == "D" || Grade[j] == "d")
        {
            Final_Grade[j] = Credit_Hour[j] * 1;
            cout << (Credit_Hour[j] * 1) << endl;
        }
        else if (Grade[j] == "F" || Grade[j] == "f")
        {
            Final_Grade[j] = Credit_Hour[j] * 0;
            cout << (Credit_Hour[j] * 0) << endl;
        }
    }

    double result = 0;
    double grd = 0;

    for (int j = 0; j < i; j++)
    {
        result = result + Credit_Hour[j];
        grd = grd + Final_Grade[j];
    }
    int nn = 1;

    cout << result << endl << endl;
    // cout << grd << endl << endl;

    double GPA = grd / result;
   // cout << GPA;
    for (int k = 0; k <= i; k++)
    {
        if (k == 0)
        {
            cout << left << setw(14) << "ID" << "|" << left << setw(10) << "NAME" << "|" << left << setw(3) << "DEPARTMENT" << "|" << left << setw(2) << "Number OF Subject"
                << "|" << left << setw(2) << "Subject Name" << "|" << left << setw(2) << "Creadit Hour" << "|" << left << setw(10) << "Grade" << "|" << left << setw(10) << "GPA" << endl;
        }
        else if (k == 1)
        {
            cout << left << setw(14) << ID << "|" << left << setw(10) << name << "|" << left << setw(3) << depa[0] << "|" << left << setw(2) << i 
                << left << setw(10) << Course_Name[k-1] << "|" << left << setw(10) << Credit_Hour[k-1] << "|" << left << setw(10) << Grade[k-1] << endl;
         }
        else

            cout << left << setw(2) << " " << "|" << left << setw(20) << " " << "|" << left << setw(10) << " " << "|" << left << setw(10) << " " << "|"
            << left << setw(10) << Course_Name[k-1] << "|" << left << setw(10) << Credit_Hour[k-1] << "|" << left << setw(10) << Grade[k-1] << endl;
    }

    cout << left << setw(14) << " " << "|" << left << setw(10) << " " << "|" << left << setw(2) << " " << "|" << left << setw(2) << " " << "|"
        << left << setw(2) << " " << "|" << left << setw(2) << " " << "|" << left << setw(2) << " " << "|" << left << setw(2) << GPA << endl;
}
void GradeBA()
{
    int i;
    //Asks the user to write number of subject.
    cout << "\nEnter the numbers of subjects:  ";
    cin >> i;

    const int num = 20;
    string grade[num];

    string Course_Name[num], Grade[num];

    double  Credit_Hour[num], Final_Grade[num];

    cout << "\n\n~~~~~~~~ Refer this for the course ID ~~~~~~~~\n\n";
    cout << "          1. Calculus I\n";
    cout << "          2. Fundamentals of Database\n";
    cout << "          3. General Physics\n";
    cout << "          4. Introduction to Statistics\n";
    cout << "          5. Fundamental of Programming I\n";
    cout << "          6. Introduction to Emerging Technology\n\n\n";

    for (int k = 0; k < i; k++)
    {
        cout << "\nEnter subject " << k + 1 << " name:  ";
        cin >> Course_Name[k];

        //This list helps us to get courses
        cout << "\n\n~~~~~~~~ Refer this for the course credit hours ~~~~~~~~\n\n";
        cout << "          1. Calculus ............................... 3 CrdHrs\n";
        cout << "          2. Database ............................... 4 CrdHrs\n";
        cout << "          3. Physics ................................ 3 CrdHrs\n";
        cout << "          4. Statistics ............................. 3 CrdHrs\n";
        cout << "          5. Programming I .......................... 3 CrdHrs\n";
        cout << "          6. Emerging Technology .................... 3 CrdHrs\n";



        cout << "\nEnter credit hour:  ";
        cin >> Credit_Hour[k];

        cout << "\nEnter grade that you have scored:  ";
        cin >> Grade[k];

    }

    for (int j = 0; j < i; j++)
    {
        if (Grade[j] == "A+" || Grade[j] == "A")
        {
            Final_Grade[j] = Credit_Hour[j] * 4;
            cout << (Credit_Hour[j] * 4) << endl;
        }
        else if (Grade[j] == "A-" || Grade[j] == "a-")
        {
            Final_Grade[j] = Credit_Hour[j] * 3.75;
            cout << (Credit_Hour[j] * 3.75) << endl;
        }
        else if (Grade[j] == "B+" || Grade[j] == "b+")
        {
            Final_Grade[j] = Credit_Hour[j] * 3.5;
            cout << (Credit_Hour[j] * 3.5) << endl;
        }
        else if (Grade[j] == "B" || Grade[j] == "b")
        {
            Final_Grade[j] = Credit_Hour[j] * 3;
            cout << (Credit_Hour[j] * 3) << endl;
        }
        else if (Grade[j] == "B-" || Grade[j] == "b-")
        {
            Final_Grade[j] = Credit_Hour[j] * 2.75;
            cout << (Credit_Hour[j] * 2.75) << endl;
        }
        else if (Grade[j] == "C+" || Grade[j] == "c-")
        {
            Final_Grade[j] = Credit_Hour[j] * 2.5;
            cout << (Credit_Hour[j] * 2.5) << endl;
        }
        else if (Grade[j] == "C" || Grade[j] == "c")
        {
            Final_Grade[j] = Credit_Hour[j] * 2;
            cout << (Credit_Hour[j] * 2) << endl;
        }
        else if (Grade[j] == "C-" || Grade[j] == "c-")
        {
            Final_Grade[j] = Credit_Hour[j] * 1.75;
            cout << (Credit_Hour[j] * 1.75) << endl;
        }
        else if (Grade[j] == "D" || Grade[j] == "d")
        {
            Final_Grade[j] = Credit_Hour[j] * 1;
            cout << (Credit_Hour[j] * 1) << endl;
        }
        else if (Grade[j] == "F" || Grade[j] == "f")
        {
            Final_Grade[j] = Credit_Hour[j] * 0;
            cout << (Credit_Hour[j] * 0) << endl;
        }
    }

    double result = 0;
    double grd = 0;

    for (int j = 0; j < i; j++)
    {
        result = result + Credit_Hour[j];
        grd = grd + Final_Grade[j];
    }

    cout << result << endl << endl;
    cout << grd << endl << endl;

    cout << grd / result;
}
void student_login()
{
    string CheckID[18], First_Name[18];
    string stuid, depart;

    cout << "Enter your ID number:  ";
    cin >> ID;
    cout << "\nEnter your First name:  ";
    cin >> name;
    cout << "Enter your Department: ";
    cin >> depart;



    ifstream check;
    check.open("C:\\Users\\mikiy\\Desktop\\ID_Num.txt");
    if (check)
    {
        fstream check;
        check.open("C:\\Users\\mikiy\\Desktop\\ID_Num.txt");
        if (check)
        {
            for (int count = 0; count <= 17; count++)
            {
                check >> CheckID[count] >> First_Name[count];
            }
            int role;

            if
                ((CheckID[0] == ID && First_Name[0] == name) ||
                    (CheckID[1] == ID && First_Name[1] == name) ||
                    (CheckID[2] == ID && First_Name[2] == name) ||
                    (CheckID[3] == ID && First_Name[3] == name) ||
                    (CheckID[4] == ID && First_Name[4] == name) ||
                    (CheckID[5] == ID && First_Name[5] == name) ||
                    (CheckID[6] == ID && First_Name[6] == name) ||
                    (CheckID[7] == ID && First_Name[7] == name) ||
                    (CheckID[8] == ID && First_Name[8] == name) ||
                    (CheckID[9] == ID && First_Name[9] == name) ||
                    (CheckID[10] == ID && First_Name[10] == name) ||
                    (CheckID[11] == ID && First_Name[11] == name) ||
                    (CheckID[12] == ID && First_Name[12] == name) ||
                    (CheckID[13] == ID && First_Name[13] == name) ||
                    (CheckID[14] == ID && First_Name[14] == name) ||
                    (CheckID[15] == ID && First_Name[15] == name) ||
                    (CheckID[16] == ID && First_Name[16] == name) ||
                    (CheckID[17] == ID && First_Name[17] == name))

            { 
                department();
                if (depart == depa[0])  // for computer science 
                {
                    
                    Grade();
                }
                else if (depart == depa[1])   // for business administration 
                {
                    GradeBA();
                }
            }
            else {
                cout << "Incorrect Name or ID ";
            }
        }

    }
}
int main()
    {
 
   

        cout << "\n======================================================================\n";
        cout << "==                                                                  ==\n";
        cout << "==            Welcome to American College of Technology             ==\n";
        cout << "==                                                                  ==\n";
        cout << "======================================================================\n\n";
     
        student_login();

        /*//Asks the user to write his/her first name.
        cout << "\nEnter your First name:  ";
        cin >> name;
        */


        return 0;
    }
