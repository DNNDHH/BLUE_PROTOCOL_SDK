#pragma once

 

// Package: MyCharaMenu_LvSyncNum1

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_LvSyncNum1.MyCharaMenu_LvSyncNum1_C
// 0x0010 (0x0288 - 0x0278)
class UMyCharaMenu_LvSyncNum1_C final : public UUserWidget
{
public:
	class UHorizontalBox*                         NumGrp;                                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtNum;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetValue(int32 Value, int32 OriginalValue);
	void Clear();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_LvSyncNum1_C">();
	}
	static class UMyCharaMenu_LvSyncNum1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_LvSyncNum1_C>();
	}
};
static_assert(alignof(UMyCharaMenu_LvSyncNum1_C) == 0x000008, "Wrong alignment on UMyCharaMenu_LvSyncNum1_C");
static_assert(sizeof(UMyCharaMenu_LvSyncNum1_C) == 0x000288, "Wrong size on UMyCharaMenu_LvSyncNum1_C");
static_assert(offsetof(UMyCharaMenu_LvSyncNum1_C, NumGrp) == 0x000278, "Member 'UMyCharaMenu_LvSyncNum1_C::NumGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSyncNum1_C, TxtNum) == 0x000280, "Member 'UMyCharaMenu_LvSyncNum1_C::TxtNum' has a wrong offset!");

}

