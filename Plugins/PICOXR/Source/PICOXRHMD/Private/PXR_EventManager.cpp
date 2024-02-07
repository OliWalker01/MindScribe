// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

#include "PXR_EventManager.h"

static UPICOXREventManager* EventManagerInstance = nullptr;
UPICOXREventManager* UPICOXREventManager::GetInstance() 
{
	if (EventManagerInstance == nullptr)
    {
		EventManagerInstance = NewObject<UPICOXREventManager>();
		EventManagerInstance->AddToRoot();
	}
	return EventManagerInstance;
}