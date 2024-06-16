#pragma once

 

// Package: SwitchingTitle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SwitchingTitle.SwitchingTitle_C
// 0x0010 (0x02D0 - 0x02C0)
class USwitchingTitle_C final : public USBSwitchingTitle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SwitchingTitle(int32 EntryPoint);
	void BndEvt__Effect_ContainerTab_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnPlaySE(bool IsOpen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SwitchingTitle_C">();
	}
	static class USwitchingTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USwitchingTitle_C>();
	}
};
static_assert(alignof(USwitchingTitle_C) == 0x000008, "Wrong alignment on USwitchingTitle_C");
static_assert(sizeof(USwitchingTitle_C) == 0x0002D0, "Wrong size on USwitchingTitle_C");
static_assert(offsetof(USwitchingTitle_C, UberGraphFrame) == 0x0002C0, "Member 'USwitchingTitle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USwitchingTitle_C, Button) == 0x0002C8, "Member 'USwitchingTitle_C::Button' has a wrong offset!");

}

