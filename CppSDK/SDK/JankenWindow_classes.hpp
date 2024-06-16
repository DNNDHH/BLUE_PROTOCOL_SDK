#pragma once

 

// Package: JankenWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass JankenWindow.JankenWindow_C
// 0x0080 (0x02F8 - 0x0278)
class UJankenWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnCancel;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  ButtonFullScreen;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJankenButton_C*                        JankenButtonPaper;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJankenButton_C*                        JankenButtonRock;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJankenButton_C*                        JankenButtonScissors;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchTxtMsg;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Timer;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TimeText;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         TimeLimit;                                         // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_420D[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectButtonId;                                    // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEndMotion;                                        // 0x02ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bClose;                                            // 0x02EE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_420E[0x1];                                     // 0x02EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   JankenCancel;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_JankenWindow(int32 EntryPoint);
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Close();
	void Destruct();
	void SetTimer(float InTimer);
	void SelectButton(int32 ButtonId);
	void JankenResult(bool* BResult);
	void GetJankenHandText(ESBJankenHandType InHnadType, class FString* OutText);
	void GetResultText(ESBJankenHandType MyHandType, ESBJankenHandType TargetHandType, class FString* OutText);
	void GetJointGestureComponent(bool* IsValid, class USBJointGestureComponent** OutJointGestureComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JankenWindow_C">();
	}
	static class UJankenWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJankenWindow_C>();
	}
};
static_assert(alignof(UJankenWindow_C) == 0x000008, "Wrong alignment on UJankenWindow_C");
static_assert(sizeof(UJankenWindow_C) == 0x0002F8, "Wrong size on UJankenWindow_C");
static_assert(offsetof(UJankenWindow_C, UberGraphFrame) == 0x000278, "Member 'UJankenWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, AnimOut) == 0x000280, "Member 'UJankenWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, AnimIn) == 0x000288, "Member 'UJankenWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, BtnCancel) == 0x000290, "Member 'UJankenWindow_C::BtnCancel' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, ButtonFullScreen) == 0x000298, "Member 'UJankenWindow_C::ButtonFullScreen' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, JankenButtonPaper) == 0x0002A0, "Member 'UJankenWindow_C::JankenButtonPaper' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, JankenButtonRock) == 0x0002A8, "Member 'UJankenWindow_C::JankenButtonRock' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, JankenButtonScissors) == 0x0002B0, "Member 'UJankenWindow_C::JankenButtonScissors' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, SwitchTxtMsg) == 0x0002B8, "Member 'UJankenWindow_C::SwitchTxtMsg' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, Timer) == 0x0002C0, "Member 'UJankenWindow_C::Timer' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, TimeText) == 0x0002C8, "Member 'UJankenWindow_C::TimeText' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, TimeLimit) == 0x0002D0, "Member 'UJankenWindow_C::TimeLimit' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, OnClose) == 0x0002D8, "Member 'UJankenWindow_C::OnClose' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, SelectButtonId) == 0x0002E8, "Member 'UJankenWindow_C::SelectButtonId' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, bResult) == 0x0002EC, "Member 'UJankenWindow_C::bResult' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, bEndMotion) == 0x0002ED, "Member 'UJankenWindow_C::bEndMotion' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, bClose) == 0x0002EE, "Member 'UJankenWindow_C::bClose' has a wrong offset!");
static_assert(offsetof(UJankenWindow_C, JankenCancel) == 0x0002F0, "Member 'UJankenWindow_C::JankenCancel' has a wrong offset!");

}

