/*
 * TopCoder
 * Single Round Match: 151
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1700
 */

// Upgrade version of the class
public class PrefixCode
{
	public String isOne(String[] words)
	{
		for(int i = 0 ; i < words.length - 1 ; i++)
		{
			for(int j = i + 1; j < words.length; j++ )
			{
				if (words[i].startsWith(words[j]))
				{
					return ("No, " + j);
				}
				else if (words[j].startsWith(words[i]))
				{
					return ("No, "+ i);
				}
			}
		}
		
		return ("Yes");
	}
}



// First version of the class
/*
public class PrefixCode {

	public boolean isSubString(String A, String B)
	{
		boolean subString = true;
		
		char[] charsA = A.toCharArray();
		char[] charsB = B.toCharArray();
		
		for(int i = 0 ; i < charsA.length ; i++)
		{
			if(charsA[i] != charsB[i])
			{
				subString = false;
			}
		}
		return subString;
	}
	
	public String isOne(String[] words)
	{
		int index = 0;
		boolean isPrefix = true;
		
		if (words.length == 1)
		{
			isPrefix = true;
		}
		
		else
		{
			mainloop :
			for(int i = 0; i < words.length ; i++)
			{
				for(int j = 0; j < words.length ; j++)
				{
					if ( i != j && words[i].length() <= words[j].length() && isSubString(words[i], words[j]))
					{
						isPrefix = false;
						index = i;
						break mainloop;
					}
				}
			}
		}
		
		if (!isPrefix)
		{
			return "No, " + index;
		}
		else
		{
			return "Yes";
		}

	}
	
}

*/

class Test{
	public static void main(String[] args){
		PrefixCode prefixCodeTest =  new PrefixCode();
		String[] a = {"no", "nosy", "neighbors", "needed"};
		System.out.println(prefixCodeTest.isOne(a));
		System.out.println("Finish tests");
	}
}
