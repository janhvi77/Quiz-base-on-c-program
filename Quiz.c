#include <stdio.h>
    #include<time.h>
    int main() {
    char answer;
    int score = 0;
    int total ;
    time_t start,end;
    
    printf("🎉Welcome to the Basic C Programming Quiz🎉!\n\n");

     time(&start);
    // Question 1
    printf("1) Which of the following is the correct syntax to declare a variable in C?\n");
    printf("A. int x\nB. var x\nC. x int\nD. flot x\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is A. int x\n\n");
    }

    // Question 2
    printf("2) Which header file is needed to use the printf() function?\n");
    printf("A. stdlib.h\nB. string.h\nC. stdio.h\nD. math.h\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C. stdio.h\n\n");
    }

    // Question 3
    printf("3) What is the output of: printf(\"%%d\", 10); ?\n");
    printf("A. %%d\nB. 10\nC. d\nD. Error\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B. 10\n\n");
    }

    // Question 4
    printf("4) Which data type is used to store decimal numbers in C?\n");
    printf("A. int\nB. char\nC. float\nD. double\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C. float\n\n");
    }

    // Question 5
    printf("5) What is the keyword to define a constant value?\n");
    printf("A. const\nB. static\nC. define\nD. fixed\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is A. const\n\n");
    }

    // Question 6
    printf("6) What does 'int main()' signify in C?\n");
    printf("A. End of program\nB. Entry point of program\nC. Comment section\nD. Preprocessor\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B. Entry point of program\n\n");
    }

    // Question 7
    printf("7) Which of the following is NOT a loop in C?\n");
    printf("A. for\nB. do-while\nC. repeat-until\nD. while\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C. repeat-until\n\n");
    }

    // Question 8
    printf("8) Which symbol is used for comments in C?\n");
    printf("A. //\nB. **\nC. ##\nD. @\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is A. //\n\n");
    }
    
    
   float percentage = score * 12.5;
   printf("Percentage: %.2f%%\n", percentage);
    
    time(&end);
    double time_taken = difftime(end,start);
    printf("time taken : % 0f,seconds,time_taken\n");
    
    if (score == 8)
        printf("Excellent!👏🏻🎉\n");
    else if (score >= 6)
        printf("Great job! You're learning well 👍🏻.\n\n");
    else if (score >= 4)
        printf("Not bad, keep practicing🙂.\n\n");
    else
        printf("You need more practice. Don't give up!\n");

    return 0;
}