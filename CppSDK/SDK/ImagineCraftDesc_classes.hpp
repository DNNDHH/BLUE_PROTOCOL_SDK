#pragma once

 

// Package: ImagineCraftDesc

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineCraftDesc.ImagineCraftDesc_C
// 0x0180 (0x03F8 - 0x0278)
class UImagineCraftDesc_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBattleImagineUniqueStatusSets_C* CommonBattleImagineUniqueStatusSets;               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_172;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_194;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagine_StorageSelector_C*             Imagine_StorageSelector;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineCraftDescProduct_C*             ImagineCraftDescProduct;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineCraftRecepiPerkItem_C*          PerkList1;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineCraftRecepiPerkItem_C*          PerkList2;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineCraftRecepiPerkItem_C*          PerkList3;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineCraftRecepiPerkItem_C*          PerkList4;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineCraftRecepiPerkItem_C*          PerkList5;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Ability_Name1;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Ability_Name2;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Ability_Name3;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Ability_Name4;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Ability_Name5;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_UseMoney;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_ImagineMaterials;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMasterImagineRecepi                   RecepiData;                                        // 0x0308(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsLoading;                                         // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C86[0x3];                                     // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpPerkID;                                         // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterImagine                       MasterImagineData;                                 // 0x0348(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ImagineCraftDesc(int32 EntryPoint);
	void SetRecepiData(const struct FMasterImagineRecepi& Param_RecepiData);
	void GenerateMaterialData();
	void CalclateMoney(int32* Money, bool* IsLiquidMemomryActive, bool* IsDiscount);
	void PerkListGenerate(const struct FSBMasterImagine& InImagineMaster);
	void GetStorage(int32* StorageNo);
	void IsStorage(bool* CurrentIsStorage);
	void UpdateSkills();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineCraftDesc_C">();
	}
	static class UImagineCraftDesc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineCraftDesc_C>();
	}
};
static_assert(alignof(UImagineCraftDesc_C) == 0x000008, "Wrong alignment on UImagineCraftDesc_C");
static_assert(sizeof(UImagineCraftDesc_C) == 0x0003F8, "Wrong size on UImagineCraftDesc_C");
static_assert(offsetof(UImagineCraftDesc_C, UberGraphFrame) == 0x000278, "Member 'UImagineCraftDesc_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, CommonBattleImagineUniqueStatusSets) == 0x000280, "Member 'UImagineCraftDesc_C::CommonBattleImagineUniqueStatusSets' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, Image_172) == 0x000288, "Member 'UImagineCraftDesc_C::Image_172' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, Image_194) == 0x000290, "Member 'UImagineCraftDesc_C::Image_194' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, Imagine_StorageSelector) == 0x000298, "Member 'UImagineCraftDesc_C::Imagine_StorageSelector' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, ImagineCraftDescProduct) == 0x0002A0, "Member 'UImagineCraftDesc_C::ImagineCraftDescProduct' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, PerkList1) == 0x0002A8, "Member 'UImagineCraftDesc_C::PerkList1' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, PerkList2) == 0x0002B0, "Member 'UImagineCraftDesc_C::PerkList2' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, PerkList3) == 0x0002B8, "Member 'UImagineCraftDesc_C::PerkList3' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, PerkList4) == 0x0002C0, "Member 'UImagineCraftDesc_C::PerkList4' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, PerkList5) == 0x0002C8, "Member 'UImagineCraftDesc_C::PerkList5' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, Txt_Ability_Name1) == 0x0002D0, "Member 'UImagineCraftDesc_C::Txt_Ability_Name1' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, Txt_Ability_Name2) == 0x0002D8, "Member 'UImagineCraftDesc_C::Txt_Ability_Name2' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, Txt_Ability_Name3) == 0x0002E0, "Member 'UImagineCraftDesc_C::Txt_Ability_Name3' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, Txt_Ability_Name4) == 0x0002E8, "Member 'UImagineCraftDesc_C::Txt_Ability_Name4' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, Txt_Ability_Name5) == 0x0002F0, "Member 'UImagineCraftDesc_C::Txt_Ability_Name5' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, Txt_UseMoney) == 0x0002F8, "Member 'UImagineCraftDesc_C::Txt_UseMoney' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, VB_ImagineMaterials) == 0x000300, "Member 'UImagineCraftDesc_C::VB_ImagineMaterials' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, RecepiData) == 0x000308, "Member 'UImagineCraftDesc_C::RecepiData' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, IsLoading) == 0x000340, "Member 'UImagineCraftDesc_C::IsLoading' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, TmpPerkID) == 0x000344, "Member 'UImagineCraftDesc_C::TmpPerkID' has a wrong offset!");
static_assert(offsetof(UImagineCraftDesc_C, MasterImagineData) == 0x000348, "Member 'UImagineCraftDesc_C::MasterImagineData' has a wrong offset!");

}

