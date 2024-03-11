public class Cruise {
    private int numPassengers;
    private int price;

    public Cruise(int inputNum, int inputPrice){
        numPassengers = inputNum;
        price = inputPrice;
    }

    public void setPrice(int newPrice){
        price = newPrice;
    }

    public void checkResponse(String request){
        if(request.indexOf("cruise") != -1){
            numPassengers ++;
        }
    }

    public int calculateRevenue(){
        if(numPassengers >= 300){
            return numPassengers * (price - 500);
        }
        else if(numPassengers >= 200 && numPassengers < 300){
            return numPassengers * (price - 350);
        }
        else{
            return numPassengers * price;
        }
    }

    public static void main(String[] args) {
        Cruise cr = new Cruise(78,4000);
        cr.setPrice(5000);
        cr.checkResponse("world cruise");
        cr.checkResponse("ship trip");
        System.out.println(cr.numPassengers);
        System.out.println(cr.price);
        System.out.println(cr.calculateRevenue());

        Cruise cr1 = new Cruise(200,2000);
        System.out.println(cr1.calculateRevenue());
        Cruise cr2 = new Cruise(397,6000);
        System.out.println(cr2.calculateRevenue());
    }
}
