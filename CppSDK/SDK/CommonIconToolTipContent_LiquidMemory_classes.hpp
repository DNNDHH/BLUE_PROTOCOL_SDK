#pragma once

 

// Package: CommonIconToolTipContent_LiquidMemory

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_LiquidMemory.CommonIconToolTipContent_LiquidMemory_C
// 0x0028 (0x02A0 - 0x0278)
class UCommonIconToolTipContent_LiquidMemory_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BLine;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_VLine;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_CategoryName;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_AccumulateConditions;                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetLiquidMemory(int32 InLiquidMemoryId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_LiquidMemory_C">();
	}
	static class UCommonIconToolTipContent_LiquidMemory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_LiquidMemory_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_LiquidMemory_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_LiquidMemory_C");
static_assert(sizeof(UCommonIconToolTipContent_LiquidMemory_C) == 0x0002A0, "Wrong size on UCommonIconToolTipContent_LiquidMemory_C");
static_assert(offsetof(UCommonIconToolTipContent_LiquidMemory_C, BG) == 0x000278, "Member 'UCommonIconToolTipContent_LiquidMemory_C::BG' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_LiquidMemory_C, Image_BLine) == 0x000280, "Member 'UCommonIconToolTipContent_LiquidMemory_C::Image_BLine' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_LiquidMemory_C, Image_VLine) == 0x000288, "Member 'UCommonIconToolTipContent_LiquidMemory_C::Image_VLine' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_LiquidMemory_C, Txt_CategoryName) == 0x000290, "Member 'UCommonIconToolTipContent_LiquidMemory_C::Txt_CategoryName' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_LiquidMemory_C, VerticalBox_AccumulateConditions) == 0x000298, "Member 'UCommonIconToolTipContent_LiquidMemory_C::VerticalBox_AccumulateConditions' has a wrong offset!");

}

