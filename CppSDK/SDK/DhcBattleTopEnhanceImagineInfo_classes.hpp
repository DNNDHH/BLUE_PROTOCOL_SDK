#pragma once

 

// Package: DhcBattleTopEnhanceImagineInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C
// 0x0010 (0x0288 - 0x0278)
class UDhcBattleTopEnhanceImagineInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HBoxForImagineInfoUnit;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void CreatePassiveImagineIconUnitList();
	void Setup(TArray<struct FSBDhcBattlePlayerEquipImagineInfo>& InEquipEnhanceImagineInfo, ESBClassType InClassType, int32 InClassLevel);
	void GetPassiveImagineIconUnit(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* IsValid, class UPassiveImagineInfoUnitForBattleSet_C** OutImagineIconUnit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleTopEnhanceImagineInfo_C">();
	}
	static class UDhcBattleTopEnhanceImagineInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleTopEnhanceImagineInfo_C>();
	}
};
static_assert(alignof(UDhcBattleTopEnhanceImagineInfo_C) == 0x000008, "Wrong alignment on UDhcBattleTopEnhanceImagineInfo_C");
static_assert(sizeof(UDhcBattleTopEnhanceImagineInfo_C) == 0x000288, "Wrong size on UDhcBattleTopEnhanceImagineInfo_C");
static_assert(offsetof(UDhcBattleTopEnhanceImagineInfo_C, UberGraphFrame) == 0x000278, "Member 'UDhcBattleTopEnhanceImagineInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopEnhanceImagineInfo_C, HBoxForImagineInfoUnit) == 0x000280, "Member 'UDhcBattleTopEnhanceImagineInfo_C::HBoxForImagineInfoUnit' has a wrong offset!");

}

