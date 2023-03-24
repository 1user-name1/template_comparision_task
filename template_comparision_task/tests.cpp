#include <iostream>
#include "first_task.h"

int main()
{
    NewA obj_A1(0, 1);
    NewA obj_A2(49, 51);
    NewA obj_A3(0, 1);
    NewB obj_B1("just text 1");
    NewB obj_B2("just text 2");
    NewB obj_B3("just text 1");

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "object of class NewA(0, 1)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == obj_A3) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != obj_A3) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= obj_A3) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= obj_A3) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > obj_A3) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < obj_A3) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "object of class NewA(49, 51)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == obj_A2) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != obj_A2) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= obj_A2) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= obj_A2) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > obj_A2) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < obj_A2) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "int(-1)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == -1) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != -1) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= -1) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= -1) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > -1) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < -1) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "int(0)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == 0) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != 0) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= 0) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= 0) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > 0) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < 0) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "int(1)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == 1) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != 1) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= 1) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= 1) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > 1) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < 1) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "int(2)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == 2) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != 2) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= 2) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= 2) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > 2) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < 2) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "double(-1.0)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == -1.0) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != -1.0) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= -1.0) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= -1.0) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > -1.0) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < -1.0) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "double(0.0)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == 0.0) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != 0.0) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= 0.0) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= 0.0) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > 0.0) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < 0.0) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "double(1.0)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == 1.0) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != 1.0) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= 1.0) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= 1.0) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > 1.0) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < 1.0) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "double(2.0)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == 2.0) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != 2.0) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= 2.0) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= 2.0) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > 2.0) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < 2.0) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "float(-1.0f)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == -1.0f) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != -1.0f) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= -1.0f) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= -1.0f) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > -1.0f) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < -1.0f) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "float(0.0f)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == 0.0f) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != 0.0f) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= 0.0f) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= 0.0f) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > 0.0f) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < 0.0f) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "float(1.0f)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == 1.0f) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != 1.0f) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= 1.0f) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= 1.0f) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > 1.0f) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < 1.0f) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(0, 1) with ";
    std::cout << "float(2.0f)" << std::endl;
    std::cout << "For == RLO: " << (obj_A1 == 2.0f) << std::endl;
    std::cout << "For != RLO: " << (obj_A1 != 2.0f) << std::endl;
    std::cout << "For >= RLO: " << (obj_A1 >= 2.0f) << std::endl;
    std::cout << "For <= RLO: " << (obj_A1 <= 2.0f) << std::endl;
    std::cout << "For >  RLO: " << (obj_A1 > 2.0f) << std::endl;
    std::cout << "For <  RLO: " << (obj_A1 < 2.0f) << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(49, 51) with ";
    std::cout << "char('!')" << std::endl;
    std::cout << "For == RLO: " << (obj_A2 == '!') << std::endl;
    std::cout << "For != RLO: " << (obj_A2 != '!') << std::endl;
    std::cout << "For >= RLO: " << (obj_A2 >= '!') << std::endl;
    std::cout << "For <= RLO: " << (obj_A2 <= '!') << std::endl;
    std::cout << "For >  RLO: " << (obj_A2 > '!') << std::endl;
    std::cout << "For <  RLO: " << (obj_A2 < '!') << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(49, 51) with ";
    std::cout << "char('1')" << std::endl;
    std::cout << "For == RLO: " << (obj_A2 == '1') << std::endl;
    std::cout << "For != RLO: " << (obj_A2 != '1') << std::endl;
    std::cout << "For >= RLO: " << (obj_A2 >= '1') << std::endl;
    std::cout << "For <= RLO: " << (obj_A2 <= '1') << std::endl;
    std::cout << "For >  RLO: " << (obj_A2 > '1') << std::endl;
    std::cout << "For <  RLO: " << (obj_A2 < '1') << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewA(49, 51) with ";
    std::cout << "char('f')" << std::endl;
    std::cout << "For == RLO: " << (obj_A2 == 'f') << std::endl;
    std::cout << "For != RLO: " << (obj_A2 != 'f') << std::endl;
    std::cout << "For >= RLO: " << (obj_A2 >= 'f') << std::endl;
    std::cout << "For <= RLO: " << (obj_A2 <= 'f') << std::endl;
    std::cout << "For >  RLO: " << (obj_A2 > 'f') << std::endl;
    std::cout << "For <  RLO: " << (obj_A2 < 'f') << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewB(\"just text 1\") with ";
    std::cout << "with string \"just text\")" << std::endl;
    std::cout << "For == RLO: " << (obj_B1 == "just text") << std::endl;
    std::cout << "For != RLO: " << (obj_B1 != "just text") << std::endl;
    std::cout << "For >= RLO: " << (obj_B1 >= "just text") << std::endl;
    std::cout << "For <= RLO: " << (obj_B1 <= "just text") << std::endl;
    std::cout << "For >  RLO: " << (obj_B1 > "just text") << std::endl;
    std::cout << "For <  RLO: " << (obj_B1 < "just text") << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewB(\"just text 1\") with ";
    std::cout << "with string \"just text 1\")" << std::endl;
    std::cout << "For == RLO: " << (obj_B1 == "just text 1") << std::endl;
    std::cout << "For != RLO: " << (obj_B1 != "just text 1") << std::endl;
    std::cout << "For >= RLO: " << (obj_B1 >= "just text 1") << std::endl;
    std::cout << "For <= RLO: " << (obj_B1 <= "just text 1") << std::endl;
    std::cout << "For >  RLO: " << (obj_B1 > "just text 1") << std::endl;
    std::cout << "For <  RLO: " << (obj_B1 < "just text 1") << std::endl;
    std::cout << std::endl;

    std::cout << "Object of class NewB(\"just text 1\") with ";
    std::cout << "with string \"just text 2\")" << std::endl;
    std::cout << "For == RLO: " << (obj_B1 == "just text 2") << std::endl;
    std::cout << "For != RLO: " << (obj_B1 != "just text 2") << std::endl;
    std::cout << "For >= RLO: " << (obj_B1 >= "just text 2") << std::endl;
    std::cout << "For <= RLO: " << (obj_B1 <= "just text 2") << std::endl;
    std::cout << "For >  RLO: " << (obj_B1 > "just text 2") << std::endl;
    std::cout << "For <  RLO: " << (obj_B1 < "just text 2") << std::endl;
    std::cout << std::endl;

    return 0;
}