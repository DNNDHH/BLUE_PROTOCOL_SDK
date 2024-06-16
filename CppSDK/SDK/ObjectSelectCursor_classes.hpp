#pragma once

 

// Package: ObjectSelectCursor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ObjectSelectCursor.ObjectSelectCursor_C
// 0x0080 (0x02F8 - 0x0278)
class UObjectSelectCursor_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CircleGauge;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObjectSelectCursor_DefaultIcon_C*      DefaultIcon;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GatherImage;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_88;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_183;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFadeIn;                                          // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6791[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             FinishedFade;                                      // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Opacity;                                           // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlaySE;                                          // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6792[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GaugeMaxWaitCount;                                 // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowGatherImage;                                 // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6793[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2D*>                     Te;                                                // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                             GatherTexture;                                     // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void FinishedFade__DelegateSignature(bool Param_IsFadeIn);
	void ExecuteUbergraph_ObjectSelectCursor(int32 EntryPoint);
	void SEreset();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Fade_Out();
	void Fade_In();
	void ChargeUp();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetGatherImage(class USBInteractionTargetComponent* TargetComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ObjectSelectCursor_C">();
	}
	static class UObjectSelectCursor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectSelectCursor_C>();
	}
};
static_assert(alignof(UObjectSelectCursor_C) == 0x000008, "Wrong alignment on UObjectSelectCursor_C");
static_assert(sizeof(UObjectSelectCursor_C) == 0x0002F8, "Wrong size on UObjectSelectCursor_C");
static_assert(offsetof(UObjectSelectCursor_C, UberGraphFrame) == 0x000278, "Member 'UObjectSelectCursor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, AnimInOut) == 0x000280, "Member 'UObjectSelectCursor_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, CircleGauge) == 0x000288, "Member 'UObjectSelectCursor_C::CircleGauge' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, DefaultIcon) == 0x000290, "Member 'UObjectSelectCursor_C::DefaultIcon' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, GatherImage) == 0x000298, "Member 'UObjectSelectCursor_C::GatherImage' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, Overlay_88) == 0x0002A0, "Member 'UObjectSelectCursor_C::Overlay_88' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, VerticalBox_183) == 0x0002A8, "Member 'UObjectSelectCursor_C::VerticalBox_183' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, GaugeMat) == 0x0002B0, "Member 'UObjectSelectCursor_C::GaugeMat' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, IsFadeIn) == 0x0002B8, "Member 'UObjectSelectCursor_C::IsFadeIn' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, FinishedFade) == 0x0002C0, "Member 'UObjectSelectCursor_C::FinishedFade' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, Opacity) == 0x0002D0, "Member 'UObjectSelectCursor_C::Opacity' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, IsPlaySE) == 0x0002D4, "Member 'UObjectSelectCursor_C::IsPlaySE' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, GaugeMaxWaitCount) == 0x0002D8, "Member 'UObjectSelectCursor_C::GaugeMaxWaitCount' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, IsShowGatherImage) == 0x0002DC, "Member 'UObjectSelectCursor_C::IsShowGatherImage' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, Te) == 0x0002E0, "Member 'UObjectSelectCursor_C::Te' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursor_C, GatherTexture) == 0x0002F0, "Member 'UObjectSelectCursor_C::GatherTexture' has a wrong offset!");

}

