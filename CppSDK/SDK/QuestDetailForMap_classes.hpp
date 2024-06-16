#pragma once

 

// Package: QuestDetailForMap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetailForMap.QuestDetailForMap_C
// 0x0070 (0x02E8 - 0x0278)
class UQuestDetailForMap_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutAnim;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlur_80;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BaseImage;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CloseButton;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cv_MoveToQuestListUI;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn01_C*                            MoveToQuestListBtn;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_C*                         QuestDetail;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         QuestIndex;                                        // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_7F65[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFinish;                                          // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bPreviewMode;                                      // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	EQuestDetail_FinishStatus                     Finish_Status;                                     // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsMoveQuest;                                      // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsShowMoveButton;                                 // 0x02E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32 Param_QuestIndex);
	void ExecuteUbergraph_QuestDetailForMap(int32 EntryPoint);
	void BndEvt__QuestDetailForMap_MoveToQuestListBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__QuestDetailForMap_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void Destruct();
	void OnMenuFinish();
	void BndEvt__QuestConfirmationMenuEx_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1();
	void Construct();
	void SetMoveButton(bool InShowButton);
	void IsShowMoveButton(bool* OutParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetailForMap_C">();
	}
	static class UQuestDetailForMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetailForMap_C>();
	}
};
static_assert(alignof(UQuestDetailForMap_C) == 0x000008, "Wrong alignment on UQuestDetailForMap_C");
static_assert(sizeof(UQuestDetailForMap_C) == 0x0002E8, "Wrong size on UQuestDetailForMap_C");
static_assert(offsetof(UQuestDetailForMap_C, UberGraphFrame) == 0x000278, "Member 'UQuestDetailForMap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, OutAnim) == 0x000280, "Member 'UQuestDetailForMap_C::OutAnim' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, InAnim) == 0x000288, "Member 'UQuestDetailForMap_C::InAnim' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, BackgroundBlur_80) == 0x000290, "Member 'UQuestDetailForMap_C::BackgroundBlur_80' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, BaseImage) == 0x000298, "Member 'UQuestDetailForMap_C::BaseImage' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, BtnScreen) == 0x0002A0, "Member 'UQuestDetailForMap_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, CloseButton) == 0x0002A8, "Member 'UQuestDetailForMap_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, Cv_MoveToQuestListUI) == 0x0002B0, "Member 'UQuestDetailForMap_C::Cv_MoveToQuestListUI' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, MoveToQuestListBtn) == 0x0002B8, "Member 'UQuestDetailForMap_C::MoveToQuestListBtn' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, QuestDetail) == 0x0002C0, "Member 'UQuestDetailForMap_C::QuestDetail' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, QuestIndex) == 0x0002C8, "Member 'UQuestDetailForMap_C::QuestIndex' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, OnFinish) == 0x0002D0, "Member 'UQuestDetailForMap_C::OnFinish' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, bPreviewMode) == 0x0002E0, "Member 'UQuestDetailForMap_C::bPreviewMode' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, Finish_Status) == 0x0002E1, "Member 'UQuestDetailForMap_C::Finish_Status' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, bIsMoveQuest) == 0x0002E2, "Member 'UQuestDetailForMap_C::bIsMoveQuest' has a wrong offset!");
static_assert(offsetof(UQuestDetailForMap_C, bIsShowMoveButton) == 0x0002E3, "Member 'UQuestDetailForMap_C::bIsShowMoveButton' has a wrong offset!");

}

