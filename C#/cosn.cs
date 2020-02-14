using System;
class veiculo{
	private string tipo;
	private int qtd_rodas;
	private string modelo;
	private float preco;
	private bool ligado;
	public veiculo(){
		tipo= "Não informado.";
		qtd_rodas=0;
		modelo= "Não informado.";
		preco=0;
	}
	public veiculo(int rodas){
		qtd_rodas=rodas;
	}


	public void set_dados(){
		System.Console.WriteLine("Digite o tipo de veiculo");
		tipo=System.Console.ReadLine();

		System.Console.WriteLine("digite a quantidade de rodas de {0}", tipo);
		qtd_rodas=int.Parse(System.Console.ReadLine());

		System.Console.WriteLine("digite o modelo  de {0}", tipo);
		modelo=System.Console.ReadLine();

		System.Console.WriteLine("digite o preço base de {0}", tipo);
		preco=int.Parse(System.Console.ReadLine());
	}
	public void print_dados(){
		System.Console.WriteLine("O tipo de veiculo {0}", tipo);
		System.Console.WriteLine("A quantidade de rodas de {0}", qtd_rodas);
		System.Console.WriteLine("O modelo  de {0}", modelo);
		System.Console.WriteLine("O preço base  de {0}", preco);



	}
	public string ret_ligado(){
		return (ligado?"sim":"não"); 
		
	}
	public float soma(){
		 return preco+200;
	}
	~veiculo(){

	}
	public int ret_rodas(){
		return qtd_rodas;
	}
}
class carro:veiculo{
	public float soma2(){
		float s;
		s=soma()*3;
		return s;

	}
	public carro():base(4){
		ret_ligado();

	}

}
class carroLuxo:carro{
	public float soma3(){
		float s;
		s=soma2()*123;
		return s;

	}
	public carroLuxo(){
		ret_ligado();

	}

}
class moto:veiculo{
	public float soma2(){
		float s;
		s=soma();
		return s*2;

	}

}

class cosn{
	static void Main(){
		carro x= new carro();
		moto y= new moto();
		carroLuxo z= new carroLuxo();
		x.set_dados();
		x.print_dados();
		System.Console.WriteLine("O preço do carro é {0}",x.soma2());

		y.set_dados();
		y.print_dados();
		System.Console.WriteLine("O preço do carro é {0}",y.soma2());

		z.set_dados();
		z.print_dados();
		System.Console.WriteLine("O preço do carro é {0}",z.soma3());
	}
}