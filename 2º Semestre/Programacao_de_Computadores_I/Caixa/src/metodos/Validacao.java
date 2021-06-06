package metodos;

import java.io.*;

import javax.swing.JOptionPane;

public class Validacao {
	
	public boolean verificarRegistro(String login, String senha) throws IOException
	{
		//Throws = tratamento de excessão. Usado para substituir catch. Necessita do mesmo ao trabalhar com a classe BufferedReader;
		boolean existencia = false;
		String senhaCadastrada = "";
		File arquivo = new File("Funcionarios/" + login + ".txt");
		if(!arquivo.exists()){
			existencia = false;
		}else{
			try {
				FileReader reader = new FileReader(arquivo);
				BufferedReader buffer = new BufferedReader(reader);  
				
				senhaCadastrada = buffer.readLine();  
				senhaCadastrada = buffer.readLine();  

			} catch (FileNotFoundException e) {
				e.printStackTrace();
			}
			if(senhaCadastrada.equals(senha))
			{
				existencia = true;
			}
		}
		
		return existencia;
	}
}
