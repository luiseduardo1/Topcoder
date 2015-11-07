/*
 * TopCoder
 * Single Round Match: 149 
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1313
 */

public class FormatAmt
{
	public String amount(int dollars, int cents)
	{		
		String strCents =  String.valueOf(cents);
		String result = "." + ((strCents.length() > 1) ? "":"0") + strCents;

		while( dollars > 0)
		{
			result = String.valueOf(dollars % 1000) + result;
			
			if ((dollars / 1000) > 0)
			{
				if ((dollars % 1000) < 100)
				{
					result = "0" + result;
				}
				if ((dollars % 1000) < 10)
				{
					result = "0" + result;
				}
			}
			
			dollars /= 1000;
			
			if (dollars > 0)
			{
				result = "," + result;
			}
		}
		return "$"+ result;
	}
}

