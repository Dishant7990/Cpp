# C++ Variables and Constants

## Variables in C++

Variables are containers for storing data values in C++. They allow you to store different types of data that your program can manipulate.

### Common Variable Types:
- **int**: Stores integers (whole numbers) without decimals, e.g., `123`, `-123`.
- **double**: Stores floating point numbers with decimals, e.g., `19.99`, `-19.99`.
- **char**: Stores single characters, e.g., `'a'`, `'B'`. Char values are enclosed in single quotes.
- **string**: Stores text (strings), e.g., `"Hello World"`. String values are enclosed in double quotes.
- **bool**: Stores boolean values with two states: `true` or `false`.

---

## Declaring (Creating) Variables

To create a variable, specify its type and assign it a value:

```cpp
type variableName = value;
````

* **type**: The data type (e.g., `int`, `double`).
* **variableName**: The unique name (identifier) for the variable.
* **value**: The value assigned to the variable.

### Example:

Create an integer variable `myNum` and assign it the value `15`:

```cpp
int myNum = 15;
cout << myNum;
```

---

## C++ Identifiers

All variables must be identified with **unique names** called **identifiers**.

### Rules for Identifiers:

* Can contain letters, digits, and underscores (`_`).
* Must begin with a letter or an underscore.
* Are case-sensitive (`myVar` and `myvar` are different).
* Cannot contain spaces or special characters like `!`, `#`, `%`, etc.
* Cannot use reserved keywords (like `int`, `return`, etc.) as names.

### Naming Recommendations:

* Use descriptive names for better readability and maintainability.

#### Examples:

```cpp
// Good
int minutesPerHour = 60;

// OK but less clear
int m = 60;
```

---

## Constants in C++

If you want to create a variable whose value should **never change**, use the `const` keyword. This makes the variable **read-only**.

### Rules for Constants:

* Must be initialized at the time of declaration.
* Trying to assign a new value later causes a compilation error.

### Example:

```cpp
const int minutesPerHour = 60;
minutesPerHour = 30; // Error: assignment of read-only variable
```

---

## Summary

* Use variables to store data values of various types (`int`, `double`, `char`, `string`, `bool`).
* Choose meaningful and valid names for your variables (identifiers).
* Use `const` to declare constants that should not be modified after initialization.

