#pragma once

 

// Package: PlayerHPGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerHPGauge.PlayerHPGauge_C
// 0x00D8 (0x0358 - 0x0280)
class UPlayerHPGauge_C final : public USBPlayerHPGaugeWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HP_Focus;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGauge;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeBg;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeBgShadow;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeLineLoss;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeLoss;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPGaugeLossSize;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugePrev;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPGaugePrevSize;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPGaugeSize;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHP;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHPMax;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MaxHP;                                             // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurHP;                                             // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       HPSlot;                                            // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              HPSlotSizeXY;                                      // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultHPGaugeWidth;                               // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrHPGaugeWidth;                                  // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HpGaugeAdjustRate;                                 // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DoStaminaReduceSpecialEffect;                      // 0x0324(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7285[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ItplSpeed;                                         // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrSTGaugeWidth;                                  // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStaminaRecovered;                                // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStaminaRecoverDelegateBinded;                    // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7286[0x6];                                     // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCBerserkerComponent*                BerserkerComp;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       HPPrevSlot;                                        // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevHP;                                            // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LerpHpRate;                                        // 0x034C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBClassType                                  NowClassType;                                      // 0x034D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEditMode_0;                                      // 0x034E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InAnime;                                           // 0x034F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TickActive;                                        // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerHPGauge(int32 EntryPoint);
	void Construct();
	void WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0();
	void OnAnimation(bool Forward);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInAnimation(bool bForward);
	void OnChangeShowAlwaysHUD_event(const bool bIsShow);
	void Destruct();
	void SetEditMode(bool bIsEdit);
	void _________1();
	void SetBgVisibility(bool Param_IsVisible);
	void AdjustHPGaugeSize();
	void UpdatePrevHP(float DeltaTime);
	void UpdateHPLossGaunge();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerHPGauge_C">();
	}
	static class UPlayerHPGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerHPGauge_C>();
	}
};
static_assert(alignof(UPlayerHPGauge_C) == 0x000008, "Wrong alignment on UPlayerHPGauge_C");
static_assert(sizeof(UPlayerHPGauge_C) == 0x000358, "Wrong size on UPlayerHPGauge_C");
static_assert(offsetof(UPlayerHPGauge_C, UberGraphFrame) == 0x000280, "Member 'UPlayerHPGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, AnimInOut) == 0x000288, "Member 'UPlayerHPGauge_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, CanvasPanel_0) == 0x000290, "Member 'UPlayerHPGauge_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HP_Focus) == 0x000298, "Member 'UPlayerHPGauge_C::HP_Focus' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPGauge) == 0x0002A0, "Member 'UPlayerHPGauge_C::HPGauge' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPGaugeBg) == 0x0002A8, "Member 'UPlayerHPGauge_C::HPGaugeBg' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPGaugeBgShadow) == 0x0002B0, "Member 'UPlayerHPGauge_C::HPGaugeBgShadow' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPGaugeLineLoss) == 0x0002B8, "Member 'UPlayerHPGauge_C::HPGaugeLineLoss' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPGaugeLoss) == 0x0002C0, "Member 'UPlayerHPGauge_C::HPGaugeLoss' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPGaugeLossSize) == 0x0002C8, "Member 'UPlayerHPGauge_C::HPGaugeLossSize' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPGaugePrev) == 0x0002D0, "Member 'UPlayerHPGauge_C::HPGaugePrev' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPGaugePrevSize) == 0x0002D8, "Member 'UPlayerHPGauge_C::HPGaugePrevSize' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPGaugeSize) == 0x0002E0, "Member 'UPlayerHPGauge_C::HPGaugeSize' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, Line1) == 0x0002E8, "Member 'UPlayerHPGauge_C::Line1' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, TxtHP) == 0x0002F0, "Member 'UPlayerHPGauge_C::TxtHP' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, TxtHPMax) == 0x0002F8, "Member 'UPlayerHPGauge_C::TxtHPMax' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, MaxHP) == 0x000300, "Member 'UPlayerHPGauge_C::MaxHP' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, CurHP) == 0x000304, "Member 'UPlayerHPGauge_C::CurHP' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPSlot) == 0x000308, "Member 'UPlayerHPGauge_C::HPSlot' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPSlotSizeXY) == 0x000310, "Member 'UPlayerHPGauge_C::HPSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, DefaultHPGaugeWidth) == 0x000318, "Member 'UPlayerHPGauge_C::DefaultHPGaugeWidth' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, CurrHPGaugeWidth) == 0x00031C, "Member 'UPlayerHPGauge_C::CurrHPGaugeWidth' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HpGaugeAdjustRate) == 0x000320, "Member 'UPlayerHPGauge_C::HpGaugeAdjustRate' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, DoStaminaReduceSpecialEffect) == 0x000324, "Member 'UPlayerHPGauge_C::DoStaminaReduceSpecialEffect' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, ItplSpeed) == 0x000328, "Member 'UPlayerHPGauge_C::ItplSpeed' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, CurrSTGaugeWidth) == 0x00032C, "Member 'UPlayerHPGauge_C::CurrSTGaugeWidth' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, IsStaminaRecovered) == 0x000330, "Member 'UPlayerHPGauge_C::IsStaminaRecovered' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, IsStaminaRecoverDelegateBinded) == 0x000331, "Member 'UPlayerHPGauge_C::IsStaminaRecoverDelegateBinded' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, BerserkerComp) == 0x000338, "Member 'UPlayerHPGauge_C::BerserkerComp' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, HPPrevSlot) == 0x000340, "Member 'UPlayerHPGauge_C::HPPrevSlot' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, PrevHP) == 0x000348, "Member 'UPlayerHPGauge_C::PrevHP' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, LerpHpRate) == 0x00034C, "Member 'UPlayerHPGauge_C::LerpHpRate' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, NowClassType) == 0x00034D, "Member 'UPlayerHPGauge_C::NowClassType' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, IsEditMode_0) == 0x00034E, "Member 'UPlayerHPGauge_C::IsEditMode_0' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, InAnime) == 0x00034F, "Member 'UPlayerHPGauge_C::InAnime' has a wrong offset!");
static_assert(offsetof(UPlayerHPGauge_C, TickActive) == 0x000350, "Member 'UPlayerHPGauge_C::TickActive' has a wrong offset!");

}

