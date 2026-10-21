# Task 12 – Airport Fare, Weekend Discount and Monthly Pass

## Description

This program adds airport fares, weekend discounts and a monthly pass to the metro smart-card system.

The airport fare is ₹60. During weekday peak hours, a 20% extra charge is added to the fare. On weekends, passengers receive a 10% discount instead of the peak-hour surcharge.

The monthly pass allows unlimited travel in two selected zones while the pass is active. The program also checks the card balance before accepting a journey and makes sure at least ₹50 remains after payment.

## Fare Details

- Inner Zone: ₹10
- Middle Zone: ₹20
- Outer Zone: ₹30
- Airport Zone: ₹60
- Peak-hour surcharge: 20%
- Weekend discount: 10%
- Minimum balance after travel: ₹50

## Test Cases

The program checks three journeys:

1. Airport travel during weekday peak hours.
2. Airport travel on a weekend during peak-time hours.
3. Inner Zone travel covered by an active monthly pass.

It displays the fare, journey status and remaining card balance for each case.

## Running the Program

1. Open a C++ compiler.
2. Copy the code into `main.cpp`.
3. Select C++11 or a later standard.
4. Click **Run**.
5. Check the output for the fare and remaining balance.

## Files

- `main.cpp` – Contains the fare calculation, monthly pass and smart-card logic.
- `README.md` – Contains the program description and instructions.
- `sample_output.txt` – Contains the sample output.
- `evidence/execution_output.png` – Screenshot of the program execution.

## Result

The program demonstrates airport fare calculation, peak-hour charges, weekend discounts and monthly-pass travel. It also checks the minimum balance requirement before accepting a journey. The weekend discount is applied instead of the peak surcharge, so the two adjustments are not combined.
