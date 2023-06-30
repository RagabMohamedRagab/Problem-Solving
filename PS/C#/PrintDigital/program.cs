using System;

class Program
{
    static void PrintDigits(int n)
    {
        if (n < 10)
        {
            Console.Write(n + " ");
        }
        else
        {
            PrintDigits(n / 10);
            Console.Write(n % 10 + " ");
        }
    }

    static void Main()
    {
        int t = int.Parse(Console.ReadLine());

        for (int i = 0; i < t; i++)
        {
            int n = int.Parse(Console.ReadLine());

            PrintDigits(n);
            Console.WriteLine();
        }
    }
}
