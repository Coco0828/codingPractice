import java.util.ArrayList;

public class Sentence {
    private String sentence;

    public Sentence(String input){
        sentence = input;
    }

    public int countWords(){
        int total = 0;
        for(int i = 0; i < sentence.length(); i ++){
            if(sentence.substring(i,i + 1).equals(" "))
                total += 1;
            
        }
        return total+1;

    }
    
    public ArrayList<Integer> getBlankPositions(){
        // ArrayList<Integer> posList = new ArrayList<Integer>(); -> res = []
        ArrayList<Integer> posList = new ArrayList<Integer>();
        for(int i = 0;i < sentence.length();i ++){
            // sentence.substring(i,i + 1) -> sentence[i] -> 獲得一個字元
            // xxx.equals(" ") -> xxx == " " -> 比較字元
            if(sentence.substring(i,i + 1).equals(" "))
                // posList.add(i) -> res.append(i)
                posList.add(i);
        }
        return posList;
    }

    public String[] getWords(){
        // use "The bird flew away." as an example
        ArrayList<Integer> posList = getBlankPositions(); // posList = [3,8,13] 
        int numWords = countWords(); // get words amount 4
        String[] wordArray = new String[numWords]; // use words amount to define array
        for(int i = 0;i < numWords;i ++){ // 0~4
            // posList = [3,8,13] 
            if(i == 0){
                if(posList.size() == 0){
                    wordArray[i] = sentence;
                }else{
                    wordArray[i] = sentence.substring(0,posList.get(0));// The
                }
            }else if(i == posList.size()){
                wordArray[i] = sentence.substring(posList.get(i-1) + 1);// away.
            }else{
                wordArray[i] = sentence.substring(posList.get(i-1)+1,posList.get(i));
                // bird
                // flew
            }
        }
        return wordArray;
    }
}
