public class Twofer {
    public String twofer(String name) {
        String sentence = null;
    if (name != null ){
       if (name.equals("Alice")){
          sentence =  "One for Alice, one for me.";
           }else if (name.equals("Bob")){
             sentence =  "One for Bob, one for me.";
           }
        }
            else sentence ="One for you, one for me.";
        return sentence;
           }
            
       
}
