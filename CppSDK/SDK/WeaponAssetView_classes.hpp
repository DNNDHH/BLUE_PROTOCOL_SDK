#pragma once

 

// Package: WeaponAssetView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponAssetView.WeaponAssetView_C
// 0x0328 (0x05A0 - 0x0278)
class UWeaponAssetView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipment2DImageParts_C*         CommonEquipment2DImageParts;                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgBg;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Attribute_Power;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_CP;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Dex;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Int;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Mnd;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Str;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Vit;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Atk;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Attribute_Power;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_CP;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Dex;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Diff_Atk;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Diff_AttributePower;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Diff_CP;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Diff_Dex;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Diff_Int;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Diff_Mnd;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Diff_Str;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Diff_Vit;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Int;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ItemName;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Mnd;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Str;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Vit;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Diffs;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_L_C*                        WBP_StackB_L;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           Info;                                              // 0x0368(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FOwnItemInfo                           BaseInfo;                                          // 0x0480(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          VisibleStackBMax;                                  // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WeaponAssetView(int32 EntryPoint);
	void Request_Image();
	void SetInfo(const struct FOwnItemInfo& Param_Info);
	void SetupParameterWeapon(const struct FOwnItemInfo& OwnItemInfo);
	void SetDiffVisibility(bool Visible);
	void SetUpName();
	void SetBG();
	void UpdateDiffValue();
	void SetBaseInfo(const struct FOwnItemInfo& Param_BaseInfo);
	void SetupMasterData(const struct FOwnItemInfo& Param_Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponAssetView_C">();
	}
	static class UWeaponAssetView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponAssetView_C>();
	}
};
static_assert(alignof(UWeaponAssetView_C) == 0x000008, "Wrong alignment on UWeaponAssetView_C");
static_assert(sizeof(UWeaponAssetView_C) == 0x0005A0, "Wrong size on UWeaponAssetView_C");
static_assert(offsetof(UWeaponAssetView_C, UberGraphFrame) == 0x000278, "Member 'UWeaponAssetView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, AttributeIcon) == 0x000280, "Member 'UWeaponAssetView_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, CommonEquipment2DImageParts) == 0x000288, "Member 'UWeaponAssetView_C::CommonEquipment2DImageParts' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, ImgBg) == 0x000290, "Member 'UWeaponAssetView_C::ImgBg' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, SB_Attribute_Power) == 0x000298, "Member 'UWeaponAssetView_C::SB_Attribute_Power' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, SB_CP) == 0x0002A0, "Member 'UWeaponAssetView_C::SB_CP' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, SB_Dex) == 0x0002A8, "Member 'UWeaponAssetView_C::SB_Dex' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, SB_Int) == 0x0002B0, "Member 'UWeaponAssetView_C::SB_Int' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, SB_Mnd) == 0x0002B8, "Member 'UWeaponAssetView_C::SB_Mnd' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, SB_Str) == 0x0002C0, "Member 'UWeaponAssetView_C::SB_Str' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, SB_Vit) == 0x0002C8, "Member 'UWeaponAssetView_C::SB_Vit' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Atk) == 0x0002D0, "Member 'UWeaponAssetView_C::Txt_Atk' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Attribute_Power) == 0x0002D8, "Member 'UWeaponAssetView_C::Txt_Attribute_Power' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_CP) == 0x0002E0, "Member 'UWeaponAssetView_C::Txt_CP' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Dex) == 0x0002E8, "Member 'UWeaponAssetView_C::Txt_Dex' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Diff_Atk) == 0x0002F0, "Member 'UWeaponAssetView_C::Txt_Diff_Atk' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Diff_AttributePower) == 0x0002F8, "Member 'UWeaponAssetView_C::Txt_Diff_AttributePower' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Diff_CP) == 0x000300, "Member 'UWeaponAssetView_C::Txt_Diff_CP' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Diff_Dex) == 0x000308, "Member 'UWeaponAssetView_C::Txt_Diff_Dex' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Diff_Int) == 0x000310, "Member 'UWeaponAssetView_C::Txt_Diff_Int' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Diff_Mnd) == 0x000318, "Member 'UWeaponAssetView_C::Txt_Diff_Mnd' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Diff_Str) == 0x000320, "Member 'UWeaponAssetView_C::Txt_Diff_Str' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Diff_Vit) == 0x000328, "Member 'UWeaponAssetView_C::Txt_Diff_Vit' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Int) == 0x000330, "Member 'UWeaponAssetView_C::Txt_Int' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_ItemName) == 0x000338, "Member 'UWeaponAssetView_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Mnd) == 0x000340, "Member 'UWeaponAssetView_C::Txt_Mnd' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Str) == 0x000348, "Member 'UWeaponAssetView_C::Txt_Str' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Txt_Vit) == 0x000350, "Member 'UWeaponAssetView_C::Txt_Vit' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, VB_Diffs) == 0x000358, "Member 'UWeaponAssetView_C::VB_Diffs' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, WBP_StackB_L) == 0x000360, "Member 'UWeaponAssetView_C::WBP_StackB_L' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, Info) == 0x000368, "Member 'UWeaponAssetView_C::Info' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, BaseInfo) == 0x000480, "Member 'UWeaponAssetView_C::BaseInfo' has a wrong offset!");
static_assert(offsetof(UWeaponAssetView_C, VisibleStackBMax) == 0x000598, "Member 'UWeaponAssetView_C::VisibleStackBMax' has a wrong offset!");

}

