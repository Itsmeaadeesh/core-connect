# 📘 Explanation: Student Report Card Generator

This challenge is about applying **Object-Oriented Programming (OOP)** principles to generate a student’s report card.

### Steps:

1. **Class Design**  
   - Store basic student info and marks in a class.
   - Use member functions for:
     - Input
     - Average calculation
     - Grade determination
     - Output display

2. **Average Formula**  
   `avg = (marks[0] + marks[1] + marks[2]) / 3.0`

3. **Grade Logic**
   ```cpp
   if (avg >= 90) Grade A  
   else if (avg >= 75) Grade B  
   else if (avg >= 50) Grade C  
   else Grade D
