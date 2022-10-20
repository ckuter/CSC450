import java.io.*;
import java.nio.ByteBuffer;
import java.nio.CharBuffer;
import java.nio.channels.FileChannel;
import java.nio.charset.Charset;

public class evenMoreCompliantCode {

	public static void main(String[] args) {
		try (FileChannel rdr = (new FileInputStream("readme.txt")).getChannel()){
			String inputFile = "readme.txt";
			try (FileInputStream input = new FileInputStream(inputFile)) {
				FileChannel theChannel = input.getChannel();
				ByteBuffer steve = ByteBuffer.allocateDirect(256);
				
				Charset cs = Charset.forName("ASCII");
				while ((theChannel.read(steve)) != -1) {
					steve.rewind();
					CharBuffer chbuf = cs.decode(steve);
					for ( int i = 0; i < chbuf.length(); i++ ) {
				        /* print each character */
				        System.out.print(chbuf.get());
				    }
					steve.clear();
				}
			}
		} catch (Throwable e) {
			e.printStackTrace();
		}
	}
}

