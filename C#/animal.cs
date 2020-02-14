using System;
class especie{
	public especie(){
		System.Console.WriteLine("Eu sou um animal");

	}
	virtual public void cara(){

	}
}
class cao:especie{
	
	public cao(){
		System.Console.WriteLine("  ");
	}
	override public void cara(){
		System.Console.WriteLine("Eu sou um cachorro comum");
	}

}
class alemao:cao{
	
	public alemao(){
		System.Console.WriteLine("  ");
	}
	override public void cara(){
		System.Console.WriteLine("Eu sou um cachorro bom");
	}


}
class pastor:alemao{
	public pastor(){
		System.Console.WriteLine("  ");
	}

	override public void cara(){
		System.Console.WriteLine("Eu sou um Pastor alemão.");
	}

}
class animal{
	static void Main(){
		especie Ref;
		cao c= new cao();
		alemao a= new alemao();
		pastor p= new pastor();
		Ref=p;
		Ref.cara();
	}
}