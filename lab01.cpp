#include <iostream>
//Student Name: Ming Kit Choy
//Student Number: C00246492
//Date: Tue 4 Oct 2022

bool isLeapYear(int year)
{
	if(year % 4 == 0)  //if the year can be /4 , which is leap
	{
		if(year % 100 == 0) 
	    {
		    if (year % 400 == 0)  
		    {
			    return true; //if year can be /100 and /400 both, which is leap
		    }
		return false;	//otherwise no
	    }
	return true;    // is leap
	}
	else{
		return false;    // not leap
	}
}

int Reversed(int testNumber)
{
	int reversed=0;
	int current;

	while(testNumber!=0)
	{
		current = testNumber % 10;
		reversed = reversed * 10 + current;
		testNumber = testNumber / 10;
	}
	return reversed;
}

bool isAPalindrome(int testNumber)
{
	int reversed=0;
	int current;
	int keep;
	keep = testNumber;
	while(testNumber!=0)
	{
		current = testNumber % 10;
		reversed = reversed * 10 + current;
		testNumber = testNumber / 10;
	}
	if(reversed == keep )
	{
	    return true;
	}
	else
	{
	    return false;
	}
}
bool isAPrimeNumber(int numbertoTest) //3
{
    int factor=0;
    for(int i = numbertoTest; i < 1 ;i--)
    {
        if(numbertoTest % i == 0)
        {
            factor++;
        }
    }
    if(factor > 2)
	{
	    return false;
	}
	else
	{
	    return true;
	}
}

int input5CharsConvertToInt()
{
	int returnInt = 0;
	char inputChar;
	for (int i = 0; i < 5; i++)
	{
	    std::cin >> inputChar;
		//check if its a digit.
		if (isdigit(inputChar))
		{
	        returnInt = returnInt * 10 + inputChar - 48;
		}
		else
		{
		    std::cout << "This is not a digit \n" ;
		   	int returnInt = 0;
		    return returnInt;
		}
	/*	std::cin >> inputChar;
		//check if its a digit.
		if (isdigit(inputChar))
		{
		    int a = inputChar - 48;
		    std::cout << a;
		    std::cout << "<--This is int  \n";

		}
		else
		{
		    std::cout << "This is not a digit \n" ;
		}
		//do something
*/
	}
	return returnInt;
}

int convertBinarytoDecimal(int binaryNumber)
{ 
    //decimal = 1*(2^2) + 1*(2^1) + 0*(2^0) = 6
    //decimal = 1*(2^2) + 1*(2^1) + 1*(2^0) = 7
	int num = binaryNumber;
	int decimal = 0;
	int currentNumber = 1; // the base of 2^0 =1
	
	while(num!=0){
	    int lastDigit = num % 10;
	    num = num /10;
	    
	    decimal = decimal + lastDigit * currentNumber;
	    
	    currentNumber = currentNumber * 2;
	}
	return decimal;
}
void drawRightAngledTriangle()
{
    //char cell= 'A';
    //String 
    int row = 4;
    for (int i = 0; i <= row; i++)
    {
        for (int NoA = 1; NoA <= i ; NoA++)
        {
            std::cout << "A";
        }
        std::cout << "\n";
    }
}
void drawIsocelesTriangle()
{
    std::cout << "IsocelesTriangle";
    int row = 4;
    for (int i = 0; i <= row; i++)
    {
        for (int NoA = 1; NoA <= i ; NoA++)
        {
            std::cout << "A";
        }
        std::cout << "\n";
    }
    int brow = 3;
    for (int j = brow; j >= 1; j--)
    {
        for (int NoA = j; NoA > 0 ; NoA--)
        {
            std::cout << "A";
        }
        std::cout << "\n";
    }


    /*int row = 7;
    for (int i = 0; i <= row; i++)
    {
        if (i<5)
        {
            for (int NoA = 1; NoA <= i ; NoA++)
            {
               std::cout << "A";
            }
        }
        else{
            int j = i/2-1;
            
            for (int NoA = 1; NoA <= j ; NoA--)
            {
               std::cout << "A";
            }
        }
        
        std::cout << "\n";
    }*/
    
}
void drawIsocelesTriangle2()
{
    int row = 4;
    for (int i = 0; i <= row; i++)
    {
        for (int NoA = 1; NoA <= i ; NoA++)
        {
            std::cout << "A";
        }
        std::cout << "\n";
    }
    int brow = 3;
    for (int j = brow; j >= 1; j--)
    {
        for (int NoA = j; NoA > 0 ; NoA--)
        {
            std::cout << "A";
        }
        std::cout << "\n";
    }
}
// changing anything below here equals 0 marks!!!!!!!!!

int main()
{
	std::cout << "Leapyear" << std::endl;
	if (!isLeapYear(1700))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isLeapYear(1600))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isLeapYear(2016))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "NumberReversed" << std::endl;
	if (Reversed(123) == 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	if (Reversed(1) == 1)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (Reversed(1234) != 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	std::cout << "Palindrome" << std::endl;
	if (isAPalindrome(1))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isAPalindrome(121))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (!isAPalindrome(1213))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "Prime Number" << std::endl;
	if (isAPrimeNumber(3))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isAPrimeNumber(2147483647))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (!isAPrimeNumber(4))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "Binary to Decimal" << std::endl;
	if (convertBinarytoDecimal(110) == 6)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (convertBinarytoDecimal(111) == 7)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "5 chars to int" << std::endl;
	int convertedInt = input5CharsConvertToInt();
	std::cout << convertedInt << std::endl;

	std::cout << "Triangles" << std::endl;
	drawRightAngledTriangle();
	drawIsocelesTriangle();
	std::cout << "Triangle Extra" << std::endl;
	drawIsocelesTriangle2();

}