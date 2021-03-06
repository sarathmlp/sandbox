class ArrayShift
{
    public static void main(String[] args)
    {
        System.out.print("Enter the string: ");
        String input = System.console().readLine();
        char[] arr = input.toCharArray();
        String outString = FindNChange(arr);

        System.out.println("The string is: " + outString);
    }
    public static String FindNChange(char[] input)
    {
        int count = 0;
        for (int i=0; i < input.length; ++i)
        {
            if (input[i] != '0')
            {
                input[count++] = input[i];
            }
        }
        while (count < input.length)
            input[count++] = '0';
        return new String(input);
    }
}
