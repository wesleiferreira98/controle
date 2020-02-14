using System;
using System.Collections.Generic;
class atividade{
	static void Main(){
		List<string>carros= new List<string>();
		string[] carros2= new string[4];
		carros.Add("Golf");
		carros.Add("HRV");
		carros.Add("Veloster");
		carros.Add("Fusca");

		carros.CopyTo(carros2,0);
		if(carros.Contains("Golf")){
			Console.WriteLine("O elemento está na lista.");
		}else{
			Console.WriteLine("O elemento não está na lista.");
		}
		foreach(string c in carros2){
			Console.WriteLine("O carro é: {0}",c);

		}
		string c1;
		Console.WriteLine("Digite o elemento a ser pesquisado: ");
		c1=Console.ReadLine();
		int pos=carros.IndexOf(c1);
		Console.WriteLine("O elemento {0} está na possição {1} ", c1,pos);
	}
}