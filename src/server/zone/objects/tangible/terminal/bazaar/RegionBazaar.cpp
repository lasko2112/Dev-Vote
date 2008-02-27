/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/objects/tangible/terminal/bazaar/RegionBazaar.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../../../player/Player.h"

#include "../../../scene/SceneObject.h"

#include "../../../auction/AuctionItem.h"

#include "../../../../managers/bazaar/BazaarPlanetManager.h"

#include "RegionBazaar.h"

#include "RegionBazaarImplementation.h"

/*
 *	RegionBazaarStub
 */

RegionBazaar::RegionBazaar() : SceneObject(NULL) {
}

RegionBazaar::RegionBazaar(ORBObjectServant* obj) : SceneObject(obj) {
}

RegionBazaar::RegionBazaar(RegionBazaar& ref) : SceneObject(ref) {
}

RegionBazaar::~RegionBazaar() {
}

RegionBazaar* RegionBazaar::clone() {
	return new RegionBazaar(*this);
}


void RegionBazaar::addItem(AuctionItem* item) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addObjectParameter(item);

		invocation.executeWithVoidReturn();
	} else
		((RegionBazaarImplementation*) _impl)->addItem(item);
}

bool RegionBazaar::removeItem(long long objectid) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addSignedLongParameter(objectid);

		return invocation.executeWithBooleanReturn();
	} else
		return ((RegionBazaarImplementation*) _impl)->removeItem(objectid);
}

void RegionBazaar::setRegion(string& region) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addAsciiParameter(region);

		invocation.executeWithVoidReturn();
	} else
		((RegionBazaarImplementation*) _impl)->setRegion(region);
}

void RegionBazaar::setManager(BazaarPlanetManager* manager) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addObjectParameter(manager);

		invocation.executeWithVoidReturn();
	} else
		((RegionBazaarImplementation*) _impl)->setManager(manager);
}

void RegionBazaar::newBazaarRequest(long long bazaarID, Player* player, int planet) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addSignedLongParameter(bazaarID);
		invocation.addObjectParameter(player);
		invocation.addSignedIntParameter(planet);

		invocation.executeWithVoidReturn();
	} else
		((RegionBazaarImplementation*) _impl)->newBazaarRequest(bazaarID, player, planet);
}

void RegionBazaar::getBazaarData(Player* player, long long objectid, int screen, int extent, int category, int count, int offset) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addObjectParameter(player);
		invocation.addSignedLongParameter(objectid);
		invocation.addSignedIntParameter(screen);
		invocation.addSignedIntParameter(extent);
		invocation.addSignedIntParameter(category);
		invocation.addSignedIntParameter(count);
		invocation.addSignedIntParameter(offset);

		invocation.executeWithVoidReturn();
	} else
		((RegionBazaarImplementation*) _impl)->getBazaarData(player, objectid, screen, extent, category, count, offset);
}

/*
 *	RegionBazaarAdapter
 */

RegionBazaarAdapter::RegionBazaarAdapter(RegionBazaarImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* RegionBazaarAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		addItem((AuctionItem*) inv->getObjectParameter());
		break;
	case 7:
		resp->insertBoolean(removeItem(inv->getSignedLongParameter()));
		break;
	case 8:
		setRegion(inv->getAsciiParameter(_param0_setRegion__string_));
		break;
	case 9:
		setManager((BazaarPlanetManager*) inv->getObjectParameter());
		break;
	case 10:
		newBazaarRequest(inv->getSignedLongParameter(), (Player*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 11:
		getBazaarData((Player*) inv->getObjectParameter(), inv->getSignedLongParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void RegionBazaarAdapter::addItem(AuctionItem* item) {
	return ((RegionBazaarImplementation*) impl)->addItem(item);
}

bool RegionBazaarAdapter::removeItem(long long objectid) {
	return ((RegionBazaarImplementation*) impl)->removeItem(objectid);
}

void RegionBazaarAdapter::setRegion(string& region) {
	return ((RegionBazaarImplementation*) impl)->setRegion(region);
}

void RegionBazaarAdapter::setManager(BazaarPlanetManager* manager) {
	return ((RegionBazaarImplementation*) impl)->setManager(manager);
}

void RegionBazaarAdapter::newBazaarRequest(long long bazaarID, Player* player, int planet) {
	return ((RegionBazaarImplementation*) impl)->newBazaarRequest(bazaarID, player, planet);
}

void RegionBazaarAdapter::getBazaarData(Player* player, long long objectid, int screen, int extent, int category, int count, int offset) {
	return ((RegionBazaarImplementation*) impl)->getBazaarData(player, objectid, screen, extent, category, count, offset);
}

/*
 *	RegionBazaarHelper
 */

RegionBazaarHelper::RegionBazaarHelper() {
	className = "RegionBazaar";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void RegionBazaarHelper::finalizeHelper() {
	RegionBazaarHelper::finalize();
}

ORBObject* RegionBazaarHelper::instantiateObject() {
	return new RegionBazaar();
}

ORBObjectAdapter* RegionBazaarHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new RegionBazaarAdapter((RegionBazaarImplementation*) obj);

	ORBObjectStub* stub = new RegionBazaar(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	RegionBazaarServant
 */

RegionBazaarServant::RegionBazaarServant() : SceneObjectImplementation() {
	_classHelper = RegionBazaarHelper::instance();
}

RegionBazaarServant::~RegionBazaarServant() {
}

void RegionBazaarServant::_setStub(ORBObjectStub* stub) {
	_this = (RegionBazaar*) stub;
	SceneObjectServant::_setStub(stub);
}

ORBObjectStub* RegionBazaarServant::_getStub() {
	return _this;
}

