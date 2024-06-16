#pragma once

 

// Package: PlayerSTGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerSTGauge.PlayerSTGauge_C
// 0x00C8 (0x0348 - 0x0280)
class UPlayerSTGauge_C final : public USBPlayerSTGaugeWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSTRecover;                                     // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ST_Focus;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           STGaugePrevSize;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           STGaugeSize;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 STRecover;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtST;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTMax;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MaxST;                                             // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurST;                                             // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevST;                                            // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7269[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       STSlot;                                            // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              STSlotSizeXY;                                      // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultHPGaugeWidth;                               // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrHPGaugeWidth;                                  // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HpGaugeAdjustRate;                                 // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_726A[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       STPrevSlot;                                        // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LerpSTRate;                                        // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_726B[0x3];                                     // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LerpSTRateTimer;                                   // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ItplSpeed;                                         // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrSTGaugeWidth;                                  // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStaminaRecovered;                                // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStaminaRecoverDelegateBinded;                    // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_726C[0x6];                                     // 0x0322(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCBerserkerComponent*                BerserkerComp;                                     // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       HPPrevSlot;                                        // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LerpHpRate;                                        // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBClassType                                  NowClassType;                                      // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_726D[0x2];                                     // 0x033A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SwitchIdx;                                         // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEngramCannon;                                     // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          InAnime;                                           // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TickActive;                                        // 0x0342(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerSTGauge(int32 EntryPoint);
	void OnInAnimation(bool bForward);
	void WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0();
	void OnAnimation(bool Forward);
	void CustomEvent_1(bool Result);
	void PlayerBind();
	void OnChangeShowAlwaysHUD_event(const bool bIsShow);
	void UnbindShowAlwaysHUDDelegate();
	void Destruct();
	void UnbindStaminaRecoveredDelegate();
	void SetEditMode(bool bIsEdit);
	void OnStaminaRecovery();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetBgVisibility(bool Param_IsVisible);
	void PlaySTGaugeRecoverAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSTGauge_C">();
	}
	static class UPlayerSTGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSTGauge_C>();
	}
};
static_assert(alignof(UPlayerSTGauge_C) == 0x000008, "Wrong alignment on UPlayerSTGauge_C");
static_assert(sizeof(UPlayerSTGauge_C) == 0x000348, "Wrong size on UPlayerSTGauge_C");
static_assert(offsetof(UPlayerSTGauge_C, UberGraphFrame) == 0x000280, "Member 'UPlayerSTGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, AnimInOut) == 0x000288, "Member 'UPlayerSTGauge_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, AnimSTRecover) == 0x000290, "Member 'UPlayerSTGauge_C::AnimSTRecover' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, CanvasPanel_0) == 0x000298, "Member 'UPlayerSTGauge_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, Line1) == 0x0002A0, "Member 'UPlayerSTGauge_C::Line1' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, ST_Focus) == 0x0002A8, "Member 'UPlayerSTGauge_C::ST_Focus' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, STGaugePrevSize) == 0x0002B0, "Member 'UPlayerSTGauge_C::STGaugePrevSize' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, STGaugeSize) == 0x0002B8, "Member 'UPlayerSTGauge_C::STGaugeSize' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, STRecover) == 0x0002C0, "Member 'UPlayerSTGauge_C::STRecover' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, TxtST) == 0x0002C8, "Member 'UPlayerSTGauge_C::TxtST' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, TxtSTMax) == 0x0002D0, "Member 'UPlayerSTGauge_C::TxtSTMax' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, MaxST) == 0x0002D8, "Member 'UPlayerSTGauge_C::MaxST' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, CurST) == 0x0002DC, "Member 'UPlayerSTGauge_C::CurST' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, PrevST) == 0x0002E0, "Member 'UPlayerSTGauge_C::PrevST' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, STSlot) == 0x0002E8, "Member 'UPlayerSTGauge_C::STSlot' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, STSlotSizeXY) == 0x0002F0, "Member 'UPlayerSTGauge_C::STSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, DefaultHPGaugeWidth) == 0x0002F8, "Member 'UPlayerSTGauge_C::DefaultHPGaugeWidth' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, CurrHPGaugeWidth) == 0x0002FC, "Member 'UPlayerSTGauge_C::CurrHPGaugeWidth' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, HpGaugeAdjustRate) == 0x000300, "Member 'UPlayerSTGauge_C::HpGaugeAdjustRate' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, STPrevSlot) == 0x000308, "Member 'UPlayerSTGauge_C::STPrevSlot' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, LerpSTRate) == 0x000310, "Member 'UPlayerSTGauge_C::LerpSTRate' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, LerpSTRateTimer) == 0x000314, "Member 'UPlayerSTGauge_C::LerpSTRateTimer' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, ItplSpeed) == 0x000318, "Member 'UPlayerSTGauge_C::ItplSpeed' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, CurrSTGaugeWidth) == 0x00031C, "Member 'UPlayerSTGauge_C::CurrSTGaugeWidth' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, IsStaminaRecovered) == 0x000320, "Member 'UPlayerSTGauge_C::IsStaminaRecovered' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, IsStaminaRecoverDelegateBinded) == 0x000321, "Member 'UPlayerSTGauge_C::IsStaminaRecoverDelegateBinded' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, BerserkerComp) == 0x000328, "Member 'UPlayerSTGauge_C::BerserkerComp' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, HPPrevSlot) == 0x000330, "Member 'UPlayerSTGauge_C::HPPrevSlot' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, LerpHpRate) == 0x000338, "Member 'UPlayerSTGauge_C::LerpHpRate' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, NowClassType) == 0x000339, "Member 'UPlayerSTGauge_C::NowClassType' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, SwitchIdx) == 0x00033C, "Member 'UPlayerSTGauge_C::SwitchIdx' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, bEngramCannon) == 0x000340, "Member 'UPlayerSTGauge_C::bEngramCannon' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, InAnime) == 0x000341, "Member 'UPlayerSTGauge_C::InAnime' has a wrong offset!");
static_assert(offsetof(UPlayerSTGauge_C, TickActive) == 0x000342, "Member 'UPlayerSTGauge_C::TickActive' has a wrong offset!");

}

