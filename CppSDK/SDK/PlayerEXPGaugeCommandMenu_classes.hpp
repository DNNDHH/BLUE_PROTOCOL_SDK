#pragma once

 

// Package: PlayerEXPGaugeCommandMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C
// 0x0040 (0x02B8 - 0x0278)
class UPlayerEXPGaugeCommandMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           EXPGaugeSize;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GaugeBodyImage;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtExp;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtExpTotal;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       EXPSlot;                                           // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              EXPSlotSizeXY;                                     // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStopGaugeUpdate;                                  // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsExpOverflowMode;                                // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerEXPGaugeCommandMenu(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetGaugeUpdateStop(bool InIsUpdateStop);
	void SetExpOverflowMode(bool bInIsExpOverflowMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerEXPGaugeCommandMenu_C">();
	}
	static class UPlayerEXPGaugeCommandMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerEXPGaugeCommandMenu_C>();
	}
};
static_assert(alignof(UPlayerEXPGaugeCommandMenu_C) == 0x000008, "Wrong alignment on UPlayerEXPGaugeCommandMenu_C");
static_assert(sizeof(UPlayerEXPGaugeCommandMenu_C) == 0x0002B8, "Wrong size on UPlayerEXPGaugeCommandMenu_C");
static_assert(offsetof(UPlayerEXPGaugeCommandMenu_C, UberGraphFrame) == 0x000278, "Member 'UPlayerEXPGaugeCommandMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerEXPGaugeCommandMenu_C, EXPGaugeSize) == 0x000280, "Member 'UPlayerEXPGaugeCommandMenu_C::EXPGaugeSize' has a wrong offset!");
static_assert(offsetof(UPlayerEXPGaugeCommandMenu_C, GaugeBodyImage) == 0x000288, "Member 'UPlayerEXPGaugeCommandMenu_C::GaugeBodyImage' has a wrong offset!");
static_assert(offsetof(UPlayerEXPGaugeCommandMenu_C, TxtExp) == 0x000290, "Member 'UPlayerEXPGaugeCommandMenu_C::TxtExp' has a wrong offset!");
static_assert(offsetof(UPlayerEXPGaugeCommandMenu_C, TxtExpTotal) == 0x000298, "Member 'UPlayerEXPGaugeCommandMenu_C::TxtExpTotal' has a wrong offset!");
static_assert(offsetof(UPlayerEXPGaugeCommandMenu_C, EXPSlot) == 0x0002A0, "Member 'UPlayerEXPGaugeCommandMenu_C::EXPSlot' has a wrong offset!");
static_assert(offsetof(UPlayerEXPGaugeCommandMenu_C, EXPSlotSizeXY) == 0x0002A8, "Member 'UPlayerEXPGaugeCommandMenu_C::EXPSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UPlayerEXPGaugeCommandMenu_C, bStopGaugeUpdate) == 0x0002B0, "Member 'UPlayerEXPGaugeCommandMenu_C::bStopGaugeUpdate' has a wrong offset!");
static_assert(offsetof(UPlayerEXPGaugeCommandMenu_C, bIsExpOverflowMode) == 0x0002B1, "Member 'UPlayerEXPGaugeCommandMenu_C::bIsExpOverflowMode' has a wrong offset!");

}

