import java.io.*;
import java.util.*;
public class LogLevels {
    
    public static String message(String logLine) {
           String[] info = logLine.split(":");
            info[1] = info[1].trim();
             return info[1];
           
    }

    public static String logLevel(String logLine) {
      String[] info = logLine.split(":");
            info[0] = info[0].replaceAll("[\\[\\]]", "");
            info[0] = info[0].toLowerCase();
             return info[0];
    }

    public static String reformat(String logLine) {
        String[] info = logLine.split(":");
        info[0] = info[0].replaceAll("[\\[]", "(");
        info[0] = info[0].replaceAll("[]//]", ")");
        info[0] = info[0].toLowerCase();
        info[0] = info[0].trim();
        info[1] = info[1].trim();
        return info[1] + " " +info[0];
    }
}
