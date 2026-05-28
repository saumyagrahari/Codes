import java.util.*;
public class GroupAnagrams {
    public static List<List<String>> groupAnagrams(String[] strs) {
        // Map to store sorted string as key and list of anagrams as value
        Map<String, List<String>> map = new HashMap<>();
            for (String s : strs) {
            // Sort the string to use as a key
            char[] chars = s.toCharArray();
            Arrays.sort(chars);
            String key = new String(chars);    
            // Add the string to the corresponding list in the map
            map.computeIfAbsent(key, k -> new ArrayList<>()).add(s);}        
        // Return all grouped anagrams
        return new ArrayList<>(map.values());}
    public static void main(String[] args) {
        String[] strs1 = {"eat","tea","tan","ate","nat","bat"};
        System.out.println(groupAnagrams(strs1));        
        String[] strs2 = {""};
        System.out.println(groupAnagrams(strs2));        
        String[] strs3 = {"a"};
        System.out.println(groupAnagrams(strs3));}}