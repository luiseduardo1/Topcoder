/*
 * TopCoder
 * Single Round Match: 147 
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1667
 */

import static java.lang.Math.*;

public class CCipher 
{
	public String decode(String cipherText, int shift)
	{
		String decodedMessage = "";
		
		char[] alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();
		int sizeAlphabet = alphabet.length;
		int sizecipherText = cipherText.length();
			
		for(int i = 0 ; i < sizecipherText; i++)
		{
			for(int j = 0; j < sizeAlphabet ; j++)
			{
				if (cipherText.charAt(i) == alphabet[j])
				{
					decodedMessage += alphabet[((j - shift)+ sizeAlphabet)% sizeAlphabet];
				}
			}
		}
		return decodedMessage;
	}
	
}

