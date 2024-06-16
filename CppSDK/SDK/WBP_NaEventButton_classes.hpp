#pragma once

 

// Package: WBP_NaEventButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NaEventButton.WBP_NaEventButton_C
// 0x0008 (0x0280 - 0x0278)
class UWBP_NaEventButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_NaEventButton(int32 EntryPoint);
	void Init(class UCommandMenu_C* Owner);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NaEventButton_C">();
	}
	static class UWBP_NaEventButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NaEventButton_C>();
	}
};
static_assert(alignof(UWBP_NaEventButton_C) == 0x000008, "Wrong alignment on UWBP_NaEventButton_C");
static_assert(sizeof(UWBP_NaEventButton_C) == 0x000280, "Wrong size on UWBP_NaEventButton_C");
static_assert(offsetof(UWBP_NaEventButton_C, UberGraphFrame) == 0x000278, "Member 'UWBP_NaEventButton_C::UberGraphFrame' has a wrong offset!");

}

