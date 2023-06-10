#include "company.h"
#include "itcompany.h"

int main() {
    Company c("ABC Company", 1990);
    c.displayInfo();

    ITCompany it("XYZ IT Company", 2005, "Software Development");
    it.displayInfo();
    

    return 0;
}
