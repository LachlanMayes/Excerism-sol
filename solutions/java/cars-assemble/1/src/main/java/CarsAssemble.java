public class CarsAssemble {

    public double productionRatePerHour(int speed) {
        double production = speed * 221;
        if (speed <= 4){
           production = speed * 221 ;
        }else if (speed <= 8){
            production = 0.9 * production;
        }else if (speed == 9){
            production = 0.8 * production;
        }else if (speed == 10){
            production = 0.77 * production;
        }
        return production;
    }

    public int workingItemsPerMinute(int speed) {
        double items = 221.0 / 60.0 ;
        if(speed <= 4){
            items  = speed * items;
        }else if (speed <= 8 ){
            items = 0.9 * items * speed;
        }else if (speed == 9){
            items = 0.8 * items * speed;
        }else if (speed == 10){
            items = 0.77 * items * speed;
        }int workingItems = (int)items;
        return workingItems;
    }
}
