#pragma once

 

// Package: PassiveImagineInfoForBattleCordeEdit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C
// 0x0030 (0x02A8 - 0x0278)
class UPassiveImagineInfoForBattleCordeEdit_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg01;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForImagineSlot;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         PassiveImagineUniqueIds;                           // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsStorageMode;                                    // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void CreatePassiveImagineIconBtnList();
	void GetPassiveImagineIconBtn(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* OutIsValid, class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C** OutImagineIconBtn);
	void Setup(TArray<class FString>& InPassiveImagineUniqueIds, bool InSetupByCurrEquip, ESBClassType InClassType);
	void SetStorageMode(bool InIsStorageMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveImagineInfoForBattleCordeEdit_C">();
	}
	static class UPassiveImagineInfoForBattleCordeEdit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveImagineInfoForBattleCordeEdit_C>();
	}
};
static_assert(alignof(UPassiveImagineInfoForBattleCordeEdit_C) == 0x000008, "Wrong alignment on UPassiveImagineInfoForBattleCordeEdit_C");
static_assert(sizeof(UPassiveImagineInfoForBattleCordeEdit_C) == 0x0002A8, "Wrong size on UPassiveImagineInfoForBattleCordeEdit_C");
static_assert(offsetof(UPassiveImagineInfoForBattleCordeEdit_C, UberGraphFrame) == 0x000278, "Member 'UPassiveImagineInfoForBattleCordeEdit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoForBattleCordeEdit_C, Bg01) == 0x000280, "Member 'UPassiveImagineInfoForBattleCordeEdit_C::Bg01' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoForBattleCordeEdit_C, HBoxForImagineSlot) == 0x000288, "Member 'UPassiveImagineInfoForBattleCordeEdit_C::HBoxForImagineSlot' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoForBattleCordeEdit_C, PassiveImagineUniqueIds) == 0x000290, "Member 'UPassiveImagineInfoForBattleCordeEdit_C::PassiveImagineUniqueIds' has a wrong offset!");
static_assert(offsetof(UPassiveImagineInfoForBattleCordeEdit_C, bIsStorageMode) == 0x0002A0, "Member 'UPassiveImagineInfoForBattleCordeEdit_C::bIsStorageMode' has a wrong offset!");

}

