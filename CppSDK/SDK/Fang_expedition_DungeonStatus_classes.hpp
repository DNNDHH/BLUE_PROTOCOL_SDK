#pragma once

 

// Package: Fang_expedition_DungeonStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C
// 0x0078 (0x02F0 - 0x0278)
class UFang_expedition_DungeonStatus_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmGaugeFull;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Anm_GaugeFull_Eff;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusSmall_C*                       CmnBonusSmall;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnGauge1_C*                           CmnGauge1;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MaxPointText;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NowPointText;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TicketIcon;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            TokenButton;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTicketButtonClick;                               // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnGaugeAnimationFinish;                            // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUMG_RewardBoostTooltip_C*              ToolTip;                                           // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnTicketButtonClick__DelegateSignature(class UObject* ClickedObject);
	void OnGaugeAnimationFinish__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_DungeonStatus(int32 EntryPoint);
	void RemoveTooltip();
	void Destruct();
	void WidgetAnimationEvt_AnmGaugeFull_K2Node_WidgetAnimationEvent_0();
	void BndEvt__Fang_expedition_DungeonStatus_TokenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetGaugeData(int32 Now, int32 Max);
	void PlaySlotAnimation();
	void UpdateBonusIcon();
	void SetTokenBtnActive(bool Active);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DungeonStatus_C">();
	}
	static class UFang_expedition_DungeonStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DungeonStatus_C>();
	}
};
static_assert(alignof(UFang_expedition_DungeonStatus_C) == 0x000008, "Wrong alignment on UFang_expedition_DungeonStatus_C");
static_assert(sizeof(UFang_expedition_DungeonStatus_C) == 0x0002F0, "Wrong size on UFang_expedition_DungeonStatus_C");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DungeonStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, AnmGaugeFull) == 0x000280, "Member 'UFang_expedition_DungeonStatus_C::AnmGaugeFull' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, Anm_GaugeFull_Eff) == 0x000288, "Member 'UFang_expedition_DungeonStatus_C::Anm_GaugeFull_Eff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, BG) == 0x000290, "Member 'UFang_expedition_DungeonStatus_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, CmnBonusSmall) == 0x000298, "Member 'UFang_expedition_DungeonStatus_C::CmnBonusSmall' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, CmnGauge1) == 0x0002A0, "Member 'UFang_expedition_DungeonStatus_C::CmnGauge1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, MaxPointText) == 0x0002A8, "Member 'UFang_expedition_DungeonStatus_C::MaxPointText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, NowPointText) == 0x0002B0, "Member 'UFang_expedition_DungeonStatus_C::NowPointText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, TicketIcon) == 0x0002B8, "Member 'UFang_expedition_DungeonStatus_C::TicketIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, TokenButton) == 0x0002C0, "Member 'UFang_expedition_DungeonStatus_C::TokenButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, OnTicketButtonClick) == 0x0002C8, "Member 'UFang_expedition_DungeonStatus_C::OnTicketButtonClick' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, OnGaugeAnimationFinish) == 0x0002D8, "Member 'UFang_expedition_DungeonStatus_C::OnGaugeAnimationFinish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonStatus_C, ToolTip) == 0x0002E8, "Member 'UFang_expedition_DungeonStatus_C::ToolTip' has a wrong offset!");

}

