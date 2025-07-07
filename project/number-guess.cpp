#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
void next()
{
    cout<<"\nPress enter for next trail.......";
    cin.ignore();
    cin.get();
}
void header()
{
    for(int i=1 ; i<125;i++)
    {
        cout<<"=";
    }
    cout<<"\n                                            -------->  NUMBER GUESS GAME <--------      \n";
    
    for(int i=1 ; i<125;i++)
    {
        cout<<"=";
    }
}

int input()
{   
    int number;
    cout << "\n\nGuess number between 1 to 100 : ";
    cin >> number;
    return number;
}

void guess(int random1, int &count)
{
    int input1;

    do {
        system("clear");
        header();
        input1 = input();
        count++;

        if (input1 > random1)
        {
            cout << "\nRandom number is smaller than your guess.\n";
            next();
        }
        else if (input1 < random1)
        {
            cout << "\nRandom number is greater than your guess.\n";
            next();
        }
        else
        {
            cout << "\nWell done!\nCorrect Guess!";
            cout << "\nYour score (number of attempts): " << count << endl<<endl;
        }
    } 
    while (input1 != random1);
}

int main()
{   
    system("clear");
    int count = 0, random;
    srand(time(0)); 
    random = (rand() % 100) + 1; 
    guess(random, count);
    return 0;
}
