// {{{ VimCoder 0.3.6 <-----------------------------------------------------
// vim:filetype=java:foldmethod=marker:foldmarker={{{,}}}

import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

// }}}

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