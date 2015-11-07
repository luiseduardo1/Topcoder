/*
 * TopCoder
 * Single Round Match: 145
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1728
 */

public class ImageDithering
{
	public int count(String dithered, String[] screen)
	{
        int counter = 0;

        char[] ditheredColor = dithered.toCharArray();
        Set colorSet =  new HashSet();

        for(int i = 0; i < ditheredColor.length ; i++)
        {
            colorSet.add(ditheredColor[i]);
        }

        for(String row : screen)
        {
            for(int j = 0 ; j < row.length() ; j++)
            {
                if(colorSet.contains(row.charAt(j)))
                {
                    counter++;
                }
            }
        }

        return counter;
	}
}

