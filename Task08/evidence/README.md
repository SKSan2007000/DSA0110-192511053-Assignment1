# Task 08 – Interactive Metro Fare Calculator

## Objective
To develop a C++ program that calculates metro fares based on the selected zone and travel time, validates user input, and checks the smart-card minimum balance requirement.

## Concepts Covered
- Standard input and output using `cin`, `cout`, and `cerr`
- Conditional statements (`if-else`)
- `switch` statement
- Input validation and error handling
- Boolean expressions
- Peak-hour surcharge calculation
- Type conversion
- Currency formatting using `iomanip`
- Input stream handling using `limits`

## Program Description
The program asks the user to enter a zone number, travel hour, and smart-card balance in whole rupees. It validates the input and determines the base fare for the selected zone.

A 20% surcharge is applied during peak hours. The program converts rupees to paise for fare and balance calculations, then checks whether at least ₹50 will remain after the fare deduction.

The program displays the peak-hour status, fare, initial balance, and journey decision. Invalid inputs or an unknown zone produce an error message.

## Fare Rules
- Inner Zone: ₹10
- Middle Zone: ₹20
- Outer Zone: ₹30
- Peak-hour surcharge: 20%
- Peak hours: 8:00–10:00 AM and 5:00–8:00 PM
- Minimum remaining balance: ₹50

## Sample Test Case
**Input**
- Zone: 3 (Outer)
- Hour: 18
- Card balance: ₹100

**Expected Output**
```text
Enter zone (1=Inner, 2=Middle, 3=Outer): 3
Enter hour (0-23): 18
Enter card balance in whole rupees: 100
Peak hour: true
Fare: Rs 36.00
Balance before journey: Rs 100.00
Journey allowed; remaining balance: Rs 64.00
```

## Compilation and Execution
**Execution platform:** OnlineGDB C++ Compiler

1. Select C++ as the programming language.
2. Paste the source code into `main.cpp`.
3. Click **Run**.
4. Enter the zone, hour, and balance when prompted.
5. Verify that the result matches the entered values and fare rules.

## Files
- `main.cpp` – C++ source code.
- `sample_output.txt` – Example program output.
- `evidence/execution_output.png` – Screenshot of the actual source code and successful execution.

## Result
The program calculates zone-based metro fares, applies the peak-hour surcharge, validates user inputs, and determines whether a journey can be completed while retaining the minimum required balance.

**Note:** The sample output represents one test case. Execution evidence should be captured from the actual program run.
