#pragma once

 

// Package: MilitaryRecordListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MilitaryRecordListItem.MilitaryRecordListItem_C
// 0x0028 (0x02A0 - 0x0278)
class UMilitaryRecordListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        BaseWidgetSwitcher;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RecordCounterText;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RecordNameText;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    UnitText;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MilitaryRecordListItem(int32 EntryPoint);
	void SetBaseImage(bool InIsBase);
	void SetData(const struct FMilitaryRecordData& InMilitaryRecordData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MilitaryRecordListItem_C">();
	}
	static class UMilitaryRecordListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMilitaryRecordListItem_C>();
	}
};
static_assert(alignof(UMilitaryRecordListItem_C) == 0x000008, "Wrong alignment on UMilitaryRecordListItem_C");
static_assert(sizeof(UMilitaryRecordListItem_C) == 0x0002A0, "Wrong size on UMilitaryRecordListItem_C");
static_assert(offsetof(UMilitaryRecordListItem_C, UberGraphFrame) == 0x000278, "Member 'UMilitaryRecordListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMilitaryRecordListItem_C, BaseWidgetSwitcher) == 0x000280, "Member 'UMilitaryRecordListItem_C::BaseWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UMilitaryRecordListItem_C, RecordCounterText) == 0x000288, "Member 'UMilitaryRecordListItem_C::RecordCounterText' has a wrong offset!");
static_assert(offsetof(UMilitaryRecordListItem_C, RecordNameText) == 0x000290, "Member 'UMilitaryRecordListItem_C::RecordNameText' has a wrong offset!");
static_assert(offsetof(UMilitaryRecordListItem_C, UnitText) == 0x000298, "Member 'UMilitaryRecordListItem_C::UnitText' has a wrong offset!");

}

