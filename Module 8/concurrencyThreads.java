class NextThread extends Thread {
	@Override
	public void run() {
		for (int i = 20; i >= 0; i--) {
			System.out.println("Countdown Down: " + i);
		}
	}
}

public class concurrencyThreads extends Thread {

	public static void main(String[] args) {
		Thread increasingThread = Thread.currentThread();
		increasingThread.setPriority(MAX_PRIORITY);
		
		for (int k = 0; k <= 20; k++) {
			System.out.println("Count Up: " + k);
		}
		
		System.out.println("");
		NextThread decreasingThread = new NextThread();
		decreasingThread.start();
	}
}

