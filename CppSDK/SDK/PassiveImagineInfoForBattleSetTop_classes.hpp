#pragma once

 

// Package: PassiveImagineInfoForBattleSetTop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C
// 0x0028 (0x02A0 - 0x0278)
class UPassiveImagineInfoForBattleSetTop_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg01;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForImagineSlot;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnIconBtnPressed;                                  // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnIconBtnPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId);
	void ExecuteUbergraph_PassiveImagineInfoForBattleSetTop(int32 EntryPoint);
	void Destruct();
	void OnIconBtnClicked(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32 InPassiveImagineItemId);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void CreatePassiveImagineIconBtnList();
	void GetPassiveImagineIconBtn(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* OutIsValid, class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C** OutImagineIconBtn);
	void SetupPassiveImagineIconBtnList();
	void GetPassiveImagineInfoUnit(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* IsValid, class UPassiveImagineInfoUnitForBattleSet_C** OutImagineInfoUnit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveImagineInfoForBattleSetTop_C">();
	}
	static class UPassiveImagineInfoForBattleSetTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveImagineInfoForBattleSetTop_C>();
	}
};
static_assert(alignof(UPassiveImagineInfoForBattleSetTop_C) == 0x000008, "Wrong alignment on UPassiveImagineInfoForBattleSetTop_C");
static_assert(sizeof(UPassiveImagineInfoForBattleSetTop_C) == 0x0002A0, "Wrong size on UPassiveImagineInfoForBattleSetTop_C");
static_assert(offsetof(UPassiveImagineInfoForBattleSetTop_C, UberGraphFrame) == 0x000278, "Member 'UPassiveImagineInfoForBattleSetTop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoForBattleSetTop_C, Bg01) == 0x000280, "Member 'UPassiveImagineInfoForBattleSetTop_C::Bg01' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoForBattleSetTop_C, HBoxForImagineSlot) == 0x000288, "Member 'UPassiveImagineInfoForBattleSetTop_C::HBoxForImagineSlot' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoForBattleSetTop_C, OnIconBtnPressed) == 0x000290, "Member 'UPassiveImagineInfoForBattleSetTop_C::OnIconBtnPressed' has a wrong offset!");

}

