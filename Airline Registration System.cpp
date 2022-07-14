#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;
void mainMenu();

class Management
{
public:
    Management()
    {
        mainMenu();
    }

};

class Details
{
public:
    static string name,gender;
    int phone;
    int age;
    string address;
    static int id;
    char arr[100];

    void information()
    {
        cout<<"\n Enter customer ID:";
        cin>>id;
        cout<<"\n Enter your first name:";
        cin>>name;
        cout<<"\n Enter the age:";
        cin>>age;
        cout<<"\n Gender:";
        cin>>gender;
        cout<<"\n Address:";
        cin>>address;
        cout<<"Your details are saved with us, thank you."<<endl;
    }
};

int Details::id;
string Details::name;
string Details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    int bck;
    static float charges;

    void flight()
    {

        string flightN[]={"Dubai","Canada","USA","UK", "Australia"};

        for(int a=0;a<5;a++)
        {

            cout<<(a+1)<<" Flight to "<<flightN[a]<<endl;
        }

    cout<<"\n Welcome to the Airlines"<<endl;
    cout<<"Please enter number of the country of which you want to book the flight ";

    cin>>choice;
    switch(choice)
    {

     case 1:{ cout<<"__________Welcome to Dubai Etihad________\n"<<endl;
                cout<<"Enjoy the journey \n"<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1,DUB-414"<<endl;
                cout<<"\t15-07-2022 9:00 AM 12hrs Rs.13999"<<endl;
                cout<<"2,DUB-232"<<endl;
                cout<<"\t17-07-2022 7:00 AM 12hrs Rs.11999"<<endl;
                cout<<"3,DUB-411"<<endl;
                cout<<"\t19-07-2022 10:00 AM 12hrs Rs.10999"<<endl;

                cout<<"\n Select flight to book";
                cin>>choice1;
                if(choice1==1)
                {
                    charges=13999;
                    cout<<"\n Flight DUB-414 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }
                else
                if(choice1==2)
                {
                    charges=11999;
                    cout<<"\n Flight DUB-232 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }
                else
                if(choice1==3)
                {
                    charges=10999;
                    cout<<"\n Flight DUB-411 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }
                else{
                    cout<<"Invalid Input, shifting to previous menu"<<endl;
                    flight();
                }
                cout<<"press any key to go back to main menu"<<endl;
                cin>>bck;
                mainMenu();
                break;
    }
     case 2:{ cout<<"__________Welcome to Fly Canada________\n"<<endl;
                cout<<"enjoy the journey "<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1,CND-414"<<endl;
                cout<<"\t15-07-2022 9:00 PM 19hrs Rs.24999"<<endl;
                cout<<"2,CND-232"<<endl;
                cout<<"\t17-07-2022 6:00 AM 19hrs Rs.21999"<<endl;
                cout<<"3,CND-411"<<endl;
                cout<<"\t19-07-2022 11:00 PM 19hrs Rs.20999"<<endl;

                cout<<"\n Select flight to book";
                cin>>choice1;
                if(choice1==1)
                {
                    charges=24999;
                    cout<<"\n Flight CND-414 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }
                else
                if(choice1==2)
                {
                    charges=21999;
                    cout<<"\n Flight CND-232 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }
                else
                if(choice1==3)
                {
                    charges=20999;
                    cout<<"\n Flight CND-411 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }
                else{
                    cout<<"Invalid Input, shifting to previous menu"<<endl;
                    flight();
                }
                cout<<"press any key to go back to main menu"<<endl;
                cin>>bck;
                mainMenu();
                break;
    }
     case 3:{ cout<<"__________Welcome to American Airlines________\n"<<endl;
                cout<<"enjoy the journey "<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1,US-222"<<endl;
                cout<<"\t15-07-2022 9:00 PM 22hrs Rs.30229"<<endl;
                cout<<"2,US-232"<<endl;
                cout<<"\t17-07-2022 6:00 PM 22hrs Rs.31999"<<endl;
                cout<<"3,US-410"<<endl;
                cout<<"\t19-07-2022 7:00 PM 22hrs Rs.33999"<<endl;

                cout<<"\n Select flight to book";
                cin>>choice1;
                if(choice1==1)
                {
                    charges=30229;
                    cout<<"\n Flight US-222 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }
                else
                if(choice1==2)
                {
                    charges=31999;
                    cout<<"\n Flight US-232 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }
                else
                if(choice1==3)
                {
                    charges=33999;
                    cout<<"\n Flight US-410 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }
                else{
                    cout<<"Invalid Input, shifting to previous menu"<<endl;
                    flight();
                }
                cout<<"press any key to go back to main menu"<<endl;
                cin>>bck;
                mainMenu();
                break;
    }
    case 4:{ cout<<"__________Welcome to UK Airways________\n"<<endl;
                cout<<"enjoy the journey "<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1,UK-122"<<endl;
                cout<<"\t15-07-2022 9:00 PM 14hrs Rs.42000"<<endl;
                cout<<"2,UK-132"<<endl;
                cout<<"\t15-07-2022 6:00 PM 14hrs Rs.37000"<<endl;
                cout<<"\n Select flight to book";
                cin>>choice1;
                if(choice1==1)
                {
                    charges=42000;
                    cout<<"\n Flight UK-122 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }
                else
                if(choice1==2)
                {
                    charges=37000;
                    cout<<"\n Flight UK-132 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }

                else{
                    cout<<"Invalid Input, shifting to previous menu"<<endl;
                    flight();
                }
                cout<<"press any key to go back to main menu"<<endl;
                cin>>bck;
                mainMenu();
                break;
    }
    case 5:{ cout<<"__________Welcome to Fly Australia________\n"<<endl;
                cout<<"enjoy the journey "<<endl;
                cout<<"Following are the flights \n"<<endl;
                cout<<"1,AUS-042"<<endl;
                cout<<"\t13-07-2022 9:00 PM 13hrs Rs.40000"<<endl;
                cin>>choice1;
                if(choice1==1)
                {
                    charges=40000;
                    cout<<"\n Flight AUS-042 successfully booked"<<endl;
                    cout<<"You can go back to menu to get the ticket"<<endl;
                }

                else{
                    cout<<"Invalid Input, shifting to previous menu"<<endl;
                    flight();
                }
                cout<<"press any key to go back to main menu"<<endl;
                cin>>bck;
                mainMenu();
                break;
    }
    default:
        {
            cout<<"Invalid Input , Going to the main menu"<<endl;
            mainMenu();
            break;
        }

    }

    }
};
float registration::charges;
int registration::choice;

class ticket : public registration, Details
{

public:

    void Bill()
    {
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"________________Fly My Trip______________"<<endl;
            outf<<"_________________Ticket___________________"<<endl;
            outf<<"__________________________________________"<<endl;

            outf<<"Customer ID:"<<Details::id<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:\n\n"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if(registration::choice==1)
            destination="Dubai";

            else if(registration::choice==2)
            destination="Canada";

            else if(registration::choice==3)
            destination="USA";

            else if(registration::choice==4)
            destination="UK";

            else if(registration::choice==5)
            destination="Australia ";

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight price:\t\t"<<registration::charges<<endl;

        }
        outf.close();
    }

    void displayBill()
    {
        ifstream ifs("records.txt");
        {

            if(!ifs)
            {
                cout<<"file error"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{

    int lchoice;
    int schoice;
    int bck;

    cout<<"\t         Fly My Trip\n"<<endl;
    cout<<"\t__________Main Menu________"<<endl;

    cout<<"\t_____________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;

    cout<<"\tPress 1 to add customer details \t"<<endl;
    cout<<"\tPress 2 for flight registration \t"<<endl;
    cout<<"\tPress 3 for tickets and charges \t"<<endl;
    cout<<"\tPress 4 to exit \t"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;

    cout<<"Enter the choice ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
    case 1:
        {
            cout<<"_______________Customers_____________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to main menu";
            cin>>bck;

            mainMenu();
            break;
        }
    case 2:
        {
            cout<<"____________Book flight using the system_________\n"<<endl;
            r.flight();
            break;
        }
    case 3:
        {
            cout<<"_________Get your ticket_______"<<endl;
            t.Bill();
            cout<<"your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display ticket";

            cin>>bck;
            if(bck==1)
            {

                t.displayBill();
                cout<<"press any key to go back to main menu";
                cin>>bck;
                 mainMenu();

            }

            break;
        }
    case 4:
        {
            cout<<"\n\n\t__________Thank You__________"<<endl;
            break;
        }
    default:
        {
            cout<<"Invalid Input, Please Try Again"<<endl;
            mainMenu();
            break;
        }

    }
}

int main()
{
    Management Mobj;
    return 0;
}
