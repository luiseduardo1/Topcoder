
// {{{ VimCoder 0.3.6 <-----------------------------------------------------
// vim:filetype=java:foldmethod=marker:foldmarker={{{,}}}

import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

// }}}

public class BusinessTasks
{
	public String getTask(String[] list, int n)
	{
		List<String> myList =  new ArrayList<String>();
		for(int i = 0; i < list.length ; i++)
		{
			myList.add(list[i]);
		}
		
		int index = 0;
		while (myList.size() != 1)
		{
			index = ((index + n) - 1) % myList.size();
			myList.remove(index);
		}
		return myList.get(0);
	}
}
