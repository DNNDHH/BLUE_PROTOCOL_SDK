#pragma once

 

// Package: ImagineAssetViewStatus

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineAssetViewStatus.ImagineAssetViewStatus_C
// 0x02D8 (0x0550 - 0x0278)
class UImagineAssetViewStatus_C final : public UUserWidget
{
public:
	class UImagineAbilityInfoView_C*              ImagineAbilityInfoView;                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineTypeView_C*                     ImagineTypeView;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Atk;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Atk_Diff;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Dex;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Dex_Diff;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_DP;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_DP_Diff;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Int;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Int_Diff;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ItemName;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Mnd;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Mnd_Diff;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Str;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Str_Diff;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Vit;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Vit_Diff;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Vb_ImagineAbilityInfo;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Vb_ImagineType;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           Info;                                              // 0x0310(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          VisibleAbilityInfo;                                // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6CED[0x7];                                     // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           DiffBase;                                          // 0x0430(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bEnableFlatStyle;                                  // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void SetInfo(const struct FOwnItemInfo& Param_Info);
	void SetupParameterImagine(const struct FOwnItemInfo& InItemInfo);
	void SetUpName();
	void SetAbilityInfoVisibility(bool Param_VisibleAbilityInfo);
	void SetDiffBase(const struct FOwnItemInfo& InDiffBase);
	void UpdateDiffParamImagine();
	void SetImagineTypeVisibility();
	void SetDiffVisible(bool bVisible);
	void SetupImagineAbilities(const struct FOwnItemInfo& InputPin);
	void SetEnableFlatStyle(bool Param_bEnableFlatStyle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineAssetViewStatus_C">();
	}
	static class UImagineAssetViewStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineAssetViewStatus_C>();
	}
};
static_assert(alignof(UImagineAssetViewStatus_C) == 0x000008, "Wrong alignment on UImagineAssetViewStatus_C");
static_assert(sizeof(UImagineAssetViewStatus_C) == 0x000550, "Wrong size on UImagineAssetViewStatus_C");
static_assert(offsetof(UImagineAssetViewStatus_C, ImagineAbilityInfoView) == 0x000278, "Member 'UImagineAssetViewStatus_C::ImagineAbilityInfoView' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, ImagineTypeView) == 0x000280, "Member 'UImagineAssetViewStatus_C::ImagineTypeView' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Atk) == 0x000288, "Member 'UImagineAssetViewStatus_C::Txt_Atk' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Atk_Diff) == 0x000290, "Member 'UImagineAssetViewStatus_C::Txt_Atk_Diff' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Dex) == 0x000298, "Member 'UImagineAssetViewStatus_C::Txt_Dex' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Dex_Diff) == 0x0002A0, "Member 'UImagineAssetViewStatus_C::Txt_Dex_Diff' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_DP) == 0x0002A8, "Member 'UImagineAssetViewStatus_C::Txt_DP' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_DP_Diff) == 0x0002B0, "Member 'UImagineAssetViewStatus_C::Txt_DP_Diff' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Int) == 0x0002B8, "Member 'UImagineAssetViewStatus_C::Txt_Int' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Int_Diff) == 0x0002C0, "Member 'UImagineAssetViewStatus_C::Txt_Int_Diff' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_ItemName) == 0x0002C8, "Member 'UImagineAssetViewStatus_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Mnd) == 0x0002D0, "Member 'UImagineAssetViewStatus_C::Txt_Mnd' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Mnd_Diff) == 0x0002D8, "Member 'UImagineAssetViewStatus_C::Txt_Mnd_Diff' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Str) == 0x0002E0, "Member 'UImagineAssetViewStatus_C::Txt_Str' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Str_Diff) == 0x0002E8, "Member 'UImagineAssetViewStatus_C::Txt_Str_Diff' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Vit) == 0x0002F0, "Member 'UImagineAssetViewStatus_C::Txt_Vit' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Txt_Vit_Diff) == 0x0002F8, "Member 'UImagineAssetViewStatus_C::Txt_Vit_Diff' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Vb_ImagineAbilityInfo) == 0x000300, "Member 'UImagineAssetViewStatus_C::Vb_ImagineAbilityInfo' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Vb_ImagineType) == 0x000308, "Member 'UImagineAssetViewStatus_C::Vb_ImagineType' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, Info) == 0x000310, "Member 'UImagineAssetViewStatus_C::Info' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, VisibleAbilityInfo) == 0x000428, "Member 'UImagineAssetViewStatus_C::VisibleAbilityInfo' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, DiffBase) == 0x000430, "Member 'UImagineAssetViewStatus_C::DiffBase' has a wrong offset!");
static_assert(offsetof(UImagineAssetViewStatus_C, bEnableFlatStyle) == 0x000548, "Member 'UImagineAssetViewStatus_C::bEnableFlatStyle' has a wrong offset!");

}

