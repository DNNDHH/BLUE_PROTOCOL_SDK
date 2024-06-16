#pragma once

 

// Package: SecondPasswordSender

#include "Basic.hpp"

#include "SecondPasswordSenderStartType_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SecondPasswordSenderEndReason_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SecondPasswordSender.SecondPasswordSender_C
// 0x0048 (0x02C0 - 0x0278)
class USecondPasswordSender_C final : public USBSecondPasswordSender
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    CaptionMain;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CaptionSub;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoftwareNumericKeypad_C*               SoftwareNumericKeypad;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnd;                                             // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESecondPasswordSenderStartType                Role;                                              // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnEnd__DelegateSignature(ESendSecondPasswordRole Param_Role, ESecondPasswordSenderEndReason Reason, ESecondPasswordSenderStartType StartType);
	void ExecuteUbergraph_SecondPasswordSender(int32 EntryPoint);
	void Cancel();
	void BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void Construct();
	void BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature();
	void OnAuthorizeSecondPassword(bool bWasSuccessful, int32 ExpireCount, ESendSecondPasswordRole Param_Role, bool bWasAuthorized);
	void SendPassword(ESendSecondPasswordRole Param_Role);
	void ClearPassword();
	void SetCaption();
	void SetCaptionFailure(int32 ExpireCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SecondPasswordSender_C">();
	}
	static class USecondPasswordSender_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USecondPasswordSender_C>();
	}
};
static_assert(alignof(USecondPasswordSender_C) == 0x000008, "Wrong alignment on USecondPasswordSender_C");
static_assert(sizeof(USecondPasswordSender_C) == 0x0002C0, "Wrong size on USecondPasswordSender_C");
static_assert(offsetof(USecondPasswordSender_C, UberGraphFrame) == 0x000278, "Member 'USecondPasswordSender_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USecondPasswordSender_C, CaptionMain) == 0x000280, "Member 'USecondPasswordSender_C::CaptionMain' has a wrong offset!");
static_assert(offsetof(USecondPasswordSender_C, CaptionSub) == 0x000288, "Member 'USecondPasswordSender_C::CaptionSub' has a wrong offset!");
static_assert(offsetof(USecondPasswordSender_C, CmnClose01) == 0x000290, "Member 'USecondPasswordSender_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(USecondPasswordSender_C, SoftwareNumericKeypad) == 0x000298, "Member 'USecondPasswordSender_C::SoftwareNumericKeypad' has a wrong offset!");
static_assert(offsetof(USecondPasswordSender_C, UIBlocker) == 0x0002A0, "Member 'USecondPasswordSender_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(USecondPasswordSender_C, OnEnd) == 0x0002A8, "Member 'USecondPasswordSender_C::OnEnd' has a wrong offset!");
static_assert(offsetof(USecondPasswordSender_C, Role) == 0x0002B8, "Member 'USecondPasswordSender_C::Role' has a wrong offset!");

}

