#include<iostream>
#include<cstdlib>
//#include<ctime>
using namespace std;
class GuessTheNumber{
    private:
    int computerGeneratedNumber;
    int userGuessedNumber;
    int attempts=1;
    public:
    void generateRendomNumber(){
        srand(101);
         computerGeneratedNumber = rand() % 101;
       // cout<< computerGeneratedNumber<<endl;
    }
    void startGame(){
       // int attempts=0;
        while(true){

        cout<<"Guess the number:"<<endl;
        cin>>userGuessedNumber;
        cout<<"Attempt: "<<attempts<<endl;
        if(computerGeneratedNumber>userGuessedNumber){
             
             //cout<<"Attempts:"<<attempts<<endl;
            cout<<"Guessed number is smaller than computer generated number"<<endl;
            attempts++;}
            else if(computerGeneratedNumber<userGuessedNumber){
                // cout<<"Attempts:"<<attempts<<endl;
                cout<<"Guessed number is greater than computer generated number"<<endl;
                attempts++;
            }
            else if(computerGeneratedNumber==userGuessedNumber){
                 //cout<<"Attempts:"<<attempts<<endl;
                cout<<"Congratulation you won the game in "<<attempts<<" attempts"<<endl;
                break;
            }
        }
    }

    
};
int main(){
    GuessTheNumber obj;
    obj.generateRendomNumber();
    obj.startGame();
    return 0;
}