/*
 * TopCoder
 * Single Round Match: 152
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1765
 */


import java.lang.Math;

// First version of the FixedPointTheorem class
public class FixedPointTheorem 
{	
	public double logisticFunction(double X, double R)
	{
		return (R * X * (1 - X));
	}
	
	public double cycleRange(double R)
	{
		double highestValue = 0;
		double lowestValue = 1;
		double functionValue = 0.25;
		
		for(int i = 0; i < 200000 ; i++)
		{
			functionValue = logisticFunction(functionValue, R);
		}
		
			
		for(int j = 0; j < 1000; j++)
		{
			functionValue = logisticFunction(functionValue, R);
			if (functionValue < lowestValue)
			{
				lowestValue = functionValue;
			}
			else if (functionValue > highestValue)
			{
				highestValue = functionValue;
			}
		}
		return Math.abs(highestValue - lowestValue);
	}
	
}

class Test{
	public static void main(String[] args){
		FixedPointTheorem fixedPointTheoremTest =  new FixedPointTheorem();
		double R = 3.5689;
		System.out.println(fixedPointTheoremTest.cycleRange(R));
		System.out.println("Finish tests");
	}
}