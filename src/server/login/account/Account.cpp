/*
 *	server/login/account/Account.cpp generated by engine3 IDL compiler 0.61
 */

#include "Account.h"

#include "server/login/account/AccountManager.h"

#include "server/zone/ZoneClientSession.h"

/*
 *	AccountStub
 */

Account::Account(AccountManager* accManage, const String& usern, unsigned int accountid, unsigned int stationid) : ManagedObject(DummyConstructorParameter::instance()) {
	AccountImplementation* _implementation = new AccountImplementation(accManage, usern, accountid, stationid);
	_impl = _implementation;
	_impl->_setStub(this);
}

Account::Account(DummyConstructorParameter* param) : ManagedObject(param) {
}

Account::~Account() {
}


bool Account::hasMaxOnlineCharacters() {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasMaxOnlineCharacters();
}

ZoneClientSession* Account::getZoneSession(unsigned int sessionID) {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnsignedIntParameter(sessionID);

		return (ZoneClientSession*) method.executeWithObjectReturn();
	} else
		return _implementation->getZoneSession(sessionID);
}

bool Account::containsZoneSession(unsigned int sessionID) {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addUnsignedIntParameter(sessionID);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->containsZoneSession(sessionID);
}

void Account::addZoneSession(ZoneClientSession* client) {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(client);

		method.executeWithVoidReturn();
	} else
		_implementation->addZoneSession(client);
}

void Account::removeZoneSession(unsigned int sessionID) {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedIntParameter(sessionID);

		method.executeWithVoidReturn();
	} else
		_implementation->removeZoneSession(sessionID);
}

void Account::setAccountID(unsigned int accountid) {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addUnsignedIntParameter(accountid);

		method.executeWithVoidReturn();
	} else
		_implementation->setAccountID(accountid);
}

void Account::setStationID(unsigned int stationid) {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addUnsignedIntParameter(stationid);

		method.executeWithVoidReturn();
	} else
		_implementation->setStationID(stationid);
}

void Account::setAdminLevel(unsigned int adminlvl) {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addUnsignedIntParameter(adminlvl);

		method.executeWithVoidReturn();
	} else
		_implementation->setAdminLevel(adminlvl);
}

void Account::setUsername(const String& usern) {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(usern);

		method.executeWithVoidReturn();
	} else
		_implementation->setUsername(usern);
}

void Account::setTimeCreated(unsigned int seconds) {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addUnsignedIntParameter(seconds);

		method.executeWithVoidReturn();
	} else
		_implementation->setTimeCreated(seconds);
}

unsigned int Account::getAccountID() {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getAccountID();
}

unsigned int Account::getStationID() {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getStationID();
}

unsigned int Account::getAdminLevel() {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getAdminLevel();
}

String Account::getUsername() {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		method.executeWithAsciiReturn(_return_getUsername);
		return _return_getUsername;
	} else
		return _implementation->getUsername();
}

