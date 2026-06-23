# 🚗 Smart Car Finance & Fuel Economy Calculator

A comprehensive C++ command-line application built to assist users in making informed, data-driven decisions when purchasing a vehicle. It combines an Islamic auto finance calculator with a smart purchase feasibility tool tailored to different powertrain types.

## 🌟 Key Features

* **Islamic Finance Calculator:** Calculates accurate monthly installments and total bank profit based on flat-rate Islamic Murabaha principles, ensuring profit is only calculated on the financed amount after the down payment.
* **Affordable Car Price Calculator:** Reverse-calculates the maximum car price a user can afford based on their target monthly installment, available down payment, and finance duration, complete with a built-in 20% salary budget warning.
* **Car Purchase Feasibility Workflow:** A dynamic branching system that evaluates whether buying a specific car is a smart decision based on its powertrain type:
  * **Gasoline & Hybrid:** Computes exact fuel savings (Liters & Money saved per 100km) compared to the user's old vehicle and benchmarks efficiency per 20L (التنكة).
  * **Electric Vehicles (EV):** Benchmarks real-world driving range per full charge to evaluate usability and warn against range anxiety.
* **Robust Error Handling & UX:** Implements input validation loops to handle incorrect menu selections, utilizes custom terminal color codes, and includes a persistent loop asking the user to return to the Main Menu or exit.

## 🛠️ Tech Stack
* **Language:** C++ (C++11 standard)
* **IDE/Compiler:** Visual Studio (MSVC) / Windows Terminal
* **Concepts Applied:** Dynamic Branching (`if/else if`), Input Validation Loops (`while`), Data Type Optimization (`char`, `double`, `int`), and Terminal UI Customization.

## 🚀 How It Works
1. Run the application in your Windows terminal.
2. Navigate through the Main Menu options.
3. Use the **Finance Tools** to figure out your monthly budget or installment costs.
4. Proceed to the **Car Purchase Feasibility** tool, select your powertrain (Gasoline, EV, or Hybrid), and enter the vehicle's efficiency specs to receive an instant expert rating (Poor, Acceptable, or Excellent).
5. Choose whether to return to the Main Menu (`Y`) or exit the application (`N`) safely.
---

<img width="1482" height="762" alt="Screenshot 2026-06-23 122614" src="https://github.com/user-attachments/assets/84ce9673-8b0d-4997-8a1f-48bc2ccef061" />
<img width="1482" height="762" alt="Screenshot 2026-06-23 122633" src="https://github.com/user-attachments/assets/8d1cdb20-8c71-401a-865c-d4d12c3a0cea" />
<img width="1482" height="762" alt="Screenshot 2026-06-23 122655" src="https://github.com/user-attachments/assets/9ee0a212-fd73-4b5a-a5f2-f1fa495e3cc1" />
<img width="1482" height="762" alt="Screenshot 2026-06-23 122705" src="https://github.com/user-attachments/assets/9c84f138-414b-4c6d-8645-c9a83a0d16ac" />
<img width="1482" height="762" alt="Screenshot 2026-06-23 122717" src="https://github.com/user-attachments/assets/e8db6600-638c-4767-b422-b2dfa4c97891" />
<img width="1482" height="762" alt="Screenshot 2026-06-23 122743" src="https://github.com/user-attachments/assets/15d80417-bae6-455f-9100-cc86a2de1415" />

*Developed by Yamen Al-Safareeni*
