public class Merge {
    // nb merge sort is quite fast but space intensive so this is a small check to
    // ensure the recurssion stops immediatley we arrive at a sorted array
    public static boolean isSorted(int arr[], int start, int end) {
        for (int i = start; i < end - 1; i++) {

            if (arr[i] > arr[i + 1])
                return false;
        }
        return true;/// this checking doesn't check for the possibility that all array are the same
    }

    public static void merge(int arr[], int aux[], int lo, int mid, int hi) {
        assert isSorted(arr, lo, mid);// THESE ASSERTIONS ONLY HELP IN DEBUGGING PURPOSES WILL THROW AN EXCEPTION
        assert isSorted(arr, mid + 1, hi);
        for (int k = lo; k <= hi; k++)
            aux[k] = arr[k];// perfom the copy operation first
        int i = lo, j = mid + 1;

        /// THIS CODE CHECKS FOR ALL THE POSSIBILITIES WE MAY ENCOUNTER IN MERGING
        for (int k = lo; k <= hi; k++) {
            if (i > mid) // POSSIBILITY THAT WE HAVE INCREASE THE LOW MORE THAN THE THE LEFT EDGE
                arr[k] = aux[j++];
            else if (j > hi)// POSSIBILITY THAT WE HAVE INCREASE THE RIGHT POINTER MORE THAN THE RIGHT EDGE
                arr[k] = aux[i++];
            else if (aux[j] < aux[i])// POSSIBILITY THAT THE VALUE BEING CONSIDERED ON THE RIGHT EDGE IS LESS THAN
                                     // THAT OF THE RIGHT
                arr[k] = aux[j++];
            else
                arr[k] = aux[i++];// POSSIBILITY THAT THE VALUE ON THE RIGHT EDGE IS LESS THAN THAT ON THE LEFT
        }
        assert isSorted(arr, lo, hi);

    }

    public static void sort(int[] arr, int[] aux, int lo, int high) {
        if (high <= lo)
            return;// BASE EXIT CONDITION FOR RECURSSION
        int mid = lo + (high - lo) / 2;
        sort(arr, aux, lo, mid);
        sort(arr, aux, mid + 1, high);
        merge(arr, aux, lo, mid, high);

    }

    public static void sort(int[] arr) {
        int[] a = new int[arr.length];
        sort(arr, a, 0, arr.length - 1);
    }

    public static void main(String[] args) {
        int[] arr = { 19, 2, 43, 5, 1, 3, 6,48 };
        sort(arr);
        for (int num : arr) {
            StdOut.print(num);
            System.out.print(" ");
        }
    }

}
