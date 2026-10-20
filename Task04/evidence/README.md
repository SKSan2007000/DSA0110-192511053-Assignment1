# Task 04 – Type Conversion and Compatibility

## Objective
To demonstrate implicit and explicit type conversions in C++ and examine their effects on calculations and comparisons in the Metro Smart-Card System.

## Concepts Covered
- Implicit conversion from `int` to `double`
- Integer division versus floating-point division
- Explicit conversion using `static_cast<double>`
- Character arithmetic and conversion to an integer code
- Conversion of an integer value to `bool`
- Signed and unsigned integer comparison

## Program Description
The program calculates `7 / 2` using integer division and explicit floating-point conversion. It also demonstrates character arithmetic, Boolean conversion, and signed/unsigned comparison.

## Expected Result
- Integer division assigned to `double`: `3`
- Explicit floating-point division: `3.5`
- Character after conversion: `C`
- Next character code: `68`
- Boolean conversion from `5`: `true`
- Signed/unsigned comparison: `false`

## Compilation and Execution
The program was tested using the OnlineGDB C++ compiler.

1. Select **C++** as the language.
2. Paste the source code into `main.cpp`.
3. Click **Run**.
4. Compare the actual output with the expected output.

## Evidence
The `evidence` folder contains the screenshot of the program and its execution output.

## Conclusion
The program demonstrates how implicit and explicit conversions can produce different results. Explicit conversion is useful when floating-point arithmetic is required.
