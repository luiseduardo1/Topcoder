
// {{{ VimCoder 0.3.6 <-----------------------------------------------------
// vim:filetype=java:foldmethod=marker:foldmarker={{{,}}}

import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

// }}}

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

