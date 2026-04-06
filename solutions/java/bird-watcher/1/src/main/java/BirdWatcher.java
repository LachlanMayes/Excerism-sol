
class BirdWatcher {
    private final int[] birdsPerDay;

    public BirdWatcher(int[] birdsPerDay) {
        this.birdsPerDay = birdsPerDay.clone();
    }

    public int[] getLastWeek() {
       return new int[] {0, 2, 5, 3, 7, 8, 4};
    }

    public int getToday() {
        int today = 0;
        for (int i = 6; i < birdsPerDay.length;i++){
        today = birdsPerDay[i];
        }return today ;
            
    }

    public void incrementTodaysCount() {
        birdsPerDay[6] = this.getToday() + 1;
    }

    public boolean hasDayWithoutBirds() {
            for (int day = 0; day < birdsPerDay.length; day++){
                if (birdsPerDay[day] != 0) {
                    return false;
                }else {
                    return true;
                }
            } return hasDayWithoutBirds();
                
    }
    public int getCountForFirstDays(int numberOfDays) {
        int sum = 0 ;
       for (int i = 0; i < birdsPerDay.length; i++){
           if(numberOfDays > i ){
              sum += birdsPerDay[i];
               }
       }return sum;
    }

    public int getBusyDays() {
       int busyDays = 0;
        for (int i = 0; i < birdsPerDay.length;i++){
            if(birdsPerDay[i] >= 5){
                ++busyDays;
            }
        }return busyDays;
    }
}
