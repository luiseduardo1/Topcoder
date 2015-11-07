/*
 * TopCoder
 * Single Round Match: 236
 * Division: 1
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1585
 */

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
