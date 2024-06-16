#pragma once

 

// Package: PassiveImagineInfoUnitForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C
// 0x0038 (0x02B0 - 0x0278)
class UPassiveImagineInfoUnitForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C* ImagineIconBtn;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ImagineTypeTxt;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               ImagineSlotType;                                   // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4287[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnImagineIconBtnClicked;                           // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsDhcBattleTopMenuMode;                           // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnImagineIconBtnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32 InPassiveImagineItemId);
	void ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet(int32 EntryPoint);
	void BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32 InPassiveImagineItemId);
	void PreConstruct(bool IsDesignTime);
	void SetImagineSlotType(ESBPlayerPassiveImagineSlotType InImagineSlotType);
	void GetImagineSlotType(ESBPlayerPassiveImagineSlotType* OutImagineSlotType);
	void SetPassiveImagineByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType);
	void SetPassiveImagineIconEmpty(bool InIsEmpty);
	void SetPassiveImagineIconAlertVisibility(bool InIsAlertVisible);
	void SetButtonOff();
	void ForcePassiveImagineIconLevelSyncOff(bool bInForceLevelSyncOff);
	void SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode);
	void SetPassiveImagineForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InImagineInfo, const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveImagineInfoUnitForBattleSet_C">();
	}
	static class UPassiveImagineInfoUnitForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveImagineInfoUnitForBattleSet_C>();
	}
};
static_assert(alignof(UPassiveImagineInfoUnitForBattleSet_C) == 0x000008, "Wrong alignment on UPassiveImagineInfoUnitForBattleSet_C");
static_assert(sizeof(UPassiveImagineInfoUnitForBattleSet_C) == 0x0002B0, "Wrong size on UPassiveImagineInfoUnitForBattleSet_C");
static_assert(offsetof(UPassiveImagineInfoUnitForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'UPassiveImagineInfoUnitForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoUnitForBattleSet_C, ImagineIconBtn) == 0x000280, "Member 'UPassiveImagineInfoUnitForBattleSet_C::ImagineIconBtn' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoUnitForBattleSet_C, ImagineTypeTxt) == 0x000288, "Member 'UPassiveImagineInfoUnitForBattleSet_C::ImagineTypeTxt' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoUnitForBattleSet_C, ImagineSlotType) == 0x000290, "Member 'UPassiveImagineInfoUnitForBattleSet_C::ImagineSlotType' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoUnitForBattleSet_C, OnImagineIconBtnClicked) == 0x000298, "Member 'UPassiveImagineInfoUnitForBattleSet_C::OnImagineIconBtnClicked' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoUnitForBattleSet_C, bIsDhcBattleTopMenuMode) == 0x0002A8, "Member 'UPassiveImagineInfoUnitForBattleSet_C::bIsDhcBattleTopMenuMode' has a wrong offset!");

}

