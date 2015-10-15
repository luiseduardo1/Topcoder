public class WidgetRepairs {

	public int days(int[] arrivals, int numPerDay)
	{
		int operatingDays = 0;
		int widgetsLeft = 0;
		
		for(int i = 0; i < arrivals.length ; i++)
		{
			if (i == (arrivals.length - 1))
			{
				operatingDays += (arrivals[i] / numPerDay);
				
				if ((arrivals[i] % numPerDay) > 0)
				{
					operatingDays += 1;
				}		
			}
			
			else
			{
				if (arrivals[i] > 0)
				{
					operatingDays += ((arrivals[i] + widgetsLeft) / numPerDay);
					widgetsLeft = (arrivals[i] % numPerDay) ;
				}
				
				if (widgetsLeft > 0)
				{
					arrivals[i+1] += widgetsLeft;
				}
				
			}
			
		}
		
		return operatingDays;
	}
}
