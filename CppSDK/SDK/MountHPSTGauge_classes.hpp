#pragma once

 

// Package: MountHPSTGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MountHPSTGauge.MountHPSTGauge_C
// 0x0140 (0x03B8 - 0x0278)
class UMountHPSTGauge_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HP_Focus_1;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGauge_1;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeBg_1;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeBgShadow_1;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugePrev_1;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPGaugePrevSize_1;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPGaugeSize_1;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_94;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerHP_Focus;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerHPGauge;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerHPGaugeBg;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerHPGaugeBgShadow;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerHPGaugeLineLoss;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerHPGaugeLoss;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PlayerHPGaugeLossSize;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerHPGaugePrev;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PlayerHPGaugePrevSize;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PlayerHPGaugeSize;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHP_1;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHPMax_1;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPlayerHP;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPlayerHPMax;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MaxENG;                                            // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPlayerHP;                                       // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurENG;                                            // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurPlayerHP;                                       // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       ENGSlot;                                           // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       PlayerHPSlot;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ENGSlotSizeXY;                                     // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              PlayerHPSlotSizeXY;                                // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultENGGaugeWidth;                              // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultPlayerHPGaugeWidth;                         // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrENGGaugeWidth;                                 // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrPlayerHPGaugeWidth;                            // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ItplSpeed;                                         // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7404[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCBerserkerComponent*                BerserkerComp;                                     // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       ENGPrevSlot;                                       // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       PlayerHPPrevSlot;                                  // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevENG;                                           // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrevPlayerHP;                                      // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LerpENGRate;                                       // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LerpPlayerHPRate;                                  // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bGaugeIn;                                          // 0x03AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEditMode;                                        // 0x03AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         SwitchIdx;                                         // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HpGaugeAdjustRate;                                 // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MountHPSTGauge(int32 EntryPoint);
	void Construct();
	void CustomPlayerEvent();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetEditMode(bool bIsEdit);
	void _________1();
	void SetBgVisibility(bool Param_IsVisible);
	void AdjustENGGaugeSize();
	void AdjustPlayerHPGaugeSize();
	void UpdatePrevENG(float DeltaTime);
	void UpdatePrevPlayerHP(float DeltaTime);
	void UpdateHPLossGaunge();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MountHPSTGauge_C">();
	}
	static class UMountHPSTGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMountHPSTGauge_C>();
	}
};
static_assert(alignof(UMountHPSTGauge_C) == 0x000008, "Wrong alignment on UMountHPSTGauge_C");
static_assert(sizeof(UMountHPSTGauge_C) == 0x0003B8, "Wrong size on UMountHPSTGauge_C");
static_assert(offsetof(UMountHPSTGauge_C, UberGraphFrame) == 0x000278, "Member 'UMountHPSTGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, AnimInOut) == 0x000280, "Member 'UMountHPSTGauge_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, CanvasPanel_0) == 0x000288, "Member 'UMountHPSTGauge_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, HP_Focus_1) == 0x000290, "Member 'UMountHPSTGauge_C::HP_Focus_1' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, HPGauge_1) == 0x000298, "Member 'UMountHPSTGauge_C::HPGauge_1' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, HPGaugeBg_1) == 0x0002A0, "Member 'UMountHPSTGauge_C::HPGaugeBg_1' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, HPGaugeBgShadow_1) == 0x0002A8, "Member 'UMountHPSTGauge_C::HPGaugeBgShadow_1' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, HPGaugePrev_1) == 0x0002B0, "Member 'UMountHPSTGauge_C::HPGaugePrev_1' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, HPGaugePrevSize_1) == 0x0002B8, "Member 'UMountHPSTGauge_C::HPGaugePrevSize_1' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, HPGaugeSize_1) == 0x0002C0, "Member 'UMountHPSTGauge_C::HPGaugeSize_1' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, Image_94) == 0x0002C8, "Member 'UMountHPSTGauge_C::Image_94' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHP_Focus) == 0x0002D0, "Member 'UMountHPSTGauge_C::PlayerHP_Focus' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPGauge) == 0x0002D8, "Member 'UMountHPSTGauge_C::PlayerHPGauge' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPGaugeBg) == 0x0002E0, "Member 'UMountHPSTGauge_C::PlayerHPGaugeBg' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPGaugeBgShadow) == 0x0002E8, "Member 'UMountHPSTGauge_C::PlayerHPGaugeBgShadow' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPGaugeLineLoss) == 0x0002F0, "Member 'UMountHPSTGauge_C::PlayerHPGaugeLineLoss' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPGaugeLoss) == 0x0002F8, "Member 'UMountHPSTGauge_C::PlayerHPGaugeLoss' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPGaugeLossSize) == 0x000300, "Member 'UMountHPSTGauge_C::PlayerHPGaugeLossSize' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPGaugePrev) == 0x000308, "Member 'UMountHPSTGauge_C::PlayerHPGaugePrev' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPGaugePrevSize) == 0x000310, "Member 'UMountHPSTGauge_C::PlayerHPGaugePrevSize' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPGaugeSize) == 0x000318, "Member 'UMountHPSTGauge_C::PlayerHPGaugeSize' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, TxtHP_1) == 0x000320, "Member 'UMountHPSTGauge_C::TxtHP_1' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, TxtHPMax_1) == 0x000328, "Member 'UMountHPSTGauge_C::TxtHPMax_1' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, TxtPlayerHP) == 0x000330, "Member 'UMountHPSTGauge_C::TxtPlayerHP' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, TxtPlayerHPMax) == 0x000338, "Member 'UMountHPSTGauge_C::TxtPlayerHPMax' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, MaxENG) == 0x000340, "Member 'UMountHPSTGauge_C::MaxENG' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, MaxPlayerHP) == 0x000344, "Member 'UMountHPSTGauge_C::MaxPlayerHP' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, CurENG) == 0x000348, "Member 'UMountHPSTGauge_C::CurENG' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, CurPlayerHP) == 0x00034C, "Member 'UMountHPSTGauge_C::CurPlayerHP' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, ENGSlot) == 0x000350, "Member 'UMountHPSTGauge_C::ENGSlot' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPSlot) == 0x000358, "Member 'UMountHPSTGauge_C::PlayerHPSlot' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, ENGSlotSizeXY) == 0x000360, "Member 'UMountHPSTGauge_C::ENGSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPSlotSizeXY) == 0x000368, "Member 'UMountHPSTGauge_C::PlayerHPSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, DefaultENGGaugeWidth) == 0x000370, "Member 'UMountHPSTGauge_C::DefaultENGGaugeWidth' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, DefaultPlayerHPGaugeWidth) == 0x000374, "Member 'UMountHPSTGauge_C::DefaultPlayerHPGaugeWidth' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, CurrENGGaugeWidth) == 0x000378, "Member 'UMountHPSTGauge_C::CurrENGGaugeWidth' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, CurrPlayerHPGaugeWidth) == 0x00037C, "Member 'UMountHPSTGauge_C::CurrPlayerHPGaugeWidth' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, ItplSpeed) == 0x000380, "Member 'UMountHPSTGauge_C::ItplSpeed' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, BerserkerComp) == 0x000388, "Member 'UMountHPSTGauge_C::BerserkerComp' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, ENGPrevSlot) == 0x000390, "Member 'UMountHPSTGauge_C::ENGPrevSlot' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PlayerHPPrevSlot) == 0x000398, "Member 'UMountHPSTGauge_C::PlayerHPPrevSlot' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PrevENG) == 0x0003A0, "Member 'UMountHPSTGauge_C::PrevENG' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, PrevPlayerHP) == 0x0003A4, "Member 'UMountHPSTGauge_C::PrevPlayerHP' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, LerpENGRate) == 0x0003A8, "Member 'UMountHPSTGauge_C::LerpENGRate' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, LerpPlayerHPRate) == 0x0003A9, "Member 'UMountHPSTGauge_C::LerpPlayerHPRate' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, bGaugeIn) == 0x0003AA, "Member 'UMountHPSTGauge_C::bGaugeIn' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, IsEditMode) == 0x0003AB, "Member 'UMountHPSTGauge_C::IsEditMode' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, SwitchIdx) == 0x0003AC, "Member 'UMountHPSTGauge_C::SwitchIdx' has a wrong offset!");
static_assert(offsetof(UMountHPSTGauge_C, HpGaugeAdjustRate) == 0x0003B0, "Member 'UMountHPSTGauge_C::HpGaugeAdjustRate' has a wrong offset!");

}

