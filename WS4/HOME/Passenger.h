// TODO: add file header comments here
//Name: Dylan Wang
//StudentNum= 114099187
//CourseSection= OOP244SAA
// TODO: add header file guard here
#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H
// TODO: declare your namespace here
namespace sict
{
    const int name_size= 19;

	class Passenger
	{
        private: 
            char m_pName[name_size];
            char m_dest[name_size];
            int m_year;
            int m_month;
            int m_day;

        public: 
            Passenger();
            Passenger(const char *name, const char *destination);
            bool isEmpty() const;
            void display() const;
            Passenger(const char *name, const char *destination, int year, int month, int day);
            const char* name() const;
            bool canTravelWith(const Passenger &)const;
	};
};
#endif
