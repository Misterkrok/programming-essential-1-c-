using ClassLibrary1;
namespace ConsoleApp2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a = 5;
            int b = 9;
            /* string naam = Console.ReadLine();
             naam = null;

             if (naam == null)
             {
                 naam = "onbekend";
             }


             Console.WriteLine($"Hello, {naam?.ToUpper()}");*/

            Console.WriteLine($"a = {a} and b = {b}");

            Helper.Wissel(ref a, ref b);

            Console.WriteLine($"a = {a} and b = {b}");
        }
    }
}