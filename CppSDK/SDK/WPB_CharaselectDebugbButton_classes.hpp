#pragma once

 

// Package: WPB_CharaselectDebugbButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WPB_CharaselectDebugbButton.WPB_CharaselectDebugbButton_C
// 0x0048 (0x02C0 - 0x0278)
class UWPB_CharaselectDebugbButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             MyName;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_33;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AASCharacterBase*                       Target;                                            // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 StateName;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   Command;                                           // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CharacterSelectCaptureOne_C*> CharacterSelectCaptureOne;                         // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WPB_CharaselectDebugbButton(int32 EntryPoint);
	void Initialize(const class FString& Param_StateName, class FName Param_Command, TArray<class ABP_CharacterSelectCaptureOne_C*>& Param_CharacterSelectCaptureOne);
	void BndEvt__SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPB_CharaselectDebugbButton_C">();
	}
	static class UWPB_CharaselectDebugbButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWPB_CharaselectDebugbButton_C>();
	}
};
static_assert(alignof(UWPB_CharaselectDebugbButton_C) == 0x000008, "Wrong alignment on UWPB_CharaselectDebugbButton_C");
static_assert(sizeof(UWPB_CharaselectDebugbButton_C) == 0x0002C0, "Wrong size on UWPB_CharaselectDebugbButton_C");
static_assert(offsetof(UWPB_CharaselectDebugbButton_C, UberGraphFrame) == 0x000278, "Member 'UWPB_CharaselectDebugbButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWPB_CharaselectDebugbButton_C, MyName) == 0x000280, "Member 'UWPB_CharaselectDebugbButton_C::MyName' has a wrong offset!");
static_assert(offsetof(UWPB_CharaselectDebugbButton_C, SBButton_C_33) == 0x000288, "Member 'UWPB_CharaselectDebugbButton_C::SBButton_C_33' has a wrong offset!");
static_assert(offsetof(UWPB_CharaselectDebugbButton_C, Target) == 0x000290, "Member 'UWPB_CharaselectDebugbButton_C::Target' has a wrong offset!");
static_assert(offsetof(UWPB_CharaselectDebugbButton_C, StateName) == 0x000298, "Member 'UWPB_CharaselectDebugbButton_C::StateName' has a wrong offset!");
static_assert(offsetof(UWPB_CharaselectDebugbButton_C, Command) == 0x0002A8, "Member 'UWPB_CharaselectDebugbButton_C::Command' has a wrong offset!");
static_assert(offsetof(UWPB_CharaselectDebugbButton_C, CharacterSelectCaptureOne) == 0x0002B0, "Member 'UWPB_CharaselectDebugbButton_C::CharacterSelectCaptureOne' has a wrong offset!");

}

