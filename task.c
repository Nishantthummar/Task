#include <stdio.h>
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
void main()
{
	char cInput; //!< for select opration user input
	float fInput1,fInput2,fresult; //!< for user input fInput1 & fInput2 & store result fresult
	char cinquit; //!< for select user whether he want continue or not
	
	printf("\nPlease choose your opration");
	printf("\na => add");
	printf("\ns => sub");
	printf("\nm => mul");
	printf("\nd => div");
	printf("\nq => quit");
	
	do 
	{
	
	printf("\nEnter the 1st value = ");
	scanf("%f", &fInput1); //!< get input from user
	printf("\nEnter the 2nd value = ");
	scanf("%f", &fInput2); //!< get input from user
	printf("\nEnter valid opration =");
	scanf("%s", &cInput); //!< get choise from user

	if (cInput == 'a' || cInput == 'A') { //!< check a or A 
		fresult = add(fInput1,fInput2);
		printf("\nsum is %f", fresult);
	} else if (cInput == 's' || cInput == 'S') { //!< check s or S
		fresult = sub(fInput1,fInput2);
		printf("\nsub is %f", fresult);
	} else if (cInput == 'm' || cInput == 'M') { //!< check m or M
		fresult = mul(fInput1,fInput2);
		printf("\nmul is %f", fresult);
	} else if (cInput == 'd' || cInput == 'D') { //!< check d or D
		if (fInput2 !=0) {  //!< check divider zero or not
		fresult = div(fInput1,fInput2);
		printf("\ndiv is %f", fresult);
		}
		else {
			printf("\nInvalid number for divisor");
		}
	} else if (cInput == 'q' || cInput == 'Q') { //!< check q or Q
		printf("\n quit!!!\n");
		
	}
	else
	{
		printf("\nInvalid opration");
	}
	printf("\nDo you want to continues?(y/n) ");
	scanf("%s", &cinquit);


	} while (cinquit == 'y' || cinquit == 'Y'); //!< whether program continue or not 


}
/**
 * add two value which enter by user
 * @param[in] s1 store first value
 * @param[in] s2 store second value
 * @return addition
 */
float add(float s1, float s2)
{
	return (s1 + s2);
}

/**
 * subtract two value which user enter
 * @param[in] s1 store first value
 * @param[in] s2 store second value
 * @return subtraction
 */
float sub(float s1, float s2)
{
	return (s1 - s2);
}

/**
 * multiply two value which user enter
 * @param[in] s1 store first value
 * @param[in] s2 store second value
 * @return multiplication
 */
float mul(float s1, float s2) 
{
	return (s1 * s2);
}

/** divide two number which user enter 
 * @param[in] s1 store first value
 * @param[in] s2 store second value
 * @return division
 */
float div(float s1, float s2)
{
	return (s1/s2);
}

