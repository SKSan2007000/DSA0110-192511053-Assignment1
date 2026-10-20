# Task 07 – Smart-Card Balance Validation Using OOP

## Objective
To implement a metro smart-card balance validation system using a C++ class, constructor, private data members, and member functions.

## Concepts Covered
- Object-oriented programming
- Classes and objects
- Private data members and encapsulation
- Constructors and member initializer lists
- Member functions
- Boolean conditions and `if-else`
- Fare deduction and balance validation

## Program Description
The program defines a `SmartCard` class to manage a travel card's balance. The class stores the current balance and minimum required balance as private data members.

The constructor initializes these values. The `balance()` method returns the current balance, while `canTravel()` checks whether a fare is non-negative and the remaining balance meets the minimum requirement. The `deduct()` method deducts the fare only when travel is permitted.

In `main()`, a card is initialized with 10,000 paise and a minimum balance of 5,000 paise. A fare of 3,600 paise is checked and deducted.

## Initial Values
- Initial balance: 10,000 paise (₹100)
- Journey fare: 3,600 paise (₹36)
- Minimum required balance: 5,000 paise (₹50)
- Expected remaining balance: 6,400 paise (₹64)

## Expected Output
```text
Accepted; balance = 6400 paise
```

## Compilation and Execution
**Execution platform:** OnlineGDB C++ Compiler

1. Select C++ as the programming language.
2. Paste the class-based program into `main.cpp`.
3. Click **Run**.
4. Confirm that the output matches the expected output.

## Files
- `main.cpp` – C++ implementation of the `SmartCard` class.
- `sample_output.txt` – Expected program output.
- `evidence/execution_output.png` – Screenshot of the actual source code and successful execution.

## Result
The program demonstrates how a C++ class can encapsulate smart-card data and control fare deduction through member functions. The journey is accepted because the remaining balance of 6,400 paise is greater than the required minimum of 5,000 paise.

**Note:** This README describes the class-based implementation. Confirm it against the official Task 07 question before submission.
