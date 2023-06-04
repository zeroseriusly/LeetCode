import java.util.*;

public class SortByFrequency {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Create a map to store the frequency of each element
        Map<Integer, Integer> freqMap = new HashMap<>();
        for (int i = 0; i < n; i++) {
            int count = freqMap.getOrDefault(arr[i], 0);
            freqMap.put(arr[i], count + 1);
        }

        // Create a list to store the elements in descending order of frequency
        List<Integer> sortedList = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : freqMap.entrySet()) {
            int key = entry.getKey();
            int value = entry.getValue();
            for (int i = 0; i < value; i++) {
                sortedList.add(key);
            }
        }

        // Sort the list by frequency in descending order
        Collections.sort(sortedList, (a, b) -> freqMap.get(b) - freqMap.get(a));

        // Print the sorted list
        for (int i = 0; i < sortedList.size(); i++) {
            if (i > 0) {
                System.out.print(" ");
            }
            System.out.print(sortedList.get(i));
        }
        System.out.println();
    }
}
