# Assignment: No Two Consecutive Activities

**Name:** [Israa Tawfeeq Tomeh]

**ID:** [israatumeh9@gmail.com]

---

### Problem Statement

This program generates all possible daily activity schedules for **n** days using three activities: Swimming, Running, and Football. The main constraint is that no two consecutive days can have the same activity.

---

### Example Run (n = 2)

**Input:**
2
**Output:**
Running Swimming 
Running football 
Swimming Running 
Swimming football 
football Running 
football Swimming 
COUNT: 6

---

### Expected Count Formula

The number of valid schedules follows the formula: 3 * 2^(n-1).