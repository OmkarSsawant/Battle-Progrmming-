import java.util.concurrent.*;

class Execute{
	public static void main(String[] args) {
		final ExecutorService service = Executors.newFixedThreadPool(2);

		service.execute(()->{
			for (int i=0;i<10_000 ;i++ ) {
		System.out.println(Thread.currentThread().getName() +  " : " + i);		
			}
		});

		service.execute(()->{
			for (int i=0;i<10_000 ;i++ ) {
		System.out.println(Thread.currentThread().getName() +  " : " + i);		
			}
		});

		service.execute(()->{
			for (int i=0;i<10_000 ;i++ ) {
		System.out.println(Thread.currentThread().getName() +  " : " + i);		
			}
		});
		service.shutdown();
		System.out.println("exited Main Thread");		

	}

}