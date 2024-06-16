#pragma once

 

// Package: GatherIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GatherIcon.GatherIcon_C
// 0x00B0 (0x0338 - 0x0288)
class UGatherIcon_C final : public USBNamePlateWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimGauge;                                         // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimChange;                                        // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleGauge;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObjectSelectCursor_DefaultIcon_C*      DefaultIcon;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GatherImage;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LiquidMemoryIcon;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_88;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_55;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_183;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFadeIn;                                          // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53C9[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             FinishedFade;                                      // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Opacity;                                           // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlaySE;                                          // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53CA[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GaugeMaxWaitCount;                                 // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowGatherImage;                                 // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53CB[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2D*>                     Te;                                                // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                             GatherTexture;                                     // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpantionRate;                                     // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClipDistance;                                      // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void FinishedFade__DelegateSignature(bool Param_IsFadeIn);
	void ExecuteUbergraph_GatherIcon(int32 EntryPoint);
	void SEreset();
	void AutoChangeVisible();
	void AutoChangeInvisible();
	void Construct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Fade_Out();
	void Fade_In();
	void ChargeUp();
	void SetGatherImage(ESBTreasureBoxRarity TargetComponent);
	void Update_Gather_Icon(bool IsGaugeFadeIn, bool IsMotionCanceled);
	void Change_Size(float CharaDistance, float ReachDistance);
	void DebugFunc(float NewParam, float NewParam1, float NewParam2);
	void LiquidMemoryIconCheck();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GatherIcon_C">();
	}
	static class UGatherIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGatherIcon_C>();
	}
};
static_assert(alignof(UGatherIcon_C) == 0x000008, "Wrong alignment on UGatherIcon_C");
static_assert(sizeof(UGatherIcon_C) == 0x000338, "Wrong size on UGatherIcon_C");
static_assert(offsetof(UGatherIcon_C, UberGraphFrame) == 0x000288, "Member 'UGatherIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, AnimGauge) == 0x000290, "Member 'UGatherIcon_C::AnimGauge' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, AnimChange) == 0x000298, "Member 'UGatherIcon_C::AnimChange' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, AnimInOut) == 0x0002A0, "Member 'UGatherIcon_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, CanvasPanel_0) == 0x0002A8, "Member 'UGatherIcon_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, CircleGauge) == 0x0002B0, "Member 'UGatherIcon_C::CircleGauge' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, DefaultIcon) == 0x0002B8, "Member 'UGatherIcon_C::DefaultIcon' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, GatherImage) == 0x0002C0, "Member 'UGatherIcon_C::GatherImage' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, LiquidMemoryIcon) == 0x0002C8, "Member 'UGatherIcon_C::LiquidMemoryIcon' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, Overlay_88) == 0x0002D0, "Member 'UGatherIcon_C::Overlay_88' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, VerticalBox_55) == 0x0002D8, "Member 'UGatherIcon_C::VerticalBox_55' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, VerticalBox_183) == 0x0002E0, "Member 'UGatherIcon_C::VerticalBox_183' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, GaugeMat) == 0x0002E8, "Member 'UGatherIcon_C::GaugeMat' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, IsFadeIn) == 0x0002F0, "Member 'UGatherIcon_C::IsFadeIn' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, FinishedFade) == 0x0002F8, "Member 'UGatherIcon_C::FinishedFade' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, Opacity) == 0x000308, "Member 'UGatherIcon_C::Opacity' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, IsPlaySE) == 0x00030C, "Member 'UGatherIcon_C::IsPlaySE' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, GaugeMaxWaitCount) == 0x000310, "Member 'UGatherIcon_C::GaugeMaxWaitCount' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, IsShowGatherImage) == 0x000314, "Member 'UGatherIcon_C::IsShowGatherImage' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, Te) == 0x000318, "Member 'UGatherIcon_C::Te' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, GatherTexture) == 0x000328, "Member 'UGatherIcon_C::GatherTexture' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, ExpantionRate) == 0x000330, "Member 'UGatherIcon_C::ExpantionRate' has a wrong offset!");
static_assert(offsetof(UGatherIcon_C, ClipDistance) == 0x000334, "Member 'UGatherIcon_C::ClipDistance' has a wrong offset!");

}

