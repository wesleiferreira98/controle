using System;
class calculos {
	private int v1;
	private int v2;
	public calculos(){
		v1=0;
		v2=0;
	}
	public void set_dados(){
		System.Console.WriteLine("Digite o primeiro numero: ");
		v1=int.Parse(System.Console.ReadLine());
		System.Console.WriteLine("Digite o segundo numero: ");
		v2=int.Parse(System.Console.ReadLine());
	}
	public void print_dados(){
		System.Console.WriteLine("O primeiro numero {0} ",v1);
		System.Console.WriteLine("O segundo numero {0} ",v2);
	}
	public int soma(){
		return v1+v2;
	}
	public calculos(int v1, int v2){
		this.v1=v1;
		this.v2=v2;
	}
	~calculos(){

	}
}
class thisi{
	static void Main(){
		calculos x=new calculos(10,2);
		x.print_dados();
		System.Console.WriteLine("O valor da soma é: {0}",x.soma());

	}
}