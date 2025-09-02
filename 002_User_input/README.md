# C++ User Input

## Introduction to User Input

In C++, `cout` is used to output (print) values to the screen. To get input from the user via the keyboard, C++ provides `cin`.

- **`cin`** is a predefined object that reads data from the keyboard.
- It uses the **extraction operator (`>>`)** to take input.

---

## How to Use `cin`

You can use `cin` to store user input into a variable.

### Example:

```cpp
int x;
cout << "Type a number: ";  // Prompt user to enter a number
cin >> x;                   // Read the number from keyboard and store in x
cout << "Your number is: " << x;  // Output the entered number
```

---

## Pronunciation & Operators

* `cout` is pronounced **"see-out"**

  * Used for **output**
  * Uses the **insertion operator (`<<`)**

* `cin` is pronounced **"see-in"**

  * Used for **input**
  * Uses the **extraction operator (`>>`)**

---

## Example: Creating a Simple Calculator

This program asks the user to input two numbers and then prints their sum.

```cpp
int x, y;
int sum;

cout << "Type a number: ";
cin >> x;

cout << "Type another number: ";
cin >> y;

sum = x + y;
cout << "Sum is: " << sum;
```

---

## Summary

* Use `cin >>` to read user input from the keyboard.
* Use `cout <<` to display output on the screen.
* The extraction operator `>>` is used with `cin` for input.
* The insertion operator `<<` is used with `cout` for output.
