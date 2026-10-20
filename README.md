# City Metro Smart-Card Fare System — Assignment 1

**Course outcome:** CO1 — Object-Oriented Programming and C++ Constructs  
**Assignment:** Design, Implement and Validate the Fare Logic of a City Metro Smart-Card System

## Student details

- **Name:** Replace with your full name
- **Register number:** Replace with your register number
- **Compiler:** Record the compiler and version used for your final run
- **Repository:** `DSA01-<RegisterNumber>-Assignment1`

## Requirements

- C++17-compatible compiler (`g++` is used in the examples below)
- Git, for progressive version-control submissions

Check the installed compiler version:

```bash
g++ --version
```

## Compile and run

From the repository root, compile any task using the source file in its folder. For example:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic Task06/main.cpp -o task06
```

On Linux/macOS, run it with `./task06`. In Windows PowerShell, run `./task06.exe` (or `.\task06.exe`). Replace the source path and output name for the task you are working on.

Task 07 contains two programs and should be compiled separately:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic Task07/procedural.cpp -o task07_procedural
g++ -std=c++17 -Wall -Wextra -pedantic Task07/oop.cpp -o task07_oop
```

## Repository contents

- `Task01`–`Task12`: C++ source files organised by assignment task.
- `sample_output.txt`: sample console output for selected non-interactive tasks. Confirm it against your own run.
- `Assignment_Report.docx`: formatted assignment report.
- `BUILD_AND_RUN_LOG.txt`: initial compilation check notes.

## Task index

| Folder | Purpose |
|---|---|
| `Task01` | Identify objects and demonstrate encapsulation |
| `Task02` | Tokens, constants and `enum class` |
| `Task03` | Data types, sizes and integer limits |
| `Task04` | Implicit conversions and signed/unsigned comparison |
| `Task05` | Operators, precedence and arithmetic |
| `Task06` | Fare calculation with control structures |
| `Task07` | Procedural and object-oriented implementations |
| `Task08` | Input validation and fare formatting |
| `Task09` | Table-driven fare logic tests |
| `Task10` | Aggregate volume and floating-point comparison |
| `Task11` | Recommended fare design |
| `Task12` | Airport zone, weekend discount and monthly pass |

## Rules and assumptions

- Base fares: Inner ₹10, Middle ₹20, Outer ₹30. Task 12 adds Airport at ₹60.
- Peak surcharge: 20% during 08:00–09:59 and 17:00–19:59.
- The stored-value card must retain at least ₹50 after a fare deduction.
- The assignment mentions student and senior concessions but does not specify their rates. No official percentage is assumed in this implementation.
- Task 12 interprets “weekend discount does not combine with peak surcharge” as the 10% weekend discount taking priority over the peak surcharge. Confirm this interpretation with the faculty if required.
- A monthly pass covers unlimited journeys in two selected zones while it is active.

## Submission evidence

Before submission, run each program on your own computer and save genuine terminal screenshots in the matching task folder. Add input files where relevant, record the actual compiler version and compare the output with the sample output. For Tasks 4 and 5, write down the predicted output **before** executing the program.

## GitHub submission

Create a repository named `DSA01-<RegisterNumber>-Assignment1`. Keep it public or add the course faculty as a collaborator if private. Commit work progressively, with at least one meaningful commit per task; do not upload all work in a single final commit.

Example workflow:

```bash
git init
git add README.md Task01
git commit -m "Add Task 01 object analysis and demo"
```

Repeat the add/commit process for each task after completing and testing it. Replace all student-detail placeholders and paste the repository URL into the report before submission.
