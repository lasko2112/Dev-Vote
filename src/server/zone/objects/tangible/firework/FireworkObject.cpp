/*
 *	server/zone/objects/tangible/firework/FireworkObject.cpp generated by engine3 IDL compiler 0.61
 */

#include "FireworkObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/ZoneServer.h"

/*
 *	FireworkObjectStub
 */

FireworkObject::FireworkObject() : TangibleObject(DummyConstructorParameter::instance()) {
	FireworkObjectImplementation* _implementation = new FireworkObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

FireworkObject::FireworkObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

FireworkObject::~FireworkObject() {
}


void FireworkObject::initializeTransientMembers() {
	FireworkObjectImplementation* _implementation = (FireworkObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

int FireworkObject::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	FireworkObjectImplementation* _implementation = (FireworkObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void FireworkObject::loadTemplateData(SharedObjectTemplate* templateData) {
	FireworkObjectImplementation* _implementation = (FireworkObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void FireworkObject::launch(PlayerCreature* player) {
	FireworkObjectImplementation* _implementation = (FireworkObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->launch(player);
}

DistributedObjectServant* FireworkObject::_getImplementation() {
	return _impl;}

void FireworkObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	FireworkObjectImplementation
 */

FireworkObjectImplementation::FireworkObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


FireworkObjectImplementation::~FireworkObjectImplementation() {
}


void FireworkObjectImplementation::finalize() {
}

void FireworkObjectImplementation::_initializeImplementation() {
	_setClassHelper(FireworkObjectHelper::instance());

	_serializationHelperMethod();
}

void FireworkObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (FireworkObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* FireworkObjectImplementation::_getStub() {
	return _this;
}

FireworkObjectImplementation::operator const FireworkObject*() {
	return _this;
}

void FireworkObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FireworkObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FireworkObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FireworkObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FireworkObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FireworkObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FireworkObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FireworkObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("FireworkObject");

	addSerializableVariable("fireworkObject", &fireworkObject);
}

FireworkObjectImplementation::FireworkObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/firework/FireworkObject.idl(62):  		Logger.setLoggingName("FireworkObject");
	Logger::setLoggingName("FireworkObject");
	// server/zone/objects/tangible/firework/FireworkObject.idl(64):  		fireworkObject = "object/static/firework/fx_01.iff";
	fireworkObject = "object/static/firework/fx_01.iff";
}

void FireworkObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/firework/FireworkObject.idl(68):  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/firework/FireworkObject.idl(70):  		Logger.setLoggingName("FireworkObject");
	Logger::setLoggingName("FireworkObject");
}

void FireworkObjectImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/firework/FireworkObject.idl(89):  		super.loadTemplateData(templateData);
	TangibleObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/firework/FireworkObject.idl(91):  		FireworkObjectTemplate 
	if (!templateData->isFireworkObjectTemplate()){
	// server/zone/objects/tangible/firework/FireworkObject.idl(92):  			error("critical error");
	error("critical error");
	// server/zone/objects/tangible/firework/FireworkObject.idl(93):  			return;
	return;
}
	// server/zone/objects/tangible/firework/FireworkObject.idl(96):  templ = (FireworkObjectTemplate) templateData;
	FireworkObjectTemplate* templ = (FireworkObjectTemplate*) templateData;
	// server/zone/objects/tangible/firework/FireworkObject.idl(98):  		fireworkObject 
	if (templ == NULL)	// server/zone/objects/tangible/firework/FireworkObject.idl(99):  			return;
	return;
	// server/zone/objects/tangible/firework/FireworkObject.idl(101):  = templ.getFireworkObject();
	fireworkObject = templ->getFireworkObject();
}

/*
 *	FireworkObjectAdapter
 */

FireworkObjectAdapter::FireworkObjectAdapter(FireworkObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* FireworkObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 8:
		launch((PlayerCreature*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void FireworkObjectAdapter::initializeTransientMembers() {
	((FireworkObjectImplementation*) impl)->initializeTransientMembers();
}

int FireworkObjectAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((FireworkObjectImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void FireworkObjectAdapter::launch(PlayerCreature* player) {
	((FireworkObjectImplementation*) impl)->launch(player);
}

/*
 *	FireworkObjectHelper
 */

FireworkObjectHelper* FireworkObjectHelper::staticInitializer = FireworkObjectHelper::instance();

FireworkObjectHelper::FireworkObjectHelper() {
	className = "FireworkObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void FireworkObjectHelper::finalizeHelper() {
	FireworkObjectHelper::finalize();
}

DistributedObject* FireworkObjectHelper::instantiateObject() {
	return new FireworkObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* FireworkObjectHelper::instantiateServant() {
	return new FireworkObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FireworkObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FireworkObjectAdapter((FireworkObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

