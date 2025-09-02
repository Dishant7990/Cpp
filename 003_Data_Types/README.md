# C++ Data Types

C++ provides a variety of data types to store different kinds of information. Choosing the right data type helps optimize memory usage and ensures correct program behavior.

---

## Basic Data Types

| Data Type | Size       | Description                                  |
|-----------|------------|----------------------------------------------|
| `bool`    | 1 byte     | Stores `true` or `false` values              |
| `char`    | 1 byte     | Stores a single character or ASCII value     |
| `int`     | 2 or 4 bytes | Stores whole numbers without decimals       |
| `float`   | 4 bytes    | Stores decimal numbers with ~6-7 digits precision |
| `double`  | 8 bytes    | Stores decimal numbers with ~15 digits precision |

---

## Numeric Types

- Use **`int`** for whole numbers (e.g., 35, 1000).
- Use **`float`** or **`double`** for numbers with decimals.
  - `double` is preferred for more precision.
- Floating-point numbers can be expressed in **scientific notation**, e.g., `35e3` (35 × 10³).

---

## Boolean Type

- Declared with the keyword `bool`.
- Can only hold values `true` or `false`.
- Internally, `true` is represented as `1`, and `false` as `0`.
- Commonly used for conditional testing.

```cpp
bool isCodingFun = true;
cout << isCodingFun;  // Outputs 1
```

---

## Character Type

* The `char` type stores a single character surrounded by single quotes.

    ```cpp
    char grade = 'A';
    cout << grade;
    ```

* You can also use ASCII values to represent characters:

    ```cpp
    char a = 65;  // ASCII for 'A'
    cout << a;
    ```

---

## String Type

* Stores a sequence of characters (text).
* Requires including the `<string>` header.
* String literals must be enclosed in double quotes.

    ```cpp
    #include <string>

    string greeting = "Hello";
    cout << greeting;
    ```

---

## The `auto` Keyword

* Allows the compiler to **automatically deduce the variable type** from the assigned value.
* Simplifies code, especially with complex types.
* Requires initialization during declaration.

    ```cpp
    auto x = 5;         // int
    auto pi = 3.1415;   // double
    auto letter = 'D';  // char
    auto flag = true;   // bool
    auto message = string("Hi");  // std::string
    ```

    **Note:** Once the type is deduced, it cannot be changed.

---

## Summary

* Choose data types based on the kind of data and precision required.
* Use `bool` for true/false values, `char` for single characters, and `string` for text.
* Prefer `double` over `float` for more accurate decimal numbers.
* Use `auto` to let the compiler infer variable types and simplify code.

Understanding and using the correct data types is fundamental for writing efficient and readable C++ programs.
