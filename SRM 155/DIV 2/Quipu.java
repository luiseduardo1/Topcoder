/*
 * TopCoder
 * Single Round Match: 155 
 * Division: 2
 * Level:1
 * Points: 250
 * Description: http://community.topcoder.com/stat?c=problem_statement&pm=1686
 */


public class Quipu {
	public int readKnots(String knots){
		
		int finalNumber = 0;
		int currentDigit = 0;
		
		for(int i = 1; i< knots.length(); i++){
			
			if (knots.charAt(i) == 'X'){
				currentDigit ++;
			}
			else{
				finalNumber *= 10;
				finalNumber += currentDigit;
				currentDigit = 0;
			}
		}
		return finalNumber;
	}
}

class Test{
	public static void main(String[] args) {
		Quipu quipuTest = new Quipu();
		String knotsTest = "-XX-XXXX-XXX-";
		System.out.println(quipuTest.readKnots(knotsTest));
		System.out.println("Tests finis");		
	}
}