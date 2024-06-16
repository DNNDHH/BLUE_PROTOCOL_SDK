#pragma once

 

// Package: WBP_ScbValueItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ScbValueItem.WBP_ScbValueItem_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_ScbValueItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock_Value;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ScbValueItem(int32 EntryPoint);
	void SetValue(int32 Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ScbValueItem_C">();
	}
	static class UWBP_ScbValueItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ScbValueItem_C>();
	}
};
static_assert(alignof(UWBP_ScbValueItem_C) == 0x000008, "Wrong alignment on UWBP_ScbValueItem_C");
static_assert(sizeof(UWBP_ScbValueItem_C) == 0x000290, "Wrong size on UWBP_ScbValueItem_C");
static_assert(offsetof(UWBP_ScbValueItem_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ScbValueItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ScbValueItem_C, TextBlock_Value) == 0x000280, "Member 'UWBP_ScbValueItem_C::TextBlock_Value' has a wrong offset!");
static_assert(offsetof(UWBP_ScbValueItem_C, WidgetSwitcher) == 0x000288, "Member 'UWBP_ScbValueItem_C::WidgetSwitcher' has a wrong offset!");

}

