#pragma once

 

// Package: InteractNotice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InteractNotice.InteractNotice_C
// 0x0040 (0x02B8 - 0x0278)
class UInteractNotice_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       InteractText;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NoticeGrp;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayAnimIn;                                        // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUIVisible;                                       // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AnimationPlaing_AnimIn;                            // 0x02B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AnimationPlaing_AnimOut;                           // 0x02B3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_InteractNotice(int32 EntryPoint);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_3();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void OnPadSkinChange(const ESBPadKeySkinType SkinType);
	void Destruct();
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UpdateInteractionNotice();
	void Construct();
	void SetTextId(int32 InTextID);
	void SetJointGestureText(ESBJointGestureState InState);
	void PlayAnim(bool IsAnimIn);
	void GetEmoteText(ESBJointGestureState State, bool* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InteractNotice_C">();
	}
	static class UInteractNotice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInteractNotice_C>();
	}
};
static_assert(alignof(UInteractNotice_C) == 0x000008, "Wrong alignment on UInteractNotice_C");
static_assert(sizeof(UInteractNotice_C) == 0x0002B8, "Wrong size on UInteractNotice_C");
static_assert(offsetof(UInteractNotice_C, UberGraphFrame) == 0x000278, "Member 'UInteractNotice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInteractNotice_C, AnimOut) == 0x000280, "Member 'UInteractNotice_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UInteractNotice_C, AnimIn) == 0x000288, "Member 'UInteractNotice_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UInteractNotice_C, Bg1) == 0x000290, "Member 'UInteractNotice_C::Bg1' has a wrong offset!");
static_assert(offsetof(UInteractNotice_C, InteractText) == 0x000298, "Member 'UInteractNotice_C::InteractText' has a wrong offset!");
static_assert(offsetof(UInteractNotice_C, NoticeGrp) == 0x0002A0, "Member 'UInteractNotice_C::NoticeGrp' has a wrong offset!");
static_assert(offsetof(UInteractNotice_C, TextTable) == 0x0002A8, "Member 'UInteractNotice_C::TextTable' has a wrong offset!");
static_assert(offsetof(UInteractNotice_C, PlayAnimIn) == 0x0002B0, "Member 'UInteractNotice_C::PlayAnimIn' has a wrong offset!");
static_assert(offsetof(UInteractNotice_C, IsUIVisible) == 0x0002B1, "Member 'UInteractNotice_C::IsUIVisible' has a wrong offset!");
static_assert(offsetof(UInteractNotice_C, AnimationPlaing_AnimIn) == 0x0002B2, "Member 'UInteractNotice_C::AnimationPlaing_AnimIn' has a wrong offset!");
static_assert(offsetof(UInteractNotice_C, AnimationPlaing_AnimOut) == 0x0002B3, "Member 'UInteractNotice_C::AnimationPlaing_AnimOut' has a wrong offset!");

}

