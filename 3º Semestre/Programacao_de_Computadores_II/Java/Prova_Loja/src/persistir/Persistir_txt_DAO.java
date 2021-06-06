package persistir;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

import Model.Vendedores;

public class Persistir_txt_DAO <T, PK extends Serializable> implements IGenericDAO<T,PK>{

	@Override
	public void create(T newInstance) throws Exception {
		FileOutputStream fileOupStream = null;
		File arquivo = new File(newInstance.toString()+".txt");
		fileOupStream = new FileOutputStream(arquivo);
		ObjectOutputStream outputStream = null;
		outputStream = new ObjectOutputStream(fileOupStream);
		outputStream.writeObject(newInstance);
		ObjectInputStream objectInputStream = new ObjectInputStream(new FileInputStream(arquivo));
	}
}
