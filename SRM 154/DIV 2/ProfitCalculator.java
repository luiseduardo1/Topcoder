/*
 * TopCoder
 * Single Round Match: 154 
 * Division: 2
 * Level:1
 * Points: 300
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1768
 */

public class ProfitCalculator {

	int percent(String[] items){
		float storePrice = 0;
		float customerPrice = 0;
		
		for(int i = 0; i < items.length ; i++){
			String transaction = items[i];
			customerPrice += Float.valueOf(transaction.substring(0, 6));
			storePrice += Float.valueOf(transaction.substring(7, 13));
		}
	int margin = (int) Math.round(((customerPrice - storePrice)/customerPrice)*100);
	return margin;
	}
}

class Test{
	public static void main(String[] args) {
		ProfitCalculator profitCalculatorTest = new ProfitCalculator();
		String[] itemsTest =  { "012.99 008.73","099.99 050.00","123.45 101.07" };
		System.out.println(profitCalculatorTest.percent(itemsTest));
		System.out.println("Tests finis");
	}
}
