# AABII Softwares — Flight Reservation System

A simple console-based Flight Reservation / Booking Management System written in C++ (Turbo C++ / MS-DOS style). It stores passenger flight records in a binary data file and lets you add, view, search, modify, and delete records through a menu-driven interface.

## Features

- **Data Entry** — Add a new passenger's flight record (name, nationality, flight number, date, flight time, airline, seat number, age).
- **View Records** — Either list all stored records or search for a specific passenger by name.
- **Modify Records** — Update an existing passenger's details.
- **Delete Records** — Remove a passenger's record from the data file.
- **Exit** — Cleanly terminate the program.

The current date/time is displayed at the top of the menu on every loop using `ctime()`.

## Requirements

This program uses legacy, DOS-specific headers and is intended to compile with **Turbo C++ / Borland C++** (or DOSBox) rather than a modern compiler:

- `conio.h` — for `getche()`
- `dos.h` — for DOS-specific functions

> **Note:** Modern compilers (GCC/Clang/MSVC) will not compile this as-is, since `conio.h` and `dos.h` aren't standard/available outside DOS/Windows-legacy toolchains. To run it today, use an environment like **DOSBox + Turbo C++**, or **Borland C++ 5.5**, or adapt the code (see "Modernizing" below).

## How to Build & Run (Turbo C++ / DOSBox)

1. Open the `.cpp` file in the Turbo C++ IDE (or place it in your DOSBox-mounted directory).
2. Compile and run (Alt+F9 to compile, Ctrl+F9 to run in Turbo C++ IDE).
3. A `project.dat` binary file will be created in the working directory to store records.

## Menu Options

```
1. Data Entry              -> Add new flight record(s)
2. Check Record/Your Data  -> View all records or search by name
3. Modify Existing Data    -> Edit an existing record
4. Delete any Record       -> Remove a record by name
5. Exit Program            -> Quit
```

## Data Structure

Each record is stored as a `struct fly`:

| Field      | Type      | Description        |
|------------|-----------|---------------------|
| `nam`      | char[30]  | Passenger name      |
| `nat`      | char[30]  | Nationality          |
| `fli`      | char[40]  | Flight number        |
| `date`     | char[12]  | Flight date (DD/MM/YYYY) |
| `f_tme`    | char[10]  | Flight time (HH:MM)  |
| `airline`  | char[30]  | Airline name          |
| `s_num`    | int       | Seat number           |
| `age`      | int       | Passenger age          |

Records are written/read as raw binary structs to/from `project.dat` using `fwrite`/`fread`.

