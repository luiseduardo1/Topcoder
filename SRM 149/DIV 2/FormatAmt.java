// SRM 149 - DIV 2

public class FormatAnt {

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

