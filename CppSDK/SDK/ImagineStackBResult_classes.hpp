#pragma once

 

// Package: ImagineStackBResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineStackBResult.ImagineStackBResult_C
// 0x0158 (0x03D0 - 0x0278)
class UImagineStackBResult_C final : public UUserWidget
{
public:
	class UCommonEquipment2DImageParts_C*         CommonEquipment2DImageParts;                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipLevelView_C*                      EquipLevelView;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipStatusImaginePowers_C*            EquipStatusImaginePowers;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipStatusView_C*                     EquipStatusView;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineAbilityInfoView_C*              ImagineAbilityInfoView;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineTypeView_C*                     ImagineTypeView;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ItemName;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        WBP_StackB_M;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           ItemData;                                          // 0x02B8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Set_Info(const struct FOwnItemInfo& Param_ItemData);
	void UpdateStackBIcon();
	void UpdateImagineType();
	void ImageLoad();
	void SetPrevData(const struct FOwnItemInfo& OwnItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineStackBResult_C">();
	}
	static class UImagineStackBResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineStackBResult_C>();
	}
};
static_assert(alignof(UImagineStackBResult_C) == 0x000008, "Wrong alignment on UImagineStackBResult_C");
static_assert(sizeof(UImagineStackBResult_C) == 0x0003D0, "Wrong size on UImagineStackBResult_C");
static_assert(offsetof(UImagineStackBResult_C, CommonEquipment2DImageParts) == 0x000278, "Member 'UImagineStackBResult_C::CommonEquipment2DImageParts' has a wrong offset!");
static_assert(offsetof(UImagineStackBResult_C, EquipLevelView) == 0x000280, "Member 'UImagineStackBResult_C::EquipLevelView' has a wrong offset!");
static_assert(offsetof(UImagineStackBResult_C, EquipStatusImaginePowers) == 0x000288, "Member 'UImagineStackBResult_C::EquipStatusImaginePowers' has a wrong offset!");
static_assert(offsetof(UImagineStackBResult_C, EquipStatusView) == 0x000290, "Member 'UImagineStackBResult_C::EquipStatusView' has a wrong offset!");
static_assert(offsetof(UImagineStackBResult_C, ImagineAbilityInfoView) == 0x000298, "Member 'UImagineStackBResult_C::ImagineAbilityInfoView' has a wrong offset!");
static_assert(offsetof(UImagineStackBResult_C, ImagineTypeView) == 0x0002A0, "Member 'UImagineStackBResult_C::ImagineTypeView' has a wrong offset!");
static_assert(offsetof(UImagineStackBResult_C, Txt_ItemName) == 0x0002A8, "Member 'UImagineStackBResult_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UImagineStackBResult_C, WBP_StackB_M) == 0x0002B0, "Member 'UImagineStackBResult_C::WBP_StackB_M' has a wrong offset!");
static_assert(offsetof(UImagineStackBResult_C, ItemData) == 0x0002B8, "Member 'UImagineStackBResult_C::ItemData' has a wrong offset!");

}

