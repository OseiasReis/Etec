﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Aula1_Exemplo4
{
    class Program
    {
        static void Main(string[] args)
        {
            string nome, cidade;
            int idade;

            Console.Write("Digite seu nome: ");
            nome = Console.ReadLine();

            Console.Write("Digite sua idade: ");
            idade = int.Parse(Console.ReadLine());

            Console.Write("Digite o nome da cidade que você nasceu: ");
            cidade = Console.ReadLine();

            Console.WriteLine("Seu nome: " + nome);
            Console.WriteLine("Sua idade: " + idade);
            Console.WriteLine("Cidade: " + cidade);

            Console.ReadKey();
        }
    }
}
