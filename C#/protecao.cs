using System;
class veiculo{
	private int qtd_rodas;
	private float vel_max;
	private float vel_mim;
	protected bool ligado;
	public void set_dados(){
		System.Console.WriteLine("Digite a quantidade de rodas do veiculo");
		qtd_rodas=int.Parse(System.Console.ReadLine());

		System.Console.WriteLine("Digite a velocidade maxíma do veiculo");
		vel_max=float.Parse(System.Console.ReadLine());

		System.Console.WriteLine("Digite a velocidade mimima do veiculo");
		vel_mim=float.Parse(System.Console.ReadLine());


	}
	public void print_dados(){
		System.Console.WriteLine("A quantidade de rodas do veiculo {0}",qtd_rodas);
		System.Console.WriteLine("A velocidade maxíma do veiculo {0}",vel_max);
		System.Console.WriteLine("A velocidade mimima do veiculo {0}",vel_mim);
	}
	public veiculo(){
		qtd_rodas=0;
		vel_mim=0;
		vel_max=0;
		ligado=false;
	}
	~veiculo(){

	}
}
class carro:veiculo{
	private string nome;
	public carro(string nome){
		this.nome=nome;
	}
	public carro(){
		ligado=true;
	}
	public bool setLigado(){
		return ligado;
	}
}
class protecao{
	static void Main(){
		carro car=new carro("Gol");
		car.set_dados();
		car.print_dados();
		//System.Console.WriteLine(setLigado());

	}
}