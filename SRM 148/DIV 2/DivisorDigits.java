/*
 * TopCoder
 * Single Round Match: 148 
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1741
 */

public class DivisorDigits
{
	public int howMany(int number)
	{
		int digitCounter = 0;
		String strNumber = String.valueOf(number);		
		char[] digits = strNumber.toCharArray();
		int numberLength = digits.length;
		
		for(int i = 0; i < numberLength ; i++)
		{
			if ((number % Character.getNumericValue(digits[i])) == 0)
			{
				digitCounter++;
			}
		}
		return digitCounter;
	}
}