unsigned int Account::getTimeCreated() {
	AccountImplementation* _implementation = (AccountImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getTimeCreated();
}

DistributedObjectServant* Account::_getImplementation() {
	return _impl;}

void Account::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	AccountImplementation
 */

AccountImplementation::AccountImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


AccountImplementation::~AccountImplementation() {
}


void AccountImplementation::finalize() {
}

void AccountImplementation::_initializeImplementation() {
	_setClassHelper(AccountHelper::instance());

	_serializationHelperMethod();
}

void AccountImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (Account*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* AccountImplementation::_getStub() {
	return _this;
}

AccountImplementation::operator const Account*() {
	return _this;
}

void AccountImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void AccountImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void AccountImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void AccountImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void AccountImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void AccountImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void AccountImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void AccountImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("Account");

	addSerializableVariable("zoneSessions", &zoneSessions);
	addSerializableVariable("username", &username);
	addSerializableVariable("accountID", &accountID);
	addSerializableVariable("stationID", &stationID);
	addSerializableVariable("adminLevel", &adminLevel);
	addSerializableVariable("created", &created);
}

AccountImplementation::AccountImplementation(AccountManager* accManage, const String& usern, unsigned int accountid, unsigned int stationid) {
	_initializeImplementation();
	// server/login/account/Account.idl(25):  		username = usern;
	username = usern;
	// server/login/account/Account.idl(26):  		accountID = accountid;
	accountID = accountid;
	// server/login/account/Account.idl(27):  		stationID = stationid;
	stationID = stationid;
	// server/login/account/Account.idl(29):  		accountManager = accManage;
	accountManager = accManage;
	// server/login/account/Account.idl(31):  		adminLevel = 0;
	adminLevel = 0;
	// server/login/account/Account.idl(33):  		created = System.getTime();
	created = System::getTime();
	// server/login/account/Account.idl(35):  		zoneSessions.setInsertPlan(2);
	(&zoneSessions)->setInsertPlan(2);
	// server/login/account/Account.idl(36):  		zoneSessions.setNullValue(null);
	(&zoneSessions)->setNullValue(NULL);
}

bool AccountImplementation::hasMaxOnlineCharacters() {
	// server/login/account/Account.idl(40):  		return zoneSessions.size() + 1 > accountManager.getMaxOnlineCharacters();
	return (&zoneSessions)->size() + 1 > accountManager->getMaxOnlineCharacters();
}

ZoneClientSession* AccountImplementation::getZoneSession(unsigned int sessionID) {
	// server/login/account/Account.idl(44):  		return zoneSessions.get(sessionID);
	return (&zoneSessions)->get(sessionID);
}

bool AccountImplementation::containsZoneSession(unsigned int sessionID) {
	// server/login/account/Account.idl(48):  		return zoneSessions.contains(sessionID);
	return (&zoneSessions)->contains(sessionID);
}

void AccountImplementation::addZoneSession(ZoneClientSession* client) {
	// server/login/account/Account.idl(52):  		zoneSessions.put(client.getSessionID(), client);
	(&zoneSessions)->put(client->getSessionID(), client);
}

void AccountImplementation::removeZoneSession(unsigned int sessionID) {
	// server/login/account/Account.idl(56):  		zoneSessions.drop(sessionID);
	(&zoneSessions)->drop(sessionID);
	// server/login/account/Account.idl(58):  	}
	if ((&zoneSessions)->size() < 1)	// server/login/account/Account.idl(59):  			accountManager.dropAccount(accountID);
	accountManager->dropAccount(accountID);
}

void AccountImplementation::setAccountID(unsigned int accountid) {
	// server/login/account/Account.idl(63):  		accountID = accountid;
	accountID = accountid;
}

void AccountImplementation::setStationID(unsigned int stationid) {
	// server/login/account/Account.idl(67):  		stationID = stationid;
	stationID = stationid;
}

void AccountImplementation::setAdminLevel(unsigned int adminlvl) {
	// server/login/account/Account.idl(71):  		adminLevel = adminlvl;
	adminLevel = adminlvl;
}

void AccountImplementation::setUsername(const String& usern) {
	// server/login/account/Account.idl(75):  		username = usern;
	username = usern;
}

void AccountImplementation::setTimeCreated(unsigned int seconds) {
	// server/login/account/Account.idl(79):  		created = seconds;
	created = seconds;
}

unsigned int AccountImplementation::getAccountID() {
	// server/login/account/Account.idl(83):  		return accountID;
	return accountID;
}

unsigned int AccountImplementation::getStationID() {
	// server/login/account/Account.idl(87):  		return stationID;
	return stationID;
}

unsigned int AccountImplementation::getAdminLevel() {
	// server/login/account/Account.idl(91):  		return adminLevel;
	return adminLevel;
}

String AccountImplementation::getUsername() {
	// server/login/account/Account.idl(95):  		return username;
	return username;
}

unsigned int AccountImplementation::getTimeCreated() {
	// server/login/account/Account.idl(99):  		return created;
	return created;
}

/*
 *	AccountAdapter
 */

AccountAdapter::AccountAdapter(AccountImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* AccountAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertBoolean(hasMaxOnlineCharacters());
		break;
	case 7:
		resp->insertLong(getZoneSession(inv->getUnsignedIntParameter())->_getObjectID());
		break;
	case 8:
		resp->insertBoolean(containsZoneSession(inv->getUnsignedIntParameter()));
		break;
	case 9:
		addZoneSession((ZoneClientSession*) inv->getObjectParameter());
		break;
	case 10:
		removeZoneSession(inv->getUnsignedIntParameter());
		break;
	case 11:
		setAccountID(inv->getUnsignedIntParameter());
		break;
	case 12:
		setStationID(inv->getUnsignedIntParameter());
		break;
	case 13:
		setAdminLevel(inv->getUnsignedIntParameter());
		break;
	case 14:
		setUsername(inv->getAsciiParameter(_param0_setUsername__String_));
		break;
	case 15:
		setTimeCreated(inv->getUnsignedIntParameter());
		break;
	case 16:
		resp->insertInt(getAccountID());
		break;
	case 17:
		resp->insertInt(getStationID());
		break;
	case 18:
		resp->insertInt(getAdminLevel());
		break;
	case 19:
		resp->insertAscii(getUsername());
		break;
	case 20:
		resp->insertInt(getTimeCreated());
		break;
	default:
		return NULL;
	}

	return resp;
}

