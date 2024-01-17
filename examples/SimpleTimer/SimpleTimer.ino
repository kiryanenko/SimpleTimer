#include <SimpleTimer.h>

// Create a first timer and specify its interval in milliseconds
SimpleTimer firstTimer(2000);
// Create a second timer
SimpleTimer secondTimer;

void setup()
{
    Serial.begin(9600);

    // Set an interval to 3 secs for the second timer
    secondTimer.setInterval(3000);
}

void loop()
{
    if (firstTimer.isReady()) {            // Check is ready a first timer
        Serial.println("2 seconds have passed");
        // Do something ...

        // Disable this timer until it gets enabled again
        firstTimer.disable();
    }

    if (secondTimer.isReady()) {                    // Check if second timer is ready
        Serial.println("Called every 3 sec");
        // Do something ...

        firstTimer.enable();                        // Enable the first timer again
        firstTimer.reset();                         // Reset the first timer to let it wait another 2 seconds

        secondTimer.reset();                        // Reset the second timer
        
    }
}
