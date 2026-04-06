public class Lasagna {
    // TODO: define the 'expectedMinutesInOven()' method
        public int expectedMinutesInOven() {
            return 40;
        }
    // TODO: define the 'remainingMinutesInOven()' method
    public int remainingMinutesInOven(int timePassed) {
         return this.expectedMinutesInOven() - timePassed;
         
    }

    // TODO: define the 'preparationTimeInMinutes()' method
    public int preparationTimeInMinutes(int layers) {
        int layersPrepared = 2 * layers;
        return layersPrepared;
    }

    // TODO: define the 'totalTimeInMinutes()' method
    public int totalTimeInMinutes(int layers , int timePassed) {
        layers *= 2;
        int totalTime = layers + timePassed;
        return totalTime;
    }
}
