/*
 * TopCoder
 * Single Round Match: 144 
 * Division: 2
 * Level:1
 * Points: 250
 * Description: https://community.topcoder.com/stat?c=problem_statement&pm=1708&rd=4515
 */

public class Time
{
    public String whatTime(int seconds)
    {
        int nbHours = seconds / 3600;
        int nbMinutes = (seconds % 3600)/ 60;
        int nbSeconds = seconds % 60;
        return nbHours + ":" + nbMinutes + ":" + nbSeconds;
    }
}
