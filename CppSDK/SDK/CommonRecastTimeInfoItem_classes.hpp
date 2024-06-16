#pragma once

 

// Package: CommonRecastTimeInfoItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C
// 0x0028 (0x02A0 - 0x0278)
class UCommonRecastTimeInfoItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ColumnTxt;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    HeadingTxt;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RecastTimeValueTxt;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TimeUnitTxt;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonRecastTimeInfoItem(int32 EntryPoint);
	void SetTextColor(const struct FLinearColor& Color);
	void SetRecastTime(float InRecastTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonRecastTimeInfoItem_C">();
	}
	static class UCommonRecastTimeInfoItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonRecastTimeInfoItem_C>();
	}
};
static_assert(alignof(UCommonRecastTimeInfoItem_C) == 0x000008, "Wrong alignment on UCommonRecastTimeInfoItem_C");
static_assert(sizeof(UCommonRecastTimeInfoItem_C) == 0x0002A0, "Wrong size on UCommonRecastTimeInfoItem_C");
static_assert(offsetof(UCommonRecastTimeInfoItem_C, UberGraphFrame) == 0x000278, "Member 'UCommonRecastTimeInfoItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonRecastTimeInfoItem_C, ColumnTxt) == 0x000280, "Member 'UCommonRecastTimeInfoItem_C::ColumnTxt' has a wrong offset!");
static_assert(offsetof(UCommonRecastTimeInfoItem_C, HeadingTxt) == 0x000288, "Member 'UCommonRecastTimeInfoItem_C::HeadingTxt' has a wrong offset!");
static_assert(offsetof(UCommonRecastTimeInfoItem_C, RecastTimeValueTxt) == 0x000290, "Member 'UCommonRecastTimeInfoItem_C::RecastTimeValueTxt' has a wrong offset!");
static_assert(offsetof(UCommonRecastTimeInfoItem_C, TimeUnitTxt) == 0x000298, "Member 'UCommonRecastTimeInfoItem_C::TimeUnitTxt' has a wrong offset!");

}

