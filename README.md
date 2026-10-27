# C++ Problem Solving – Level 1

Solutions to 50 beginner-level problem solving challenges, written in C++ with a focus on **clean, readable code**.

---

## About

Each solution is a single `.cpp` file. The goal is not just to solve the problem, but to write code that is easy to read and maintain.

---

## Project Structure

```
Problem-Solving-Level-1/
├── README.md
├── .gitignore
└── Problems/
    ├── Problem_01.cpp
    ├── Problem_02.cpp
    ├── ...
    └── Problem_50.cpp
```

---

## Clean Code Principles Applied

- **Meaningful names** for functions and variables
- **Small functions** that do one thing (`ReadNumber`, `SumNumbers`, `Login`)
- **No logic inside `main`**, it only calls functions
- **Reusable helper functions** for input and output
- **Comments** to state the idea of each problem

---

## Example

A small function with a single responsibility, called from a clean `main`:

```cpp
bool Login() {
    string Pincode;
    int counter = 3;

    do {
        counter--;
        Pincode = ReadPinCode();

        if (Pincode == "1234")
            return true;

        cout << "\nWrong PIN, you have: " << counter << " more tries" << endl;
    } while (counter >= 1);

    return false;
}

int main() {
    if (Login())
        cout << "\nYour account balance is: " << 7500 << endl;
    else
        cout << "\nYour card is blocked, call the bank for help\n";
}
```

---

## Topics Covered

- Loops and conditions
- Functions (including `void` functions)
- Input validation
- Sum, counting and basic algorithms