bool AccountAdapter::hasMaxOnlineCharacters() {
	return ((AccountImplementation*) impl)->hasMaxOnlineCharacters();
}

ZoneClientSession* AccountAdapter::getZoneSession(unsigned int sessionID) {
	return ((AccountImplementation*) impl)->getZoneSession(sessionID);
}

bool AccountAdapter::containsZoneSession(unsigned int sessionID) {
	return ((AccountImplementation*) impl)->containsZoneSession(sessionID);
}

void AccountAdapter::addZoneSession(ZoneClientSession* client) {
	((AccountImplementation*) impl)->addZoneSession(client);
}

void AccountAdapter::removeZoneSession(unsigned int sessionID) {
	((AccountImplementation*) impl)->removeZoneSession(sessionID);
}

void AccountAdapter::setAccountID(unsigned int accountid) {
	((AccountImplementation*) impl)->setAccountID(accountid);
}

void AccountAdapter::setStationID(unsigned int stationid) {
	((AccountImplementation*) impl)->setStationID(stationid);
}

void AccountAdapter::setAdminLevel(unsigned int adminlvl) {
	((AccountImplementation*) impl)->setAdminLevel(adminlvl);
}

void AccountAdapter::setUsername(const String& usern) {
	((AccountImplementation*) impl)->setUsername(usern);
}

void AccountAdapter::setTimeCreated(unsigned int seconds) {
	((AccountImplementation*) impl)->setTimeCreated(seconds);
}

unsigned int AccountAdapter::getAccountID() {
	return ((AccountImplementation*) impl)->getAccountID();
}

unsigned int AccountAdapter::getStationID() {
	return ((AccountImplementation*) impl)->getStationID();
}

unsigned int AccountAdapter::getAdminLevel() {
	return ((AccountImplementation*) impl)->getAdminLevel();
}

String AccountAdapter::getUsername() {
	return ((AccountImplementation*) impl)->getUsername();
}

unsigned int AccountAdapter::getTimeCreated() {
	return ((AccountImplementation*) impl)->getTimeCreated();
}

/*
 *	AccountHelper
 */

AccountHelper* AccountHelper::staticInitializer = AccountHelper::instance();

AccountHelper::AccountHelper() {
	className = "Account";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void AccountHelper::finalizeHelper() {
	AccountHelper::finalize();
}

DistributedObject* AccountHelper::instantiateObject() {
	return new Account(DummyConstructorParameter::instance());
}

DistributedObjectServant* AccountHelper::instantiateServant() {
	return new AccountImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* AccountHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AccountAdapter((AccountImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

