/*
 *	server/zone/objects/mission/MissionObjective.cpp generated by engine3 IDL compiler 0.61
 */

#include "MissionObjective.h"

#include "server/zone/objects/scene/Observer.h"

#include "server/zone/objects/scene/Observable.h"

#include "server/zone/objects/mission/MissionObject.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	MissionObjectiveStub
 */

MissionObjective::MissionObjective(MissionObject* parent) : ManagedObject(DummyConstructorParameter::instance()) {
	MissionObjectiveImplementation* _implementation = new MissionObjectiveImplementation(parent);
	_impl = _implementation;
	_impl->_setStub(this);
}

MissionObjective::MissionObjective(DummyConstructorParameter* param) : ManagedObject(param) {
}

MissionObjective::~MissionObjective() {
}


void MissionObjective::destroyObjectFromDatabase() {
	MissionObjectiveImplementation* _implementation = (MissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase();
}

int MissionObjective::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	MissionObjectiveImplementation* _implementation = (MissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(observer);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void MissionObjective::activate() {
	MissionObjectiveImplementation* _implementation = (MissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		_implementation->activate();
}

void MissionObjective::abort() {
	MissionObjectiveImplementation* _implementation = (MissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->abort();
}

void MissionObjective::complete() {
	MissionObjectiveImplementation* _implementation = (MissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		_implementation->complete();
}

MissionObject* MissionObjective::getMissionObject() {
	MissionObjectiveImplementation* _implementation = (MissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return (MissionObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getMissionObject();
}

unsigned int MissionObjective::getObjectiveType() {
	MissionObjectiveImplementation* _implementation = (MissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getObjectiveType();
}

PlayerCreature* MissionObjective::getPlayerOwner() {
	MissionObjectiveImplementation* _implementation = (MissionObjectiveImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return (PlayerCreature*) method.executeWithObjectReturn();
	} else
		return _implementation->getPlayerOwner();
}

DistributedObjectServant* MissionObjective::_getImplementation() {
	return _impl;}

void MissionObjective::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	MissionObjectiveImplementation
 */

MissionObjectiveImplementation::MissionObjectiveImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


MissionObjectiveImplementation::~MissionObjectiveImplementation() {
}


void MissionObjectiveImplementation::finalize() {
}

void MissionObjectiveImplementation::_initializeImplementation() {
	_setClassHelper(MissionObjectiveHelper::instance());

	_serializationHelperMethod();
}

void MissionObjectiveImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (MissionObjective*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* MissionObjectiveImplementation::_getStub() {
	return _this;
}

MissionObjectiveImplementation::operator const MissionObjective*() {
	return _this;
}

void MissionObjectiveImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void MissionObjectiveImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void MissionObjectiveImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void MissionObjectiveImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void MissionObjectiveImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void MissionObjectiveImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void MissionObjectiveImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void MissionObjectiveImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("MissionObjective");

	addSerializableVariable("observers", &observers);
	addSerializableVariable("mission", &mission);
	addSerializableVariable("objectiveType", &objectiveType);
}

MissionObjectiveImplementation::MissionObjectiveImplementation(MissionObject* parent) {
	_initializeImplementation();
	// server/zone/objects/mission/MissionObjective.idl(65):  		mission = parent;
	mission = parent;
	// server/zone/objects/mission/MissionObjective.idl(67):  		Logger.setLoggingName("MissionObjective");
	Logger::setLoggingName("MissionObjective");
}

int MissionObjectiveImplementation::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	// server/zone/objects/mission/MissionObjective.idl(78):  		return 1;
	return 1;
}

void MissionObjectiveImplementation::activate() {
}

void MissionObjectiveImplementation::abort() {
}

void MissionObjectiveImplementation::complete() {
}

MissionObject* MissionObjectiveImplementation::getMissionObject() {
	// server/zone/objects/mission/MissionObjective.idl(94):  		return mission;
	return mission;
}

unsigned int MissionObjectiveImplementation::getObjectiveType() {
	// server/zone/objects/mission/MissionObjective.idl(98):  		return objectiveType;
	return objectiveType;
}

/*
 *	MissionObjectiveAdapter
 */

MissionObjectiveAdapter::MissionObjectiveAdapter(MissionObjectiveImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* MissionObjectiveAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		destroyObjectFromDatabase();
		break;
	case 7:
		resp->insertSignedInt(notifyObserverEvent((MissionObserver*) inv->getObjectParameter(), inv->getUnsignedIntParameter(), (Observable*) inv->getObjectParameter(), (ManagedObject*) inv->getObjectParameter(), inv->getSignedLongParameter()));
		break;
	case 8:
		activate();
		break;
	case 9:
		abort();
		break;
	case 10:
		complete();
		break;
	case 11:
		resp->insertLong(getMissionObject()->_getObjectID());
		break;
	case 12:
		resp->insertInt(getObjectiveType());
		break;
	case 13:
		resp->insertLong(getPlayerOwner()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionObjectiveAdapter::destroyObjectFromDatabase() {
	((MissionObjectiveImplementation*) impl)->destroyObjectFromDatabase();
}

int MissionObjectiveAdapter::notifyObserverEvent(MissionObserver* observer, unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return ((MissionObjectiveImplementation*) impl)->notifyObserverEvent(observer, eventType, observable, arg1, arg2);
}

void MissionObjectiveAdapter::activate() {
	((MissionObjectiveImplementation*) impl)->activate();
}

void MissionObjectiveAdapter::abort() {
	((MissionObjectiveImplementation*) impl)->abort();
}

void MissionObjectiveAdapter::complete() {
	((MissionObjectiveImplementation*) impl)->complete();
}

MissionObject* MissionObjectiveAdapter::getMissionObject() {
	return ((MissionObjectiveImplementation*) impl)->getMissionObject();
}

unsigned int MissionObjectiveAdapter::getObjectiveType() {
	return ((MissionObjectiveImplementation*) impl)->getObjectiveType();
}

PlayerCreature* MissionObjectiveAdapter::getPlayerOwner() {
	return ((MissionObjectiveImplementation*) impl)->getPlayerOwner();
}

/*
 *	MissionObjectiveHelper
 */

MissionObjectiveHelper* MissionObjectiveHelper::staticInitializer = MissionObjectiveHelper::instance();

MissionObjectiveHelper::MissionObjectiveHelper() {
	className = "MissionObjective";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionObjectiveHelper::finalizeHelper() {
	MissionObjectiveHelper::finalize();
}

DistributedObject* MissionObjectiveHelper::instantiateObject() {
	return new MissionObjective(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionObjectiveHelper::instantiateServant() {
	return new MissionObjectiveImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionObjectiveHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionObjectiveAdapter((MissionObjectiveImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

