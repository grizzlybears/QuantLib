
/* 
Copyright (C) 2000 Ferdinando Ametrano, Luigi Ballabio, Adolfo Benin, Marco Marchioro
See the file LICENSE.TXT for information on usage and distribution
Contact ferdinando@ametrano.net if LICENSE.TXT was not distributed with this file
*/

/*! \file target.h
	\brief TARGET calendar
*/

#ifndef quantlib_target_calendar_h
#define quantlib_target_calendar_h

#include "qldefines.h"
#include "westerncalendar.h"

namespace QuantLib {

	namespace Calendars {
	
		//! TARGET calendar
		/*! Holidays:
			<ul>
			<li>Saturdays</li>
			<li>Sundays</li>
			<li>New Year's Day, January 1st</li>
			<li>Good Friday</li>
			<li>Easter Monday</li>
			<li>Labour Day, May 1st</li>
			<li>Christmas, December 25th</li>
			<li>Day of Goodwill, December 26th</li>
			</ul>
		*/
		class TARGET : public WesternCalendar {
		  public:
			TARGET() {}
			std::string name() const { return "TARGET"; }
			bool isBusinessDay(const Date&) const;
		};
	
	}

}


#endif
