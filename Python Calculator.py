A = 90
B = 80
C = 75
D = 60
E = 50

print("Python Grade Calculator\n")

name = input("What is the student's name? ")
age = input("What is the student's age? ")
gender = input("What is the student's gender? ")
classStr = input("What is the student's class? ")
marksStr = input("What are the marks acquired by the student? ")
passMarksStr = input("What is the pass marks for the test? ")
maxMarksStr = input("What is the maximum marks in the test? ")
input("Press enter to continue\n")

marks = int(marksStr)
maxMarks = int(maxMarksStr)
passMarks = int(passMarksStr)
classNum = int(classStr)
percentage = marks * 100.0 / maxMarks
percentage1 = passMarks * 100.0 / maxMarks
sumOfTwoNumbers = classNum + 1

print("Name of student: ", name)
print("Age of student: ", age)
print("Gender: ", gender)
print("Percentage Acquired: ", percentage)

print("Overall Grade: ", end="")
if percentage > A:
    print("A")
elif percentage > B:
    print("B")
elif percentage > C:
    print("C")
elif percentage > D:
    print("D")
elif percentage > E:
    print("E")
else:
    print("F")

if percentage > percentage1:
    print("Passed and promoted to class ", sumOfTwoNumbers)
else:
    print("Failed. Try harder next time.")

with open("marks.txt", "w") as file:
    file.write(name + "\n")
    file.write(age + "\n")
    file.write(gender + "\n")
    file.write(str(classNum) + "\n")
    file.write(str(marks) + "\n")
