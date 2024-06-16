#pragma once

 

// Package: Startup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkipPointData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Startup.Startup_C
// 0x0148 (0x03C0 - 0x0278)
class UStartup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Notice;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BG1In;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Fadeout;                                      // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BG2;                                          // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_Project;                                      // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BN;                                           // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_BNO;                                          // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_UE;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_ThirdParty;                                   // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                AllowSkip;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg2;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FadeoutFilter;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Group_BG;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Group_Logo;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Group_Notice;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_125;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BNOLogo;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_UE4Logo;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_WwiseLogo;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Logo_BNLogo;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Logo_Project;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinish;                                          // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidgetAnimation*                       CurrrentAnimation;                                 // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFinishCalled;                                    // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_454A[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidgetAnimation*>               StackAnimations;                                   // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UWidgetAnimation*, struct FSkipPointData> SkipDatas;                                         // 0x0368(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSBCursorStateHandle                   CursorHandle;                                      // 0x03B8(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsFirstPlay;                                       // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Termination;                                       // 0x03BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnFinish__DelegateSignature();
	void ExecuteUbergraph_Startup(int32 EntryPoint);
	void TryRemove();
	void TerminationRequest();
	void CustomEvent_0();
	void Destruct();
	void OnAnimationStarted(const class UWidgetAnimation* Animation);
	void RequestBGM();
	void BndEvt__AllowSkip_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature();
	void CustomEvent_1();
	void CallFinish();
	void Construct();
	void AnimFinished();
	void PlayStackTop();
	void InitAnimationDelegate();
	void InitSkipPoint();
	void TrySkip();
	void StartAnimation(class UWidgetAnimation* InAnimation, float InStartTimeOffset);
	void Is_Today_Watched(bool* IsTodayWatch);
	void UpdateWatchTime();
	void SequenceEvent__ENTRYPOINTStartup_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Startup_C">();
	}
	static class UStartup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStartup_C>();
	}
};
static_assert(alignof(UStartup_C) == 0x000008, "Wrong alignment on UStartup_C");
static_assert(sizeof(UStartup_C) == 0x0003C0, "Wrong size on UStartup_C");
static_assert(offsetof(UStartup_C, UberGraphFrame) == 0x000278, "Member 'UStartup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStartup_C, Anim_Notice) == 0x000280, "Member 'UStartup_C::Anim_Notice' has a wrong offset!");
static_assert(offsetof(UStartup_C, Anim_BG1In) == 0x000288, "Member 'UStartup_C::Anim_BG1In' has a wrong offset!");
static_assert(offsetof(UStartup_C, Anim_Fadeout) == 0x000290, "Member 'UStartup_C::Anim_Fadeout' has a wrong offset!");
static_assert(offsetof(UStartup_C, Anim_BG2) == 0x000298, "Member 'UStartup_C::Anim_BG2' has a wrong offset!");
static_assert(offsetof(UStartup_C, Anim_Project) == 0x0002A0, "Member 'UStartup_C::Anim_Project' has a wrong offset!");
static_assert(offsetof(UStartup_C, Anim_BN) == 0x0002A8, "Member 'UStartup_C::Anim_BN' has a wrong offset!");
static_assert(offsetof(UStartup_C, Anim_BNO) == 0x0002B0, "Member 'UStartup_C::Anim_BNO' has a wrong offset!");
static_assert(offsetof(UStartup_C, Anim_UE) == 0x0002B8, "Member 'UStartup_C::Anim_UE' has a wrong offset!");
static_assert(offsetof(UStartup_C, Anim_ThirdParty) == 0x0002C0, "Member 'UStartup_C::Anim_ThirdParty' has a wrong offset!");
static_assert(offsetof(UStartup_C, AllowSkip) == 0x0002C8, "Member 'UStartup_C::AllowSkip' has a wrong offset!");
static_assert(offsetof(UStartup_C, Bg1) == 0x0002D0, "Member 'UStartup_C::Bg1' has a wrong offset!");
static_assert(offsetof(UStartup_C, Bg2) == 0x0002D8, "Member 'UStartup_C::Bg2' has a wrong offset!");
static_assert(offsetof(UStartup_C, CanvasPanel_0) == 0x0002E0, "Member 'UStartup_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UStartup_C, FadeoutFilter) == 0x0002E8, "Member 'UStartup_C::FadeoutFilter' has a wrong offset!");
static_assert(offsetof(UStartup_C, Group_BG) == 0x0002F0, "Member 'UStartup_C::Group_BG' has a wrong offset!");
static_assert(offsetof(UStartup_C, Group_Logo) == 0x0002F8, "Member 'UStartup_C::Group_Logo' has a wrong offset!");
static_assert(offsetof(UStartup_C, Group_Notice) == 0x000300, "Member 'UStartup_C::Group_Notice' has a wrong offset!");
static_assert(offsetof(UStartup_C, Image_125) == 0x000308, "Member 'UStartup_C::Image_125' has a wrong offset!");
static_assert(offsetof(UStartup_C, Image_BNOLogo) == 0x000310, "Member 'UStartup_C::Image_BNOLogo' has a wrong offset!");
static_assert(offsetof(UStartup_C, Image_UE4Logo) == 0x000318, "Member 'UStartup_C::Image_UE4Logo' has a wrong offset!");
static_assert(offsetof(UStartup_C, Image_WwiseLogo) == 0x000320, "Member 'UStartup_C::Image_WwiseLogo' has a wrong offset!");
static_assert(offsetof(UStartup_C, Logo_BNLogo) == 0x000328, "Member 'UStartup_C::Logo_BNLogo' has a wrong offset!");
static_assert(offsetof(UStartup_C, Logo_Project) == 0x000330, "Member 'UStartup_C::Logo_Project' has a wrong offset!");
static_assert(offsetof(UStartup_C, OnFinish) == 0x000338, "Member 'UStartup_C::OnFinish' has a wrong offset!");
static_assert(offsetof(UStartup_C, CurrrentAnimation) == 0x000348, "Member 'UStartup_C::CurrrentAnimation' has a wrong offset!");
static_assert(offsetof(UStartup_C, IsFinishCalled) == 0x000350, "Member 'UStartup_C::IsFinishCalled' has a wrong offset!");
static_assert(offsetof(UStartup_C, StackAnimations) == 0x000358, "Member 'UStartup_C::StackAnimations' has a wrong offset!");
static_assert(offsetof(UStartup_C, SkipDatas) == 0x000368, "Member 'UStartup_C::SkipDatas' has a wrong offset!");
static_assert(offsetof(UStartup_C, CursorHandle) == 0x0003B8, "Member 'UStartup_C::CursorHandle' has a wrong offset!");
static_assert(offsetof(UStartup_C, IsFirstPlay) == 0x0003BC, "Member 'UStartup_C::IsFirstPlay' has a wrong offset!");
static_assert(offsetof(UStartup_C, Termination) == 0x0003BD, "Member 'UStartup_C::Termination' has a wrong offset!");

}

