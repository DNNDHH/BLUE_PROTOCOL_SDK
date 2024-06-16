#pragma once

 

// Package: BP_QuestManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_QuestManager.BP_QuestManager_C
// 0x0000 (0x0038 - 0x0038)
class UBP_QuestManager_C final : public USBQuestManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_QuestManager_C">();
	}
	static class UBP_QuestManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_QuestManager_C>();
	}
};
static_assert(alignof(UBP_QuestManager_C) == 0x000008, "Wrong alignment on UBP_QuestManager_C");
static_assert(sizeof(UBP_QuestManager_C) == 0x000038, "Wrong size on UBP_QuestManager_C");

}

