// -*- mode:C++; tab-width:4; c-basic-offset:4; indent-tabs-mode:nil -*-

/*
 *  Yarp Modules Manager
 *  Copyright: 2011 (C) Robotics, Brain and Cognitive Sciences - Italian Institute of Technology (IIT)
 *  Authors: Ali Paikan <ali.paikan@iit.it>
 * 
 *  Copy Policy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */


#ifndef __MANAGER__
#define __MANAGER__

#include "ymm-types.h" 
#include "kbase.h"
#include "utility.h"
#include "executable.h"

using namespace std; 

//namespace ymm {



/**
 * Class Manager  
 */
class Manager : public MEvent{

public: 
	Manager( bool withWatchDog=false);
	Manager(const char* szModPath,
			const char* szAppPath, bool withWatchDog=false);
	virtual ~Manager();

	bool addApplication(const char* szFileName);
	bool addApplications(const char* szPath);
	bool addModule(const char* szFileName);
	bool addModules(const char* szPath); 

	bool loadApplication(const char* szAppName);
	bool run(void);
	bool run(unsigned int id, bool async=false);
	bool stop(void);
	bool stop(unsigned int id, bool async=false);
	bool kill(void);
	bool kill(unsigned int id, bool async=false);
	bool connect(void);
	bool connect(unsigned int id);
	bool disconnect(void);
	bool disconnect(unsigned int id);
	bool running(void) { return allRunning(); }
	bool running(unsigned int id);
	bool suspended(void) { return allStopped(); }
	bool suspended(unsigned int id);
	bool connected(void);
	bool connected(unsigned int id);
	bool checkDependency(void);
	bool exist(unsigned int id);

	void setDefaultBroker(const char* szBroker) { if(szBroker) strDefBroker = szBroker; }
	const char* defaultBroker(void) { return strDefBroker.c_str(); }
	ExecutablePContainer& getExecutables(void) { return runnables; }
	CnnContainer& getConnections(void) { return connections;}
	ResourcePContainer& getResources(void) { return resources; }
	const char* getApplicationName(void) { return strAppName.c_str(); }

	//const char* getDataPort(const char* szDataType);

	void enableRestrictedMode(void) { bRestricted = true; }
	void disableRestrictedMode(void) { bRestricted = false; }
	void enableAutoConnect(void) { bAutoConnect = true; }
	void disableAutoConnect(void) { bAutoConnect = false; }
	void enableAutoDependency(void) { bAutoDependancy = true; }
	void disableAutoDependency(void) { bAutoDependancy = false; }
	void enableWatchDog(void) { bWithWatchDog = true; }
	void disableWatchod(void) { bWithWatchDog = false; }
	bool exportDependencyGraph(const char* szFileName) { 
		return knowledge.exportAppGraph(szFileName); 
	}

	KnowledgeBase* getKnowledgeBase(void) { return &knowledge; } 
	ErrorLogger* getLogger(void) { return logger;}

protected:
	virtual void onExecutableStart(void* which);
	virtual void onExecutableStop(void* which);
	virtual void onExecutableDied(void* which);
	virtual void onExecutableFailed(void* which);
	virtual void onCnnStablished(void* which);
	virtual void onCnnFailed(void* which);

private:
	bool bWithWatchDog;
	bool bAutoDependancy;
	bool bAutoConnect;
	bool bRestricted;
	ErrorLogger* logger;
	string strAppName;
	string strDefBroker;
	
	KnowledgeBase knowledge; 
	ExecutablePContainer runnables; 
	CnnContainer connections;
	ModulePContainer modules;
	ResourcePContainer resources;
	
	bool createKnowledgeBase(AppLoader &appLoader);
	void clearExecutables(void);
	bool isServer(Module* module);
	bool connectExtraPorts(void);
	bool allRunning(void);
	bool oneRunning(void);
	bool allStopped(void);
	bool prepare();
};
 
 
//}

#endif //__MANAGER__