#pragma once

 

// Package: CommonIconToolTipContents_RecastTimeParts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C
// 0x0028 (0x02A0 - 0x0278)
class UCommonIconToolTipContents_RecastTimeParts_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Column;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Heading;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RecastTime;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TimeUnit;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts(int32 EntryPoint);
	void SetTextColor(const struct FLinearColor& Color);
	void PreConstruct(bool IsDesignTime);
	void SetRecastTime(float InRecastTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContents_RecastTimeParts_C">();
	}
	static class UCommonIconToolTipContents_RecastTimeParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContents_RecastTimeParts_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContents_RecastTimeParts_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContents_RecastTimeParts_C");
static_assert(sizeof(UCommonIconToolTipContents_RecastTimeParts_C) == 0x0002A0, "Wrong size on UCommonIconToolTipContents_RecastTimeParts_C");
static_assert(offsetof(UCommonIconToolTipContents_RecastTimeParts_C, UberGraphFrame) == 0x000278, "Member 'UCommonIconToolTipContents_RecastTimeParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_RecastTimeParts_C, Column) == 0x000280, "Member 'UCommonIconToolTipContents_RecastTimeParts_C::Column' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_RecastTimeParts_C, Heading) == 0x000288, "Member 'UCommonIconToolTipContents_RecastTimeParts_C::Heading' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_RecastTimeParts_C, RecastTime) == 0x000290, "Member 'UCommonIconToolTipContents_RecastTimeParts_C::RecastTime' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContents_RecastTimeParts_C, TimeUnit) == 0x000298, "Member 'UCommonIconToolTipContents_RecastTimeParts_C::TimeUnit' has a wrong offset!");

}

