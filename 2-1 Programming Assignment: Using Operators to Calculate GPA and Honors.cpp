/*
Dustin Price
IT-312-J5056 Software Devel w/C++.Net 22EW5
5/14/2022
2-1 Programming Assignment: Using Operators to Calculate GPA and Honors

Summary/Descripion: 

The point of the assignment is to convert the grades that you input for 4 classes.
Then it will display the GPA grade that you realted to teh letter grade you have inputted.
After that is will tell you if you recieved any latin honors. Then I decided to
add a while loop to have the user input if they want to continue or not. 

*/ 

//Library//Directories 
#include <iostream>
using namespace std;

// Start of the function. Called everytime a grade us inputted. For each letter there will be a return value. 
    double covertingGrades(char grades) {

        if (grades == 'A') { // A will be 4 points toward gpa
            return 4.0;
        }

        else if (grades == 'B') { // B will be 3 points toward gpa
            return 3.0;
        }

        else if (grades == 'C') { // C will be 2 points toward gpa
            return 2.0;
        }
      
        else if (grades == 'D') { // D will be 1 points toward gpa
            return 1.0;
        }

        // If the person inputs F or anything else it will put a 0 value. 
        else {
            return 0.0;
        }
     
    }

    int main()
    {
        // Adding while look so the user can continue if they want or exit with no.
        while (1) 
        {
            // Declaring my varibale within main.
            double gradesSum = 0.0;
            char gradeOne, gradeTwo, gradeThree, gradeFour;
            double studentGpa;

            // Telling the users what they are suppose to input
            cout << "When inputting an grade, it will need to be an A, B, C, D or F \n" << endl;

            //This section is where it ask you for your grades. Everytume a grade in inputted, it will be pushed to the function. I have no idea why it is adding the grades: I did something and it got added?
            cout << "Please input your first grade: " << endl;
            cin >> gradeOne;
            gradesSum += covertingGrades(gradeOne);

            cout << "Please input your Second grade: " << endl;
            cin >> gradeTwo;
            gradesSum += covertingGrades(gradeTwo);

            cout << "Please input your third grade: " << endl;
            cin >> gradeThree;
            gradesSum += covertingGrades(gradeThree);

            cout << "Please input your fourth grade: " << endl;
            cin >> gradeFour;
            gradesSum += covertingGrades(gradeFour);

            studentGpa = gradesSum / 4; // Math for average. 

            cout << "\nYour GPA is: " << studentGpa << endl; //Outputing the students gpa

            //True false statements area. 
            bool summaCumLaude = studentGpa >= 3.9; //greater than or equal to 3.9 is summa cum laude
            bool magnaCumLaude = studentGpa >= 3.8 && studentGpa < 3.9; //3.8 to 3.89 is magna cum laude
            bool cumLaude = studentGpa >= 3.65 && studentGpa < 3.8; //3.65 to 3.79 is cum laud
            bool withoutHonors = studentGpa < 3.65; //below 3.65 there are no honors given

            // Will print out the statements and then check to see if the statement above where true. The boolalpha is what helps with inputting the true or false out. 
            cout << "\nGraduating summa Cum Laude is "
                << boolalpha
                << summaCumLaude << endl;

            cout << "Graduating Magna Cum Laude is "
                << boolalpha
                << magnaCumLaude << endl;

            cout << "Graduating Cum Laude is "
                << boolalpha
                << cumLaude << endl;

            cout << "Graduating without honors is "
                << boolalpha
                << withoutHonors << endl;

            //Section where the looping content is bing initated at the end. 
            string q;
            cout << endl << "Enter \"yes\" to repeat and \"no\" to quit: ";
            cin >> q;
            if (q == "yes") //If yes then it continues the loop
                continue;
            if (q == "no") //If no then it will break the loops
                cout << endl << "Have a wonderul rest of the day. Good Bye! ";
                break; //break the loop when no is sent.
        }
        return 0;
    }
