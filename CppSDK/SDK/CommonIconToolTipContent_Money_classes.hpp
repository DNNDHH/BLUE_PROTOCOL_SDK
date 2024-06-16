#pragma once

 

// Package: CommonIconToolTipContent_Money

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C
// 0x0030 (0x02A8 - 0x0278)
class UCommonIconToolTipContent_Money_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Exp_1;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelAmount;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextOption;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonIconToolTipContent_Money(int32 EntryPoint);
	void SetAmount(int32 InAmount, const class FText& InAmountText);
	void Set_Option(const class FText& InOptionText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_Money_C">();
	}
	static class UCommonIconToolTipContent_Money_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_Money_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_Money_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_Money_C");
static_assert(sizeof(UCommonIconToolTipContent_Money_C) == 0x0002A8, "Wrong size on UCommonIconToolTipContent_Money_C");
static_assert(offsetof(UCommonIconToolTipContent_Money_C, UberGraphFrame) == 0x000278, "Member 'UCommonIconToolTipContent_Money_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Money_C, BG) == 0x000280, "Member 'UCommonIconToolTipContent_Money_C::BG' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Money_C, Exp_1) == 0x000288, "Member 'UCommonIconToolTipContent_Money_C::Exp_1' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Money_C, Image_line) == 0x000290, "Member 'UCommonIconToolTipContent_Money_C::Image_line' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Money_C, LabelAmount) == 0x000298, "Member 'UCommonIconToolTipContent_Money_C::LabelAmount' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Money_C, TextOption) == 0x0002A0, "Member 'UCommonIconToolTipContent_Money_C::TextOption' has a wrong offset!");

}

