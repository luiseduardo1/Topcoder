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

