#pragma once

namespace Cal{
    class CAL{
        protected:
            double value;
        public:
            CAL();
            CAL(double );
            CAL(CAL &);
            ~CAL();
            void operator= (CAL);
            CAL operator+ (CAL);
            CAL operator- ();
            CAL operator* (CAL);
            CAL operator/ (CAL);
            CAL operator% (CAL);
            operator double();
    };
}