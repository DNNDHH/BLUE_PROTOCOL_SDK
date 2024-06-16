#pragma once

 

// Package: MyCharaMenu_LvSyncNum2

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_LvSyncNum2.MyCharaMenu_LvSyncNum2_C
// 0x0018 (0x0290 - 0x0278)
class UMyCharaMenu_LvSyncNum2_C final : public UUserWidget
{
public:
	class UHorizontalBox*                         NumGrp;                                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtNum;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bPercent;                                          // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void SetValue(int32 Value, int32 OriginalValue);
	void Clear();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_LvSyncNum2_C">();
	}
	static class UMyCharaMenu_LvSyncNum2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_LvSyncNum2_C>();
	}
};
static_assert(alignof(UMyCharaMenu_LvSyncNum2_C) == 0x000008, "Wrong alignment on UMyCharaMenu_LvSyncNum2_C");
static_assert(sizeof(UMyCharaMenu_LvSyncNum2_C) == 0x000290, "Wrong size on UMyCharaMenu_LvSyncNum2_C");
static_assert(offsetof(UMyCharaMenu_LvSyncNum2_C, NumGrp) == 0x000278, "Member 'UMyCharaMenu_LvSyncNum2_C::NumGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSyncNum2_C, TxtNum) == 0x000280, "Member 'UMyCharaMenu_LvSyncNum2_C::TxtNum' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSyncNum2_C, bPercent) == 0x000288, "Member 'UMyCharaMenu_LvSyncNum2_C::bPercent' has a wrong offset!");

}

