#pragma once

 

// Package: MyCharaMenu_LvSyncNum3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_LvSyncNum3.MyCharaMenu_LvSyncNum3_C
// 0x0028 (0x02A0 - 0x0278)
class UMyCharaMenu_LvSyncNum3_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         NumGrp;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtNum;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPer;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bPercent;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MyCharaMenu_LvSyncNum3(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetValue(int32 Value, int32 OriginalValue);
	void Clear();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_LvSyncNum3_C">();
	}
	static class UMyCharaMenu_LvSyncNum3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_LvSyncNum3_C>();
	}
};
static_assert(alignof(UMyCharaMenu_LvSyncNum3_C) == 0x000008, "Wrong alignment on UMyCharaMenu_LvSyncNum3_C");
static_assert(sizeof(UMyCharaMenu_LvSyncNum3_C) == 0x0002A0, "Wrong size on UMyCharaMenu_LvSyncNum3_C");
static_assert(offsetof(UMyCharaMenu_LvSyncNum3_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_LvSyncNum3_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSyncNum3_C, NumGrp) == 0x000280, "Member 'UMyCharaMenu_LvSyncNum3_C::NumGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSyncNum3_C, TxtNum) == 0x000288, "Member 'UMyCharaMenu_LvSyncNum3_C::TxtNum' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSyncNum3_C, TxtPer) == 0x000290, "Member 'UMyCharaMenu_LvSyncNum3_C::TxtPer' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_LvSyncNum3_C, bPercent) == 0x000298, "Member 'UMyCharaMenu_LvSyncNum3_C::bPercent' has a wrong offset!");

}

