/*
 * SpawnAreaMap.h
 *
 *  Created on: Nov 2, 2010
 *      Author: da
 */

#ifndef SPAWNAREAMAP_H_
#define SPAWNAREAMAP_H_

#include "engine/engine.h"
#include "server/zone/objects/area/SpawnArea.h"
#include "server/zone/objects/area/DynamicSpawnArea.h"
#include "server/zone/objects/area/StaticSpawnArea.h"
#include "server/zone/objects/area/LairSpawnArea.h"
#include "server/zone/Zone.h"
#include "server/zone/managers/object/ObjectManager.h"

class SpawnAreaMap : public VectorMap<uint32, ManagedReference<SpawnArea*> > , public Logger {
	Lua* lua;
protected:
	ManagedReference<Zone*> zone;

	Vector<ManagedReference<SpawnArea*> > noSpawnAreas;

	Vector<ManagedReference<SpawnArea*> > worldSpawnAreas;

	Vector<ManagedReference<SpawnArea*> > factionalNeutralMissionSpawnAreas;

	Vector<ManagedReference<SpawnArea*> > factionalRebelMissionSpawnAreas;

	Vector<ManagedReference<SpawnArea*> > factionalImperialMissionSpawnAreas;

	Vector<Vector3> trainerObjects;

	void readAreaObject(LuaObject& areaObj);
	void loadStaticSpawns();

public:
	SpawnAreaMap() : Logger("SpawnAreaMap") {
		lua = new Lua();
		setAllowDuplicateInsertPlan();
	}

	SpawnAreaMap(const SpawnAreaMap& l) : VectorMap<uint32, ManagedReference<SpawnArea*> >(l) , Logger("SpawnAreaMap") {
		lua = l.lua;

		noSpawnAreas = l.noSpawnAreas;
	}

	virtual ~SpawnAreaMap() {
		if (lua != NULL) {
			delete lua;
			lua = NULL;
		}
	}

	void loadMap(Zone* z);

	Vector3 getRandomJediTrainer();

	Vector<ManagedReference<SpawnArea*> >* getWorldSpawnAreas() {
		return &worldSpawnAreas;
	}

	Vector<ManagedReference<SpawnArea*> >* getFactionalNeutralMissionSpawnAreas() {
		return &factionalNeutralMissionSpawnAreas;
	}

	Vector<ManagedReference<SpawnArea*> >* getFactionalRebelMissionSpawnAreas() {
		return &factionalRebelMissionSpawnAreas;
	}

	Vector<ManagedReference<SpawnArea*> >* getFactionalImperialMissionSpawnAreas() {
		return &factionalImperialMissionSpawnAreas;
	}
};


#endif /* SPAWNAREAMAP_H_ */
