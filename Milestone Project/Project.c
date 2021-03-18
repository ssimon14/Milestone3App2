#include <stdio.h>

/* question1, question2, and question3 are being declared as a function so that the main function can call on them. They are set as void so that their end values do not interfere with eachother*/
void question1();
void question2();
void question3();
void question4();
void grading();

/* Define the array that will keep track of points */
int PointCounter[4];

/*start main function*/
int main()
{

	/* The main function calls on each of these functions to run. First question 1 will run, then question2, and finally question3 */
	question1();
	question2();
	question3();
	question4();
	grading();

	/* The ending value of the program will be set to 0 */
	return 0;
}
/* Start Function 1 */
void question1()
{
	/* all the variables are being defined for the function. Variable answer is the value that the player will control */
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int attempts;
	int answer;
	/* Start of the for loop. It gives the player 3 attempts to enter the correct answer. Each wrong answer subtracts 1 attempt. */
	for (int attempts = 4; attempts > 0; --attempts)
	{
		/* These print statements display the question#, the question, the options, and where to enter their answer */
		printf("\n\nQuestion1");
		printf("\n What type of operator is && ?\n");
		printf("\n1. Arithmetic Operator\n", a);
		printf("\n2. Relational Operator\n", b);
		printf("\n3. Logical Operator\n", c);
		printf("\n4. Bitwise Operator\n", d);
		printf("\nEnter the correct number and press enter : ");
		/* the scanf_s statement registers the players input as the value of variable answer */
		scanf_s("%d", &answer);
		/* The if statement determines whether the value of answer is equivalent to the correct answer. If not, the following code will run. If it is, the code following the else statement will run */
		if (answer != c)
		{
			printf("\n Incorrect Answer, Try Again! \n");
			PointCounter[0] = attempts;
		}
		else if (answer == c)
		{
			PointCounter[0] = attempts;
			printf("\n Correct Answer! \n");
			break;
		}
		/* The break statement is placed here so that if the correct answer is given, the leftover attempts are not used. The loop is broken and the player moves on the question2 */
	}
}
/* Start Function 2 */
void question2()
{
	/* All variables must be defined again. They do not carry over from function 1 */
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int attempts;
	int answer;
	/* The for statement is identical to the one in question1. 3 attempts, every wrong answer subtracts 1 attempt */
	for (attempts = 4; attempts > 0; --attempts)
	{
		printf("\nQuestion 2\n");
		printf("What does the for loop do?\n");
		printf("\n1. Repeats a statement or group of statements while a given condition is true. It tests the condition before executing the loop body\n", a);
		printf("\n2. Executes a sequence of statements multiple times and abbreviates the code that manages the loop variable\n", b);
		printf("\n3. It is more like a while statement, except that it tests the condition at the end of the loop body\n", c);
		printf("\n4. You can use one or more loops inside any other while, for, or do.. while loop\n", d);
		printf("\nEnter the correct number and press enter : ");
		scanf_s("%d", &answer);
		/* The correct answer is b. If the value of answer is not the same value as b, then "Incorrect Answer, Try Again!" will display */
		if (answer != b)
		{
			printf("\n Incorrect Answer, Try Again! \n");
			PointCounter[1] = attempts;
		}
		else if (answer == b)
		{
			PointCounter[1] = attempts;
			printf("\n Correct Answer! \n");
			break;
		}
	}
}
/* Start Function 3 */
void question3()
{
	/* Variables are defined once again */
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int attempts;
	int answer;
	/* Same loop as the first two questions */
	for (attempts = 4; attempts > 0; --attempts)
	{
		printf("\nQuestion3\n");
		printf("\nWhat data type is an array type?\n");
		/* Each option is assigned with a variable. Option 1 is assigned variable a, which has the value of 1. */
		printf("\n1. Basic Type\n", a);
		printf("\n2. Enumerated Type\n", b);
		printf("\n3. The type void\n", c);
		printf("\n4. Derived type\n", d);
		printf("\nEnter the correct number and press enter : ");
		scanf_s("%d", &answer);
		/* d=4 so the entered value must be 4 in order for the statements after else to run. */
		if (answer != d)
		{
			printf("\nIncorrect Answer, Try Again! \n");
			PointCounter[2] = attempts;
		}
		else if (answer == d)
		{
			PointCounter[2] = attempts;
			printf("\n Correct Answer! \n");
			break;
		}
	}
}
/* Start function 4 */
void question4()
{
	/* Variables for the function are being defined */
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int attempts;
	int answer;
	/* looping to limit attempts of answering question */
	for (attempts = 4; attempts > 0; --attempts)
	{
		printf("\nQuestion4\n");
		printf("\nWhich symbol is used to declare a pointer?\n");
		/* Each option is assigned with a variable. Option 1 is assigned variable a, which has the value of 1. */
		printf("\n1. *\n", a);
		printf("\n2. &\n", b);
		printf("\n3. &&\n", c);
		printf("\n4. ^\n", d);
		printf("\nEnter the correct number and press enter : ");
		scanf_s("%d", &answer);
		/* d=4 so the entered value must be 4 in order for the statements after else to run. */
		if (answer != a)
		{
			printf("\nIncorrect Answer, Try Again! \n");
			PointCounter[3] = attempts;
		}
		else if (answer == a)
		{
			PointCounter[3] = attempts;
			printf("\n Correct Answer! \n");
			break;
		}
	}
}

/* Start grading function */
void grading()
{
/* Defining the variables that will be used to add the element values together */
	int e;
	int grade = 0;
/* This loop goes through elements 0-3 of the PointCounter array and adds the values to grade variable. */
	for (e = 0; e < 4; e++)
	{
		grade = grade + PointCounter[e];
	}
/* The print command displays the player's grade */
	printf("\nYour grade is : %d/16\n", grade);
}