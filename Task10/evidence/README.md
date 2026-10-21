# Task 10 – Integer and Floating-Point Accuracy

## Description

This program checks how the data type affects fare calculations in the metro smart-card system.

It calculates the total fare for different numbers of journeys using `long long` and checks whether the result can fit inside an `int`.

The program also adds ₹0.10 repeatedly using `double` and compares the result with the correct amount calculated using integer paise. This shows that floating-point calculations can have small rounding errors.

## What the Program Checks

- Total fare for 20,000, 500,000 and 3,000,000 journeys.
- Whether the total amount fits within the range of an `int`.
- The difference between repeated floating-point addition and the reference amount.
- The use of `long long` for handling large fare totals.

## Running the Program

I tested the program using a C++ compiler.

1. Open the C++ compiler.
2. Copy the code into `main.cpp`.
3. Select C++11 or a later standard.
4. Click **Run**.
5. Check the total paise values and the floating-point difference in the output.

## Files

- `main.cpp` – Contains the C++ program.
- `sample_output.txt` – Contains the program output.
- `evidence/execution_output.png` – Screenshot of the program running.

## Result

The program shows that `long long` can store the calculated total of 3,000,000 journeys, which is 3,000,000,000 paise. This value exceeds the usual maximum value of a 32-bit `int`.

It also shows that repeatedly adding ₹0.10 using `double` may produce a slightly different result from the reference amount. Using integer paise is a better choice for storing and calculating metro fares accurately.
