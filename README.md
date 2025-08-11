# Temperature Data Analyzer (C++)

This C++ program analyzes a set of temperature readings over multiple days.  
It determines:
- The **highest temperature** recorded.
- The **day** on which the highest temperature occurred.
- The **number of days** with temperatures **below the average**.

**How it works:**
1. The user enters the number of days (`n`) and then inputs `n` temperature readings.
2. The program stores the readings dynamically using `new[]` to demonstrate **dynamic memory allocation**.
3. Using a separate function `test()`:
   - It finds the highest temperature and the corresponding day.
   - Calculates the average temperature.
   - Counts how many days had temperatures below the average.
4. The results are displayed:
   - Number of days below average.
   - Highest temperature.
   - Day of highest temperature.

**Key Concepts Demonstrated:**
- **Dynamic memory allocation** (`new[]` / `delete[]`)
- **Pointer usage** for returning multiple values from a function.
- **Loop-based data analysis**.
- **Basic statistical calculations** (average, comparisons).

This program is a practical example for beginners learning **pointers, dynamic arrays, and basic data analysis** in C++.
