int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int x=0;
     if( (arrivalTime+delayedTime) >=24 ){
        x = ( arrivalTime + delayedTime )-24;
        return x;
    }
    else {
        return (arrivalTime+delayedTime);
    }
}