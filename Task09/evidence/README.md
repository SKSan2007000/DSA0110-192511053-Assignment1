# Task 09 – Table-Driven Fare Logic Testing

## Description

This program tests the metro smart-card fare calculation using different test cases. It checks the fare for each zone, peak and off-peak hours, card balance, and whether a journey should be allowed.

It also checks invalid zone inputs, negative recharge amounts, and the peak-hour time boundaries.

## Fare Details

- Inner Zone: ₹10
- Middle Zone: ₹20
- Outer Zone: ₹30
- Peak-hour surcharge: 20%
- Peak hours: 08:00–09:59 and 17:00–19:59
- Minimum balance after a journey: ₹50

## Test Cases

The program tests the following conditions:

1. Inner Zone during off-peak hours.
2. Middle Zone at 08:00.
3. Outer Zone at 10:00.
4. Inner Zone at 17:00 with insufficient balance.
5. Outer Zone at 20:00.
6. Journey leaving exactly ₹50 in the card.
7. Journey with insufficient balance.
8. Rejection of an unknown zone.
9. Rejection of a negative recharge amount.

The program displays PASS or FAIL for each test. It also calculates a five-journey example total of 9,600 paise (₹96) and checks the peak-hour boundaries.

## Running the Program

The program was tested using the OnlineGDB C++ Compiler.

1. Select C++ as the language.
2. Paste the code into `main.cpp`.
3. Click **Run**.
4. Check that all nine tests pass and the program finishes with exit code 0.

## Files

- `main.cpp` – C++ program containing the fare logic tests.
- `sample_output.txt` – Sample console output.
- `evidence/execution_output.png` – Screenshot of the program execution.

## Result

All nine test cases should pass. The program checks the fare calculation, balance requirements, invalid inputs, and peak-hour boundaries for the metro smart-card system.