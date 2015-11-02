// First version of the PrefixCode class
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
class Test{
	public static void main(String[] args){
		PrefixCode prefixCodeTest =  new PrefixCode();
		String[] a = {"no", "nosy", "neighbors", "needed"};
		System.out.println(prefixCodeTest.isOne(a));
		System.out.println("Finish tests");
	}
}
