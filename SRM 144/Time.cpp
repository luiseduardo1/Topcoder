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