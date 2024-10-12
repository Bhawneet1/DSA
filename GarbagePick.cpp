int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        //p truck
        int pickP=0;
        int travelP=0;
        int lastHouseP=0;

        //M truck
        int pickM=0;
        int travelM=0;
        int lastHouseM=0;

        //G truck
        int pickG=0;
        int travelG=0;
        int lastHouseG=0;

        for(int i=0;i<garbage.size();i++)
        {
            //ith house;
            string currhouse=garbage[i];
            //see type of garbage
            for(int j=0;j<currhouse.length();j++)
            {
                char garbageType=currhouse[j];
                if(garbageType=='P')
                {
                    pickP++;
                    //yaha tak p truck paka aya hai to store it
                    lastHouseP=i;

                }if(garbageType=='M')
                {
                    pickM++;
                    lastHouseM=i;
                }if(garbageType=='G')
                {
                    pickG++;
                    lastHouseG=i;
                }
            }
        }

        //travel of p
        for(int i=0;i<lastHouseP;i++)
        {
            travelP=travelP+travel[i];
        }
        for(int i=0;i<lastHouseM;i++)
        {
            travelM=travelM+travel[i];
        }
        for(int i=0;i<lastHouseG;i++)
        {
            travelG=travelG+travel[i];
        }
        int total_picking_time=pickP+pickM+pickG;
        int total_travel_time=travelP+travelM+travelG;
        int total_time=total_picking_time+total_travel_time;
        return total_time;
    }