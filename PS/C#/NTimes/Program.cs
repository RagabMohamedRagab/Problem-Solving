using System;
namespace NTimes
{
    class Program
    {
        public static void Print(int N, char c)
        {
            for (int i = 0; i < N; i++)
            {
                System.Console.Write($"{c} ");
            }
            System.Console.WriteLine();
        }
        private static void Main(string[] args)
        {
            int size = Int32.Parse(Console.ReadLine());
            string[] Arr = null;
            int a = 1;
            while (a <= size)
            {
                Arr = Console.ReadLine().Split(' ');
                int N = Int32.Parse(Arr[0]);
                char C = Char.Parse(Arr[1]);
                Print(N, C);
                a++;
            }
        }
    }
}