#pragma once

 

// Package: PlayerGaugeCommandMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C
// 0x0128 (0x03A0 - 0x0278)
class UPlayerGaugeCommandMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HB_TxtHP;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_TxtST;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGauge;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeBg;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeBgShadow;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeLineLoss;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeLoss;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPGaugeLossSize;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPGaugeSize;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 STGauge;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 STGaugeBg;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 STGaugeBgShadow;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           STGaugeGrp;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           STGaugeSize;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           STTextGrp;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHP;                                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHPMax;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtST;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTMax;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       HPSlot;                                            // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       STSlot;                                            // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              HPSlotSizeXY;                                      // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              STSlotSizeXY;                                      // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrHP;                                            // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxHP;                                             // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrST;                                            // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxST;                                             // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultHPGaugeWidth;                               // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrHPGaugeWidth;                                  // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HpGaugeAdjustRate;                                 // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ParallelMode;                                      // 0x0354(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89E5[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              TextPos_Normal;                                    // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              GagePos_Normal;                                    // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TextPos_Parallel;                                  // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              GagePos_Parallel;                                  // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HPSTGaugeWidth;                                    // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TxtHPPos_Normal;                                   // 0x037C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TxtSTPos_Normal;                                   // 0x0384(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TxtHPPos_Parallel;                                 // 0x038C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TxtSTPos_Parallel;                                 // 0x0394(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDhcBattleTopMenuMode;                            // 0x039C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerGaugeCommandMenu(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void AdjustHPGaugeSize();
	void SetCurrHpGaugeWidth(float InHpGaugeWidth);
	void UpdateHPLossGaunge();
	void UpdateHpGauge(int32 InCurrHp, int32 InMaxHp);
	void UpdateStGauge(int32 InCurrSt, int32 InMaxSt);
	void SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode);
	void GetDefaultHpGaugeWidth(float* OutHpGaugeWidth);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerGaugeCommandMenu_C">();
	}
	static class UPlayerGaugeCommandMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerGaugeCommandMenu_C>();
	}
};
static_assert(alignof(UPlayerGaugeCommandMenu_C) == 0x000008, "Wrong alignment on UPlayerGaugeCommandMenu_C");
static_assert(sizeof(UPlayerGaugeCommandMenu_C) == 0x0003A0, "Wrong size on UPlayerGaugeCommandMenu_C");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, UberGraphFrame) == 0x000278, "Member 'UPlayerGaugeCommandMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HB_TxtHP) == 0x000280, "Member 'UPlayerGaugeCommandMenu_C::HB_TxtHP' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HB_TxtST) == 0x000288, "Member 'UPlayerGaugeCommandMenu_C::HB_TxtST' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HPGauge) == 0x000290, "Member 'UPlayerGaugeCommandMenu_C::HPGauge' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HPGaugeBg) == 0x000298, "Member 'UPlayerGaugeCommandMenu_C::HPGaugeBg' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HPGaugeBgShadow) == 0x0002A0, "Member 'UPlayerGaugeCommandMenu_C::HPGaugeBgShadow' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HPGaugeLineLoss) == 0x0002A8, "Member 'UPlayerGaugeCommandMenu_C::HPGaugeLineLoss' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HPGaugeLoss) == 0x0002B0, "Member 'UPlayerGaugeCommandMenu_C::HPGaugeLoss' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HPGaugeLossSize) == 0x0002B8, "Member 'UPlayerGaugeCommandMenu_C::HPGaugeLossSize' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HPGaugeSize) == 0x0002C0, "Member 'UPlayerGaugeCommandMenu_C::HPGaugeSize' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, STGauge) == 0x0002C8, "Member 'UPlayerGaugeCommandMenu_C::STGauge' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, STGaugeBg) == 0x0002D0, "Member 'UPlayerGaugeCommandMenu_C::STGaugeBg' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, STGaugeBgShadow) == 0x0002D8, "Member 'UPlayerGaugeCommandMenu_C::STGaugeBgShadow' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, STGaugeGrp) == 0x0002E0, "Member 'UPlayerGaugeCommandMenu_C::STGaugeGrp' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, STGaugeSize) == 0x0002E8, "Member 'UPlayerGaugeCommandMenu_C::STGaugeSize' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, STTextGrp) == 0x0002F0, "Member 'UPlayerGaugeCommandMenu_C::STTextGrp' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, TxtHP) == 0x0002F8, "Member 'UPlayerGaugeCommandMenu_C::TxtHP' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, TxtHPMax) == 0x000300, "Member 'UPlayerGaugeCommandMenu_C::TxtHPMax' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, TxtST) == 0x000308, "Member 'UPlayerGaugeCommandMenu_C::TxtST' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, TxtSTMax) == 0x000310, "Member 'UPlayerGaugeCommandMenu_C::TxtSTMax' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HPSlot) == 0x000318, "Member 'UPlayerGaugeCommandMenu_C::HPSlot' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, STSlot) == 0x000320, "Member 'UPlayerGaugeCommandMenu_C::STSlot' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HPSlotSizeXY) == 0x000328, "Member 'UPlayerGaugeCommandMenu_C::HPSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, STSlotSizeXY) == 0x000330, "Member 'UPlayerGaugeCommandMenu_C::STSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, CurrHP) == 0x000338, "Member 'UPlayerGaugeCommandMenu_C::CurrHP' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, MaxHP) == 0x00033C, "Member 'UPlayerGaugeCommandMenu_C::MaxHP' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, CurrST) == 0x000340, "Member 'UPlayerGaugeCommandMenu_C::CurrST' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, MaxST) == 0x000344, "Member 'UPlayerGaugeCommandMenu_C::MaxST' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, DefaultHPGaugeWidth) == 0x000348, "Member 'UPlayerGaugeCommandMenu_C::DefaultHPGaugeWidth' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, CurrHPGaugeWidth) == 0x00034C, "Member 'UPlayerGaugeCommandMenu_C::CurrHPGaugeWidth' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HpGaugeAdjustRate) == 0x000350, "Member 'UPlayerGaugeCommandMenu_C::HpGaugeAdjustRate' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, ParallelMode) == 0x000354, "Member 'UPlayerGaugeCommandMenu_C::ParallelMode' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, TextPos_Normal) == 0x000358, "Member 'UPlayerGaugeCommandMenu_C::TextPos_Normal' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, GagePos_Normal) == 0x000360, "Member 'UPlayerGaugeCommandMenu_C::GagePos_Normal' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, TextPos_Parallel) == 0x000368, "Member 'UPlayerGaugeCommandMenu_C::TextPos_Parallel' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, GagePos_Parallel) == 0x000370, "Member 'UPlayerGaugeCommandMenu_C::GagePos_Parallel' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, HPSTGaugeWidth) == 0x000378, "Member 'UPlayerGaugeCommandMenu_C::HPSTGaugeWidth' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, TxtHPPos_Normal) == 0x00037C, "Member 'UPlayerGaugeCommandMenu_C::TxtHPPos_Normal' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, TxtSTPos_Normal) == 0x000384, "Member 'UPlayerGaugeCommandMenu_C::TxtSTPos_Normal' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, TxtHPPos_Parallel) == 0x00038C, "Member 'UPlayerGaugeCommandMenu_C::TxtHPPos_Parallel' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, TxtSTPos_Parallel) == 0x000394, "Member 'UPlayerGaugeCommandMenu_C::TxtSTPos_Parallel' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeCommandMenu_C, IsDhcBattleTopMenuMode) == 0x00039C, "Member 'UPlayerGaugeCommandMenu_C::IsDhcBattleTopMenuMode' has a wrong offset!");

}

