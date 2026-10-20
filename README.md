# City Metro Smart-Card Fare System – Assignment 1

**Course Outcome:** CO1 – Object-Oriented Programming and C++ Constructs

**Assignment Title:** Design, Implement and Validate the Fare Logic of a City Metro Smart-Card System

**Name:** B. Santhosh Kumar  
**Register Number:** 192511053  
**Compiler:** GCC 16.2.0  
**Repository:** `DSA01-192511053-Assignment1`

## About the Assignment

This assignment implements the fare calculation logic of a city metro smart-card system using C++. It covers data types, operators, control statements, functions, classes, and input validation.

The programs calculate fares based on the selected zone and travel time. They also validate the smart-card balance before allowing a journey and demonstrate different C++ programming concepts.

## Requirements

- C++17-compatible compiler
- Git for version control
- Terminal or command prompt for running programs

## Tasks Included

| Task | Description |
|---|---|
| Task 01 | Objects and encapsulation |
| Task 02 | Tokens, constants and `enum class` |
| Task 03 | Data types, sizes and integer limits |
| Task 04 | Type conversions and signed/unsigned comparison |
| Task 05 | Operators, precedence and arithmetic |
| Task 06 | Fare calculation using control structures |
| Task 07 | Procedural and object-oriented implementations |
| Task 08 | Input validation and fare formatting |
| Task 09 | Table-driven fare logic tests |
| Task 10 | Aggregate volume and floating-point comparison |
| Task 11 | Recommended fare design |
| Task 12 | Airport zone, weekend discount and monthly pass |

## Fare Rules

- Inner Zone – ₹10
- Middle Zone – ₹20
- Outer Zone – ₹30
- Airport Zone – ₹60 (Task 12)
- Peak-hour surcharge – 20% during 8:00–9:59 AM and 5:00–7:59 PM
- Minimum remaining card balance – ₹50 after fare deduction
- Student and senior concession rates are not assumed because the assignment does not specify them.
- In Task 12, the 10% weekend discount takes priority over the peak surcharge. This interpretation can be confirmed with the faculty.
- A monthly pass allows unlimited journeys in two selected zones while it is active.

## Files and Testing

The repository contains the `Task01` to `Task12` folders, C++ source files, sample output files, and supporting assignment documents.

Each program should be tested before submission. The sample output must be checked against the actual execution output. Screenshots of successful runs should be saved in the corresponding task folders.

For Tasks 04 and 05, record the predicted output before executing the programs.

## GitHub Submission

The project is maintained in GitHub. Changes should be committed progressively as each task is completed and tested.

Example:

```bash
git add README.md Task01/
git commit -m "Add Task 01 object analysis and demo"
git push origin main
```

Repeat this process for the remaining tasks. Before submission, ensure that all required source files, sample outputs, and execution screenshots are present. Include the repository URL in the assignment report.
