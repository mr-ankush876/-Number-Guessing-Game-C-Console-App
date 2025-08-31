# -Number-Guessing-Game-C-Console-App
A fun and interactive console-based number guessing game written in C++. This beginner-friendly project demonstrates the use of random number generation, loops, and conditional logic to create a simple yet engaging experience.
Absolutely! Here's a polished and engaging GitHub-style README description for your **Number Guessing Game** project:

---



## 🕹️ How It Works

The program randomly selects a number between **1 and 100**. The user is prompted to guess the number, and the program provides feedback:
- **"Too low"** if the guess is less than the target
- **"Too high"** if the guess is greater than the target

The loop continues until the user guesses the correct number, at which point a congratulatory message is displayed.

## 📦 Features

- 🎲 Random number generation using `rand()` and `time(0)`
- 🔁 Continuous guessing loop until the correct number is guessed
- 💬 Real-time feedback on each guess
- 🧠 Simple logic for learning control structures in C++

## 🧪 Sample Output

```
guess the number between one and two digit :
50
too low
guess the number between one and two digit :
75
too high
guess the number between one and two digit :
63
congratulations you guessed the correct number
```

## 🛠️ Code Highlights

```cpp
srand(time(0)); // Seeds the random number generator
int randomnumber = rand() % 100 + 1; // Generates a number between 1 and 100
```

> ⚠️ Note: The line `int srand((time(0)));` should be corrected to `srand(time(0));` — `srand` is a function, not a variable declaration.

## ✅ Improvements You Can Make

- Add input validation to handle non-integer inputs
- Track the number of attempts and display it at the end
- Allow the user to play again without restarting the program
- Add difficulty levels (e.g., easy: 1–50, hard: 1–500)

## 📚 Requirements

- C++11 or later
- Any standard C++ compiler (e.g., g++, clang)

## 👨‍💻 Author

This project is a great starting point for anyone learning C++ and looking to build interactive console applications. Feel free to fork, modify, and enhance it!

---


