# smart_bill_estiamtor.cpp
Smart Bill Estimator Calculates electricity bill, peak load, current requirement, and MCB recommendation. 
# Smart Bill Estimator (C++)

## Overview
Smart Bill Estimator is a simple C++ console-based application that calculates the electricity consumption and estimated electricity bill for multiple household appliances.

The program also calculates:
- Total electricity consumption (kWh)
- Total electricity bill
- Peak load (W and kW)
- Required current (A)
- Recommended Miniature Circuit Breaker (MCB) rating

This project is useful for learning basic C++ programming concepts, loops, calculations, and user input handling while solving a real-world electrical engineering problem.

---

## Features

- Calculate daily electricity consumption
- Calculate total electricity consumption
- Estimate electricity bill
- Support multiple appliances
- Calculate peak load
- Calculate required current (220V supply)
- Recommend suitable MCB rating

---

## Formula Used

### Daily Energy Consumption

Daily Unit (kWh) = (Power Rating × Usage Hours) / 1000

### Total Energy Consumption

Total Unit = Daily Unit × Number of Days

### Electricity Bill

Bill = Total Unit × Electricity Rate

### Current

Current (A) = Total Power (W) / 220V

---

## Miniature Circuit Breaker(MCB) Recommendation

| Current | Recommended MCB |
|---------|-----------------|
| ≤ 6 A | 6A |
| ≤ 10 A | 10A |
| ≤ 16 A | 16A |
| ≤ 20 A | 20A |
| ≤ 32 A | 32A |
| > 32 A | Industrial Load Warning |

---

## Technologies Used

- C++
- iostream
- iomanip
- string
- cmath

---

## How to Run

### Compile

```bash
g++ smartbillestimator.cpp -o smartbillestimator
```

### Run

```bash
./smartbillestimator
```

or (Windows)

```bash
smartbillestimator.exe
```

---

## Sample Input

```
Enter the number of appliances: 2

Appliance 1
Name: Light
Power Rating: 20
Usage Hour Per Day: 8
Days: 30
Electricity Rate: 10

Appliance 2
Name: Fan
Power Rating: 75
Usage Hour Per Day: 12
Days: 30
Electricity Rate: 10
```

---

## Sample Output

```
TOTAL UNIT CONSUMPTION: 31.80 kWh
TOTAL ELECTRICITY BILL: 318.00 Taka

Peak Load: 95 W
Peak Load: 0.095 kW

Current Required: 0.43 A

Recommended Miniature Circuit Breaker: 6A
```

---

## Learning Concepts

- Variables
- Loops
- Conditional Statements
- User Input
- Mathematical Calculations
- Functions from Standard Libraries
- Formatted Output

---

## Future Improvements

- Tier-based electricity tariff calculation
- Different voltage selection
- Save bill as a text file
- Monthly electricity usage history
- Graphical User Interface (GUI)
- Appliance data storage

---

## Author

MOHAMMAD SHAKHAWAT HOSSAIN SHRABON
EEE,Ahsanullah University of science and technology,dhaka.
