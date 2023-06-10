#include "policy.h"
#include "healthinsurance.h"

int main() {
    // Create instances of Policy and HealthInsurance
    Policy* policy = new Policy("1234", 100.0);
    HealthInsurance* healthInsurance = new HealthInsurance("5678", 200.0, "LIC Insurance");

    // Display information about the objects
    policy->display();
    healthInsurance->display();

    // Clean up memory
    delete policy;
    delete healthInsurance;

    return 0;
}
