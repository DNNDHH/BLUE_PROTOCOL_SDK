#pragma once

 

// Package: CraftJIngle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CraftJIngle.CraftJIngle_C
// 0x00E8 (0x0360 - 0x0278)
class UCraftJIngle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimFadeOut;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Critical;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Fail;                                              // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Success;                                           // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           FailurePanel;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FxBg;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           HugeSuccess;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_106;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidgetCritical;                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidgetSuccess;                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SuccessPanel;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       CurrentAnim;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAnimFinished;                                    // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSuccess;                                         // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCritical;                                        // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFail;                                            // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FDC[0x1];                                     // 0x030B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBox2D                                 Box2D;                                             // 0x030C(0x0014)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	TArray<class UImage*>                         Particles;                                         // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FBox2D>                         Params;                                            // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              OffsetPos;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnAnimFinished__DelegateSignature();
	void ExecuteUbergraph_CraftJIngle(int32 EntryPoint);
	void KickSE();
	void Play_Critical();
	void Play_Failure();
	void Play_Success();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnAnimationStarted(const class UWidgetAnimation* Animation);
	void Construct();
	void SetStatus(bool Param_IsSuccess, bool Param_IsCritical, bool Param_IsFail);
	void GetIsSuccess(bool* Param_IsSuccess);
	void GetIsCritical(bool* Param_IsCritical);
	void GetisFailure(bool* Param_IsFail);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CraftJIngle_C">();
	}
	static class UCraftJIngle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftJIngle_C>();
	}
};
static_assert(alignof(UCraftJIngle_C) == 0x000008, "Wrong alignment on UCraftJIngle_C");
static_assert(sizeof(UCraftJIngle_C) == 0x000360, "Wrong size on UCraftJIngle_C");
static_assert(offsetof(UCraftJIngle_C, UberGraphFrame) == 0x000278, "Member 'UCraftJIngle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, AnimFadeOut) == 0x000280, "Member 'UCraftJIngle_C::AnimFadeOut' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, Critical) == 0x000288, "Member 'UCraftJIngle_C::Critical' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, Fail) == 0x000290, "Member 'UCraftJIngle_C::Fail' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, Success) == 0x000298, "Member 'UCraftJIngle_C::Success' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, FailurePanel) == 0x0002A0, "Member 'UCraftJIngle_C::FailurePanel' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, FxBg) == 0x0002A8, "Member 'UCraftJIngle_C::FxBg' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, HugeSuccess) == 0x0002B0, "Member 'UCraftJIngle_C::HugeSuccess' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, Image) == 0x0002B8, "Member 'UCraftJIngle_C::Image' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, Image_0) == 0x0002C0, "Member 'UCraftJIngle_C::Image_0' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, Image_106) == 0x0002C8, "Member 'UCraftJIngle_C::Image_106' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, NiagaraSystemWidgetCritical) == 0x0002D0, "Member 'UCraftJIngle_C::NiagaraSystemWidgetCritical' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, NiagaraSystemWidgetSuccess) == 0x0002D8, "Member 'UCraftJIngle_C::NiagaraSystemWidgetSuccess' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, SuccessPanel) == 0x0002E0, "Member 'UCraftJIngle_C::SuccessPanel' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, UIBlocker) == 0x0002E8, "Member 'UCraftJIngle_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, CurrentAnim) == 0x0002F0, "Member 'UCraftJIngle_C::CurrentAnim' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, OnAnimFinished) == 0x0002F8, "Member 'UCraftJIngle_C::OnAnimFinished' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, IsSuccess) == 0x000308, "Member 'UCraftJIngle_C::IsSuccess' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, IsCritical) == 0x000309, "Member 'UCraftJIngle_C::IsCritical' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, IsFail) == 0x00030A, "Member 'UCraftJIngle_C::IsFail' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, Box2D) == 0x00030C, "Member 'UCraftJIngle_C::Box2D' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, Particles) == 0x000320, "Member 'UCraftJIngle_C::Particles' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, Params) == 0x000330, "Member 'UCraftJIngle_C::Params' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, OffsetPos) == 0x000340, "Member 'UCraftJIngle_C::OffsetPos' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, Color) == 0x000348, "Member 'UCraftJIngle_C::Color' has a wrong offset!");
static_assert(offsetof(UCraftJIngle_C, IsActive) == 0x000358, "Member 'UCraftJIngle_C::IsActive' has a wrong offset!");

}

