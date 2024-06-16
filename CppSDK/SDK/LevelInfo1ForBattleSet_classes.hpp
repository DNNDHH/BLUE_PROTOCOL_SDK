#pragma once

 

// Package: LevelInfo1ForBattleSet

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LevelInfo1ForBattleSet.LevelInfo1ForBattleSet_C
// 0x0010 (0x0288 - 0x0278)
class ULevelInfo1ForBattleSet_C final : public UUserWidget
{
public:
	class USBRuntimeTextBlock*                    LevelHeadingTxt;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelValueTxt;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetLevel(int32 InLevel);
	void SetImagineLevelSync(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType, bool InForceLevelSyncOff);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LevelInfo1ForBattleSet_C">();
	}
	static class ULevelInfo1ForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelInfo1ForBattleSet_C>();
	}
};
static_assert(alignof(ULevelInfo1ForBattleSet_C) == 0x000008, "Wrong alignment on ULevelInfo1ForBattleSet_C");
static_assert(sizeof(ULevelInfo1ForBattleSet_C) == 0x000288, "Wrong size on ULevelInfo1ForBattleSet_C");
static_assert(offsetof(ULevelInfo1ForBattleSet_C, LevelHeadingTxt) == 0x000278, "Member 'ULevelInfo1ForBattleSet_C::LevelHeadingTxt' has a wrong offset!");
static_assert(offsetof(ULevelInfo1ForBattleSet_C, LevelValueTxt) == 0x000280, "Member 'ULevelInfo1ForBattleSet_C::LevelValueTxt' has a wrong offset!");

}

