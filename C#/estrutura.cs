/*struct é uma especie de comtener que permite o arramzenamento de dados de diferentes tipos de variaveis e o seus membros são acessados
d
indiretemente e não por referencia. Como não é uma classe essa estrutura não pode ser herdad, mas o uso de construtor é permitido */
using System;
struct carro{
	public string marca;
	public string modelo;
	public string cor;

	public void info(){
		Console.WriteLine("Marca: {0}",this.marca);
		Console.WriteLine("Modelo: {0}",this.modelo);
		Console.WriteLine("Cor: {0}",this.cor);
	}
}

class estrututa{
	static void Main(){
		carro[] c= new carro[5];
		
		c[0].marca="Horda";
		c[0].modelo="HRV";
		c[0].cor="cinza";

		c[1].marca="Hordaq";
		c[1].modelo="HRVa";
		c[1].cor="cinzad";

		c[2].marca="Horda";
		c[2].modelo="HRV";
		c[2].cor="cinza";

		c[3].marca="Horda";
		c[3].modelo="HRV";
		c[3].cor="cinza";

		c[4].marca="Horda";
		c[4].modelo="HRV";
		c[4].cor="cinza";

		for(int i=0; i<5;i++){
			c[i].info();
		}
	}
}