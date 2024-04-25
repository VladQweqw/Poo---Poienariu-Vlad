// modules
#include "house.h"

// main function
int main() {
    // creating the house ( my_house )
    House my_house(1);
    House my_house2(9);
    House my_house3(45);
    
    // dispaly the house base size
    my_house.GetSize();

    // house grown by 1
    my_house.Grow();

        // set border
    my_house.SetBorder('*');

    // set fill
    my_house.SetFill('=');

    // house shrunk by 1
    my_house.Shrink();

    // my_house.Shrink();
    my_house.Summary();

    // separator for better viewing purpose
    cout<<"\n--------------------------------\n";
    
    // dispaly the house base size
    my_house2.GetSize();

    // house grown by 1
    my_house2.Grow();

        // set border
    my_house2.SetBorder('*');

    // set fill
    my_house2.SetFill('=');

    // house shrunk by 1
    my_house2.Shrink();

    // my_house.Shrink();
    my_house2.Summary();

    // separator for better viewing purpose
    cout<<"\n--------------------------------\n";
    
    // dispaly the house base size
    my_house3.GetSize();

    // house grown by 1
    my_house3.Grow();

        // set border
    my_house3.SetBorder('*');

    // set fill
    my_house3.SetFill('=');

    // house shrunk by 1
    my_house3.Shrink();

    // my_house.Shrink();
    my_house3.Summary();
};