#pragma once

 

// Package: EquipStatusImaginePowers

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipStatusImaginePowers.EquipStatusImaginePowers_C
// 0x0328 (0x05A0 - 0x0278)
class UEquipStatusImaginePowers_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Txt_Atk;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_DP;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           BaseInfo;                                          // 0x0290(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FImagineParameter                      CalclatedInfo;                                     // 0x03A8(0x006C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_6D2C[0x4];                                     // 0x0414(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           Prev;                                              // 0x0418(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FImagineParameter                      CalclatedPrevInfo;                                 // 0x0530(0x006C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_EquipStatusImaginePowers(int32 EntryPoint);
	void Set_PrevInfo(const struct FOwnItemInfo& Param_Prev);
	void Set_ItemInfo(const struct FOwnItemInfo& Info);
	void SetColorTxt(class USBRuntimeTextBlock* Txt, int32 PrevParam, int32 AfterParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipStatusImaginePowers_C">();
	}
	static class UEquipStatusImaginePowers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipStatusImaginePowers_C>();
	}
};
static_assert(alignof(UEquipStatusImaginePowers_C) == 0x000008, "Wrong alignment on UEquipStatusImaginePowers_C");
static_assert(sizeof(UEquipStatusImaginePowers_C) == 0x0005A0, "Wrong size on UEquipStatusImaginePowers_C");
static_assert(offsetof(UEquipStatusImaginePowers_C, UberGraphFrame) == 0x000278, "Member 'UEquipStatusImaginePowers_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEquipStatusImaginePowers_C, Txt_Atk) == 0x000280, "Member 'UEquipStatusImaginePowers_C::Txt_Atk' has a wrong offset!");
static_assert(offsetof(UEquipStatusImaginePowers_C, Txt_DP) == 0x000288, "Member 'UEquipStatusImaginePowers_C::Txt_DP' has a wrong offset!");
static_assert(offsetof(UEquipStatusImaginePowers_C, BaseInfo) == 0x000290, "Member 'UEquipStatusImaginePowers_C::BaseInfo' has a wrong offset!");
static_assert(offsetof(UEquipStatusImaginePowers_C, CalclatedInfo) == 0x0003A8, "Member 'UEquipStatusImaginePowers_C::CalclatedInfo' has a wrong offset!");
static_assert(offsetof(UEquipStatusImaginePowers_C, Prev) == 0x000418, "Member 'UEquipStatusImaginePowers_C::Prev' has a wrong offset!");
static_assert(offsetof(UEquipStatusImaginePowers_C, CalclatedPrevInfo) == 0x000530, "Member 'UEquipStatusImaginePowers_C::CalclatedPrevInfo' has a wrong offset!");

}

