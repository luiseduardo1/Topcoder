/*
 * TopCoder
 * Single Round Match: 146 
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1692
 */

import static java.lang.Math.*;
import java.util.*;

public class YahtzeeScore {
	public int maxPoints(int[] toss)
	{
		int nbOne = 0;
		int nbTwo = 0;
		int nbThree = 0;
		int nbFour = 0;
		int nbFive = 0;
		int nbSix = 0;
				
		for(int i = 0 ; i < toss.length ; i++)
		{
			if (toss[i] == 1){
				nbOne++;
			}
			if (toss[i] == 2){
				nbTwo++;
			}
			if (toss[i] == 3){
				nbThree++;
			}
			if (toss[i] == 4){
				nbFour++;
			}
			if (toss[i] == 5){
				nbFive++;
			}
			if (toss[i] == 6){
				nbSix++;
			}
		}
		
		return max(nbOne*1,(max(nbTwo*2,(max((nbThree*3),(max((nbFour*4),max((nbFive*5),(nbSix*6)))))))));
		
	}
}


