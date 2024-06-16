#pragma once

 

// Package: ImagineAssetView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineAssetView.ImagineAssetView_C
// 0x0140 (0x03B8 - 0x0278)
class UImagineAssetView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonEquipment2DImageParts_C*         CommonEquipment2DImageParts;                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineAssetViewStatus_C*              ImagineAssetViewStatus;                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_L_C*                        WBP_StackB_L;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           Info;                                              // 0x0298(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          VisibleAbilityInfo;                                // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ImagineAssetView(int32 EntryPoint);
	void Request_Image();
	void SetInfo(const struct FOwnItemInfo& Param_Info);
	void SetUpName();
	void SetAbilityInfoVisibility(bool Param_VisibleAbilityInfo);
	void Set_Diff_Info(const struct FOwnItemInfo& InDiffBase);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineAssetView_C">();
	}
	static class UImagineAssetView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineAssetView_C>();
	}
};
static_assert(alignof(UImagineAssetView_C) == 0x000008, "Wrong alignment on UImagineAssetView_C");
static_assert(sizeof(UImagineAssetView_C) == 0x0003B8, "Wrong size on UImagineAssetView_C");
static_assert(offsetof(UImagineAssetView_C, UberGraphFrame) == 0x000278, "Member 'UImagineAssetView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineAssetView_C, CommonEquipment2DImageParts) == 0x000280, "Member 'UImagineAssetView_C::CommonEquipment2DImageParts' has a wrong offset!");
static_assert(offsetof(UImagineAssetView_C, ImagineAssetViewStatus) == 0x000288, "Member 'UImagineAssetView_C::ImagineAssetViewStatus' has a wrong offset!");
static_assert(offsetof(UImagineAssetView_C, WBP_StackB_L) == 0x000290, "Member 'UImagineAssetView_C::WBP_StackB_L' has a wrong offset!");
static_assert(offsetof(UImagineAssetView_C, Info) == 0x000298, "Member 'UImagineAssetView_C::Info' has a wrong offset!");
static_assert(offsetof(UImagineAssetView_C, VisibleAbilityInfo) == 0x0003B0, "Member 'UImagineAssetView_C::VisibleAbilityInfo' has a wrong offset!");

}

