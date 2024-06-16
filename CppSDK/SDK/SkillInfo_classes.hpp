#pragma once

 

// Package: SkillInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfo.SkillInfo_C
// 0x00C0 (0x0360 - 0x02A0)
class USkillInfo_C final : public USBSkillInfoWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimSkillChange;                                   // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimBtnChangeEff;                                  // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Active1;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Active2;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Active3;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Active4;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Active5;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Active6;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Active7;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Active8;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnImageBg;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Change;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_TA1;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_TA2;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Def;                                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Imagine1;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Imagine2;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Main;                                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       Special;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtChange;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowAlwaysHUD_0;                                  // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InAnimation;                                       // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SkillInfo(int32 EntryPoint);
	void OnPadSkinChange(const ESBPadKeySkinType SkinType);
	void CustomEvent_3();
	void PreConstruct(bool IsDesignTime);
	void OnChangeBackPaletteVisible(bool Visible);
	void OnChangePalette(ESBPlayerSkillPaletteSide PaletteSide);
	void CustomEvent_0(const bool bIsShow);
	void WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0();
	void AnimationInOut(bool In);
	void Construct();
	void OnInAnimation(bool bForward);
	void Destruct();
	void OnChangeShowAlwaysHUD_event(const bool bIsShow);
	void SetEditMode(bool bIsEdit);
	ESlateVisibility GetVisibility_0();
	bool IsPlayAnimation();
	void UpdateChangeText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfo_C">();
	}
	static class USkillInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfo_C>();
	}
};
static_assert(alignof(USkillInfo_C) == 0x000008, "Wrong alignment on USkillInfo_C");
static_assert(sizeof(USkillInfo_C) == 0x000360, "Wrong size on USkillInfo_C");
static_assert(offsetof(USkillInfo_C, UberGraphFrame) == 0x0002A0, "Member 'USkillInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, AnimSkillChange) == 0x0002A8, "Member 'USkillInfo_C::AnimSkillChange' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, AnimBtnChangeEff) == 0x0002B0, "Member 'USkillInfo_C::AnimBtnChangeEff' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, AnimInOut) == 0x0002B8, "Member 'USkillInfo_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Active1) == 0x0002C0, "Member 'USkillInfo_C::Active1' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Active2) == 0x0002C8, "Member 'USkillInfo_C::Active2' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Active3) == 0x0002D0, "Member 'USkillInfo_C::Active3' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Active4) == 0x0002D8, "Member 'USkillInfo_C::Active4' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Active5) == 0x0002E0, "Member 'USkillInfo_C::Active5' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Active6) == 0x0002E8, "Member 'USkillInfo_C::Active6' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Active7) == 0x0002F0, "Member 'USkillInfo_C::Active7' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Active8) == 0x0002F8, "Member 'USkillInfo_C::Active8' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, BtnImageBg) == 0x000300, "Member 'USkillInfo_C::BtnImageBg' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, CanvasPanel_0) == 0x000308, "Member 'USkillInfo_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, CanvasPanel_Change) == 0x000310, "Member 'USkillInfo_C::CanvasPanel_Change' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, CanvasPanel_TA1) == 0x000318, "Member 'USkillInfo_C::CanvasPanel_TA1' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, CanvasPanel_TA2) == 0x000320, "Member 'USkillInfo_C::CanvasPanel_TA2' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Def) == 0x000328, "Member 'USkillInfo_C::Def' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Imagine1) == 0x000330, "Member 'USkillInfo_C::Imagine1' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Imagine2) == 0x000338, "Member 'USkillInfo_C::Imagine2' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Main) == 0x000340, "Member 'USkillInfo_C::Main' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, Special) == 0x000348, "Member 'USkillInfo_C::Special' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, TxtChange) == 0x000350, "Member 'USkillInfo_C::TxtChange' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, bShowAlwaysHUD_0) == 0x000358, "Member 'USkillInfo_C::bShowAlwaysHUD_0' has a wrong offset!");
static_assert(offsetof(USkillInfo_C, InAnimation) == 0x000359, "Member 'USkillInfo_C::InAnimation' has a wrong offset!");

}

