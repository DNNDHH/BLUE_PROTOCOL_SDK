#pragma once

 

// Package: CommonIconToolTipContent_MultiLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_MultiLine.CommonIconToolTipContent_MultiLine_C
// 0x0010 (0x0288 - 0x0278)
class UCommonIconToolTipContent_MultiLine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Label_Description;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonIconToolTipContent_MultiLine(int32 EntryPoint);
	void SetText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_MultiLine_C">();
	}
	static class UCommonIconToolTipContent_MultiLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_MultiLine_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_MultiLine_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_MultiLine_C");
static_assert(sizeof(UCommonIconToolTipContent_MultiLine_C) == 0x000288, "Wrong size on UCommonIconToolTipContent_MultiLine_C");
static_assert(offsetof(UCommonIconToolTipContent_MultiLine_C, UberGraphFrame) == 0x000278, "Member 'UCommonIconToolTipContent_MultiLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_MultiLine_C, Label_Description) == 0x000280, "Member 'UCommonIconToolTipContent_MultiLine_C::Label_Description' has a wrong offset!");

}

