# Task 11 – SmartCard Class and Fare Calculation

## Description

This program uses a `SmartCard` class to manage the balance of a metro smart card. It calculates the fare based on the travel zone and applies an extra 20% charge during peak hours.

The program checks whether the card has enough balance to complete the journey while keeping at least ₹50 in the card. If the journey is allowed, the fare is deducted from the balance. Otherwise, the journey is denied.

## Fare Details

- Inner Zone: ₹10
- Middle Zone: ₹20
- Outer Zone: ₹30
- Peak-hour surcharge: 20%
- Peak hours: 8:00–9:59 AM and 5:00–7:59 PM
- Minimum balance after travel: ₹50

## Sample Output

```text
Fare paise = 3600
Accepted; balance paise = 6400
```

## Running the Program

1. Open a C++ compiler.
2. Copy the program into `main.cpp`.
3. Select C++11 or a later standard.
4. Click **Run**.
5. Check the fare and remaining balance in the output.

## Files

- `main.cpp` – Contains the smart-card class and fare calculation.
- `README.md` – Contains the program description and running instructions.
- `sample_output.txt` – Contains the sample output.
- `evidence/execution_output.png` – Screenshot of the program execution.

## Result

The program successfully demonstrates fare calculation, peak-hour charges, balance checking, and fare deduction using a `SmartCard` class. For the given journey, the fare is ₹36 and the remaining balance is ₹64.
