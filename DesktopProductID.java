import java.util.*;

public class DesktopProductID {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get the number of products to consider.
        int numOfProducts = scanner.nextInt();

        // Get the product IDs of the sales of the last N products.
        String productIds = scanner.next();

        // Create a list of desktop product IDs.
        List<String> desktopProductIds = new ArrayList<>();

        // Iterate over the product IDs and add the desktop product IDs to the list.
        for (int i = 0; i < numOfProducts; i++) {
            char productId = productIds.charAt(i);

            // If the product ID is not a laptop product ID, then it is a desktop product
            // ID.
            if (!isLaptopProductId(productId)) {
                desktopProductIds.add(String.valueOf(productId));
            }
        }

        // Print the number of desktop product IDs.
        System.out.println(desktopProductIds.size());
    }

    private static boolean isLaptopProductId(char productId) {
        // The laptop product IDs are "a", "i", "e", "o", "u", "A", "I", "E", "O", "U".
        static final char[] laptopProductIds = { 'a', 'i', 'e', 'o', 'u', 'A', 'I', 'E', 'O', 'U' };
        return Arrays.stream(laptopProductIds).anyMatch(c -> c == productId);
    }
}
