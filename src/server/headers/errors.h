#ifndef ERRORS_H
#define ERRORS_H

#include <QString>
#include "error.h"

class Errors {
	public:
		static void WriteServerError(QString errorInfo);
		
		static Error NotAuthorizedRequest();
		static Error AccessDenyForUser();
		static Error AccessDenyForTester();
		static Error AccessDenyForAdmin();
		static Error LostDatabaseConnection();

		static Error NotImplementedYet();
		static Error InternalServerError();
		static Error ParamExpected(QString param_name);
		static Error ParamMustBeInteger(QString param_name);
		static Error ParamExpectedValueOneFrom(QString param_name, QStringList eList);
		static Error ParamExpectedUUID(QString param_name);
		
		static Error NoneError();
		
		// custom
		static Error NotFoundUserByUUID(QString uuid);
		static Error QuestIDMustBeNotZero();
		static Error HintIDMustBeNotZero();
		static Error UserIDMustBeNotZero();
		static Error ParamTableMustBeActiveOrBackup();
		static Error OnPageCouldNotBeMoreThen50();
		static Error EventNotFound();
		
	private:
		
};

#endif // ERRORS_H
