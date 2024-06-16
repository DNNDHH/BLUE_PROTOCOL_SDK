#pragma once

 

// Package: UIBlocker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIBlocker.UIBlocker_C
// 0x0010 (0x02C0 - 0x02B0)
class UUIBlocker_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bBlockInput;                                       // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBUIBlockerType                              UIBlockerType;                                     // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIBlocker(int32 EntryPoint);
	void UpdateBlockInputByVisibility(ESlateVisibility IsVisibility);
	void ChangeUiBlockerType(ESBUIBlockerType Param_UIBlockerType);
	void SetBlockInputInBlocker();
	void Destruct();
	void BP_SetVisibility(ESlateVisibility InVisibility);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIBlocker_C">();
	}
	static class UUIBlocker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIBlocker_C>();
	}
};
static_assert(alignof(UUIBlocker_C) == 0x000008, "Wrong alignment on UUIBlocker_C");
static_assert(sizeof(UUIBlocker_C) == 0x0002C0, "Wrong size on UUIBlocker_C");
static_assert(offsetof(UUIBlocker_C, UberGraphFrame) == 0x0002B0, "Member 'UUIBlocker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIBlocker_C, bBlockInput) == 0x0002B8, "Member 'UUIBlocker_C::bBlockInput' has a wrong offset!");
static_assert(offsetof(UUIBlocker_C, UIBlockerType) == 0x0002B9, "Member 'UUIBlocker_C::UIBlockerType' has a wrong offset!");

}

