#include<iostream>
using namespace std;
void introMenu();
void mainMenu();
void start();
void login();
void createAcccount();
void deposit(double& balance);
void withdraw(double& balance);
void request(double& balance);
int main(){
    start();
    return 0;
}

   
    void introMenu() {
      
        cout<<"Please select an option from the menu below:"<<endl;
        cout<<"l -> Login"<<endl;
        cout<<"c -> Create new account"<<endl;
        cout<<"q -> Quit"<<endl;
        cout<<"> ";

    }
    void mainMenu(){
        cout<<"Access Granted!"<<endl;
        cout<<"d -> Deposit Money"<<endl;
        cout<<"w -> Withdraw Money"<<endl;
        cout<<"r -> Request Balance"<<endl;
        cout<<"> ";
    }


    void start(){
      cout<<"Hi!Welcome to your bank account"<<endl;
      introMenu();
      char option;
      
      cin>>option;
      switch(option){
        case 'l':
        login();
        break;
        case 'c':
        createAcccount();
        break;
        case 'q':
        exit(0);
        break;
        default:
        cout<<"**********LOGIN FAILED**********"<<endl;
        start();
        break;
      }
    }

    void login(){
        cout<<"Please enter your ID "<<endl;
        int userId;
        cin>>userId;
        cout<<"Please enter your ID password"<<endl;
        int password;
        cin>>password;
        if(userId<=55555&&password<=55555){
           mainMenu();
           char choice;
           double balance=300;
           cin>>choice;
           switch(choice){
            case 'd':
            deposit(balance);
            break;
            case 'w':
            withdraw(balance);
            break;
            case 'r':
            request(balance);
            break;
            default:
            cout<<"Invalid option! Please try again."<<endl;
            mainMenu();
            break;
           }
            
        }
        else{
            cout<<"Enter the right Id and Password"<<endl;
            login();
        }

        
    }

    void deposit(double& balance){
        cout<<"Amount of deposit:";
        
        double amount;
        
        cin>>amount;
        balance += amount;
          cout<<"Your balance is:"<<balance<<endl;
        
        withdraw(balance);
        request(balance);
    }

    void withdraw(double& balance){
        
        cout<<"Amount withdrawl:";
        double amount;
        
        cin>>amount;
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;
            

        }
        else{
            balance -= amount;
           cout<<"Your balance is:"<<balance<<endl;

        }

    }

    void request(double& balance){
        cout<<"Your balance is:"<<balance<<endl;
    }

    void createAcccount(){
        cout<<"Please enter your user ID"<<endl;
        int userId;
        cin>>userId;
        cout<<"Please enter your ID password"<<endl;
        int password;
        cin>>password;
        cout<<"Thank You! Your account has been created!"<<endl;
    }
   
