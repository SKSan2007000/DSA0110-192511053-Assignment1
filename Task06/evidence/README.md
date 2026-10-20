# Task 06 – Metro Smart-Card Fare Calculation

## Objective
To implement and validate metro smart-card fare calculation, peak-hour surcharge, balance validation, and peak-hour detection using C++.

## Concepts Covered
- Enumerations using `enum class`
- Constants using `constexpr`
- Functions and conditional statements
- `switch` statement
- Peak-hour surcharge calculation
- Minimum remaining balance validation
- Arrays and structures
- Formatted currency output using `iomanip`

## Program Description
The program calculates metro fares for Inner, Middle, and Outer zones. The base fares are ₹10, ₹20, and ₹30, respectively. A 20% surcharge is applied to peak-hour journeys.

The smart card starts with a balance of ₹100. A journey is accepted only when the fare can be deducted while retaining at least ₹50. The program displays the fare and remaining balance for each trip and checks whether 10:00 and 20:00 are peak hours.

## Fare Rules
- Inner Zone: ₹10
- Middle Zone: ₹20
- Outer Zone: ₹30
- Peak-hour surcharge: 20%
- Minimum required remaining balance: ₹50
- Peak hours: 8:00–10:00 AM and 5:00–8:00 PM

## Compilation and Execution
**Execution platform:** OnlineGDB C++ Compiler

1. Select C++ as the programming language.
2. Paste the program into `main.cpp`.
3. Click **Run**.
4. Verify that the output matches the program's actual execution.

## Files
- `main.cpp` – C++ source code.
- `sample_output.txt` – Expected execution output.
- `evidence/execution_output.png` – Screenshot of the source code and successful output.

## Result
The program demonstrates zone-based fare calculation, peak-hour surcharge, minimum balance validation, and peak-hour detection.

**Note:** The execution screenshot should show the actual output produced by the committed source code.
