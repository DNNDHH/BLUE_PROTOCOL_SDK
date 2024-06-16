#pragma once

 

// Package: MilitaryRecordList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MilitaryRecordList.MilitaryRecordList_C
// 0x0018 (0x0290 - 0x0278)
class UMilitaryRecordList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             ScrollBox_65;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_61;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MilitaryRecordList(int32 EntryPoint);
	void SetData(const TArray<struct FMilitaryRecordData>& InMilitaryRecordData, const bool InIsMilitalyRecordOpen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MilitaryRecordList_C">();
	}
	static class UMilitaryRecordList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMilitaryRecordList_C>();
	}
};
static_assert(alignof(UMilitaryRecordList_C) == 0x000008, "Wrong alignment on UMilitaryRecordList_C");
static_assert(sizeof(UMilitaryRecordList_C) == 0x000290, "Wrong size on UMilitaryRecordList_C");
static_assert(offsetof(UMilitaryRecordList_C, UberGraphFrame) == 0x000278, "Member 'UMilitaryRecordList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMilitaryRecordList_C, ScrollBox_65) == 0x000280, "Member 'UMilitaryRecordList_C::ScrollBox_65' has a wrong offset!");
static_assert(offsetof(UMilitaryRecordList_C, WidgetSwitcher_61) == 0x000288, "Member 'UMilitaryRecordList_C::WidgetSwitcher_61' has a wrong offset!");

}

