float problemSolution1(float consumed_water) {
    float cost;
    float water_cons, fixed_amount = 13;
    water_cons = consumed_water;

    if (water_cons <= 30){
        cost = (water_cons * 0.4) + fixed_amount;
    }else if(water_cons > 30 && water_cons <= 50){
        cost = (30 * 0.4) + ((water_cons-30) * 0.12) + fixed_amount;
    }else if(water_cons > 50 && water_cons <= 60){
        cost = (30 * 0.4) + (20 * 0.12) + ((water_cons - 50) * 1.4) + fixed_amount;
    } else {
        cost = (30 * 0.4) + (20 * 0.12) + (10 * 1.4) + ((water_cons - 60) * 1.5) + fixed_amount;
    }

    return cost;
}
