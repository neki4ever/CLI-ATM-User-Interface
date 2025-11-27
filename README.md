# 🏦 FakeBank CLI

A C++ console application that simulates a basic ATM interface. This project focuses on CLI (Command Line Interface) design, using ASCII art and basic state management to create an immersive terminal experience.

## 📸 Preview
<img width="460" height="362" alt="{E185B5B4-FCCF-4DFC-927A-E9065317A4BD}" src="https://github.com/user-attachments/assets/0e63c03e-48e9-4ea8-8966-84f3e38848b5" />


## 🚀 Features
- **Graphic Interface:** Uses ASCII art and box-drawing characters for a retro UI.
- **Dynamic Receipt Generation:** Visually formats numbers to keep the interface aligned.
- **Account Management:**
  - Check Balance
  - Deposit Funds
  - Withdraw Funds
  - Transaction History *(Coming Soon)*

## 🛠️ Built With
- **Language:** C++
- **Compiler:** MSVC (Microsoft Visual C++)
- **Platform:** Windows

## 🚧 Status: Work in Progress
This project is currently under development.
- [x] Basic UI & Navigation
- [x] Deposit & Withdrawal Logic
- [ ] Transaction History (In implementation)
- [ ] User Authentication system

## 💻 How to Run
1. Clone the repository.
2. Open the **Developer Command Prompt for VS** (or ensure `cl.exe` is in your PATH).
3. Navigate to the folder and compile:
   ```cmd
   cl /EHsc main.cpp
