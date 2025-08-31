//NUMBER GUESSING GAME
//create a program that generate a  random numberand asks the user to guess it. provide feedback on whether the guess is too high or too low until the user guesses the correct number
     #include<iostream>
     #include<ctime>
     using namespace std;
     int main(){
    
           int srand((time(0)));
     int randomnumber = rand() % 100 + 1;
     int guess;
      
     cout << "guess the number between one and two digit : " << endl;
     cin >> guess;
       while (guess != randomnumber)
           {
               if (guess < randomnumber)
                 {
                   cout << "too low" << endl;
                 }
                 else
                 {
                   cout << "too high" << endl;
                 }
                 cout << "guess the number between one and two digit : " << endl;
                 cin >> guess;
               }
               cout << "congratulations you guessed the correct number" << endl;    
            }
