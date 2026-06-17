import java.util.ArrayList;
import java.util.List;

public class LanguageList {
    private final List<String> languages = new ArrayList<>();

    public boolean isEmpty() {
        boolean empty = true;
      if (languages.size() > 0){
         empty = false;
      }return empty; 
    }

    public void addLanguage(String language) {
       languages.add(language);
    }

    public void removeLanguage(String language) {
        languages.remove(language);
    }

    public String firstLanguage() {
       return languages.get(0);
    }

    public int count() {
        return languages.size();
    }

    public boolean containsLanguage(String language) {
       boolean yes = languages.contains(language);
        return yes;
    }

    public boolean isExciting() {
       boolean yes = containsLanguage("Java") || containsLanguage("Kotlin");
        return yes;
    }
}
