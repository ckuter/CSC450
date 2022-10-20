import java.io.*;

public class moreCompliantCode {

	private static final String theFile = "readme.txt";
	
	public static void main(String[] args) {
		try (BufferedReader steve = new BufferedReader(new FileReader(theFile))){
			String fileText;
			while ((fileText = steve.readLine()) != null) {
				System.out.println(fileText);
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

}

