import java.io.*;

public class compliantCode {

	public static void main(String[] args) {
		
		BufferedReader stella = null;
		try {
			String fileText;
			stella = new BufferedReader(new FileReader("readme.txt"));
			while ((fileText = stella.readLine()) != null) {
				System.out.print(fileText);
			}
		} catch (IOException e) {
			e.printStackTrace();
		} finally {
			try{
				if (stella != null)
					stella.close();
			} catch (IOException ex) {
				ex.printStackTrace();
			}
		}
	}
}
