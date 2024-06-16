#pragma once

 

// Package: ImagineMaterialsItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineMaterialsItem.ImagineMaterialsItem_C
// 0x0048 (0x02C0 - 0x0278)
class UImagineMaterialsItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_Lock;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDropInfo_C*                        ItemDropInfo;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTimeLimitIcon_C*                       TimeLimitIcon;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Inventory;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ItemName;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NeedNum;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMasterImagineMaterial                 Material;                                          // 0x02B0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_ImagineMaterialsItem(int32 EntryPoint);
	void SetMaterialData(const struct FMasterImagineMaterial& Param_Material);
	void ApplyMaterialData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineMaterialsItem_C">();
	}
	static class UImagineMaterialsItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineMaterialsItem_C>();
	}
};
static_assert(alignof(UImagineMaterialsItem_C) == 0x000008, "Wrong alignment on UImagineMaterialsItem_C");
static_assert(sizeof(UImagineMaterialsItem_C) == 0x0002C0, "Wrong size on UImagineMaterialsItem_C");
static_assert(offsetof(UImagineMaterialsItem_C, UberGraphFrame) == 0x000278, "Member 'UImagineMaterialsItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineMaterialsItem_C, Img_Lock) == 0x000280, "Member 'UImagineMaterialsItem_C::Img_Lock' has a wrong offset!");
static_assert(offsetof(UImagineMaterialsItem_C, ItemDropInfo) == 0x000288, "Member 'UImagineMaterialsItem_C::ItemDropInfo' has a wrong offset!");
static_assert(offsetof(UImagineMaterialsItem_C, TimeLimitIcon) == 0x000290, "Member 'UImagineMaterialsItem_C::TimeLimitIcon' has a wrong offset!");
static_assert(offsetof(UImagineMaterialsItem_C, Txt_Inventory) == 0x000298, "Member 'UImagineMaterialsItem_C::Txt_Inventory' has a wrong offset!");
static_assert(offsetof(UImagineMaterialsItem_C, Txt_ItemName) == 0x0002A0, "Member 'UImagineMaterialsItem_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UImagineMaterialsItem_C, Txt_NeedNum) == 0x0002A8, "Member 'UImagineMaterialsItem_C::Txt_NeedNum' has a wrong offset!");
static_assert(offsetof(UImagineMaterialsItem_C, Material) == 0x0002B0, "Member 'UImagineMaterialsItem_C::Material' has a wrong offset!");

}

