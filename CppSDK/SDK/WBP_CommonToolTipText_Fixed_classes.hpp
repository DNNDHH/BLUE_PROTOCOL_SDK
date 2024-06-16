#pragma once

 

// Package: WBP_CommonToolTipText_Fixed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonToolTipText_Fixed.WBP_CommonToolTipText_Fixed_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_CommonToolTipText_Fixed_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Label_Description;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTipDetailsDateTime_C*          WBP_ToolTipDetailsDateTime;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CommonToolTipText_Fixed(int32 EntryPoint);
	void SetText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonToolTipText_Fixed_C">();
	}
	static class UWBP_CommonToolTipText_Fixed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonToolTipText_Fixed_C>();
	}
};
static_assert(alignof(UWBP_CommonToolTipText_Fixed_C) == 0x000008, "Wrong alignment on UWBP_CommonToolTipText_Fixed_C");
static_assert(sizeof(UWBP_CommonToolTipText_Fixed_C) == 0x000290, "Wrong size on UWBP_CommonToolTipText_Fixed_C");
static_assert(offsetof(UWBP_CommonToolTipText_Fixed_C, UberGraphFrame) == 0x000278, "Member 'UWBP_CommonToolTipText_Fixed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipText_Fixed_C, Label_Description) == 0x000280, "Member 'UWBP_CommonToolTipText_Fixed_C::Label_Description' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipText_Fixed_C, WBP_ToolTipDetailsDateTime) == 0x000288, "Member 'UWBP_CommonToolTipText_Fixed_C::WBP_ToolTipDetailsDateTime' has a wrong offset!");

}

