using System;
class Base{
	public Base(){
		System.Console.WriteLine("Construtor da classe base");
	}
	virtual public void info(){

		System.Console.WriteLine("Base");

	}
}
class derivada1:Base{
	public derivada1(){
		System.Console.WriteLine("Construtor da classe derivada1");
	}
	override public void info(){
		System.Console.WriteLine("derivada 1");
	}
}	
class derivada2:derivada1{
	public derivada2(){
		System.Console.WriteLine("Construtor da classe derivada2");
	}
	override public void info(){
		System.Console.WriteLine("derivada 2");
	}
	

}
class ordem{
	static void Main(){
		Base Ref;
		derivada1 x=new derivada1();
		derivada2 y =new derivada2();
		Ref=x;
		Ref.info();
		
		
	}
}
/*SEMPRE  a ordem de execução dos construtores vai da base para as demais derivadas como mostra o exemplo:
Construtor da classe base
Construtor da classe derivada1
Construtor da classe derivada2
NÃO ESQUEÇA SEU ARROMBADO !!!!!!!!!!!!!!
Medotos virtuias são metodos que possuem o mesmo nome em classe diferentes.
override serve para sobrescrever um metodo virtual de uma classe base.
Ref palavra de referencia que recebe os metodos derivados de uma classe filha.
*/