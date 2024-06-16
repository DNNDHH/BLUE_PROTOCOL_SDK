#pragma once

 

// Package: ImagineTypeView

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineTypeView.ImagineTypeView_C
// 0x0230 (0x04A8 - 0x0278)
class UImagineTypeView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Hb_BattleView;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_SideBar_Battle;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgUpgrade;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonInfoIcon_C*                      PossessionInfoIcon;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PossessionMarkIcon;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Sb_BattleView;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Sb_PossessionInfoIcon;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Sb_SummonInfoIcon;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBEnhanceImagineIconTypeName_C*    StackBEnhanceImagineIconTypeName;                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonInfoIcon_C*                      SummonInfoIcon;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Interval;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PossessionName;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PossessionType;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PowerDesc;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SummonName;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SummonType;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Title_Interval;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Title_PossessionType;                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Title_SummonType;                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_BattleView;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Possession;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_StackBEnhanceAbility;                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        WBP_StackB_S;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_TypeView;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          PreviewType;                                       // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                          bEnableFlatStyle;                                  // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_9268[0x2];                                     // 0x034A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BoxWidth;                                          // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 Img_Color;                                         // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9269[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            Txt_Color;                                         // 0x0358(0x0028)(Edit, BlueprintVisible)
	float                                         FontSize;                                          // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 Icon_Color;                                        // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           Own_Item_Info;                                     // 0x0388(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bShow;                                             // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bToolTipStackBMaxMode;                             // 0x04A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ImagineTypeView(int32 EntryPoint);
	void Set_Enable_Flat_Style(bool Param_bEnableFlatStyle);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ApplyBattleImagineParam(const struct FSBMasterImagine& ImagineMaster);
	void SetEquipPosition(const struct FSBMasterImagine& ImagineData);
	void ApplyInnerImagineParam(const struct FSBMasterImagine& MasterData, int32 Level);
	void ApplyImagineParam(const struct FSBMasterImagine& ImagineMaster, int32 Level);
	void Set_Development_View();
	void ApplyData(const struct FOwnItemInfo& OwnItemInfo);
	void ApplyBattleImagineData(const struct FOwnItemInfo& Info);
	void ApplyBattleImagineStackParam(const struct FSBMasterImagine& ImagineMaster, const class FString& StackBText, const struct FOwnItemInfo& Info);
	void Set_Diff_Show(bool Param_bShow);
	void ApplyDataMaxStackB(int32 ItemId);
	void InitUIStackBMaxMode();
	void ApplyBattleImagineDataByMaster(const struct FSBMasterImagine& ImagineMaster);
	void ApplyBattleImagineStackParamByMaster(const struct FSBMasterImagine& ImagineMaster, const class FString& StackBText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineTypeView_C">();
	}
	static class UImagineTypeView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineTypeView_C>();
	}
};
static_assert(alignof(UImagineTypeView_C) == 0x000008, "Wrong alignment on UImagineTypeView_C");
static_assert(sizeof(UImagineTypeView_C) == 0x0004A8, "Wrong size on UImagineTypeView_C");
static_assert(offsetof(UImagineTypeView_C, UberGraphFrame) == 0x000278, "Member 'UImagineTypeView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, AttributeIcon) == 0x000280, "Member 'UImagineTypeView_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Hb_BattleView) == 0x000288, "Member 'UImagineTypeView_C::Hb_BattleView' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Img_SideBar_Battle) == 0x000290, "Member 'UImagineTypeView_C::Img_SideBar_Battle' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, ImgUpgrade) == 0x000298, "Member 'UImagineTypeView_C::ImgUpgrade' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, PossessionInfoIcon) == 0x0002A0, "Member 'UImagineTypeView_C::PossessionInfoIcon' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, PossessionMarkIcon) == 0x0002A8, "Member 'UImagineTypeView_C::PossessionMarkIcon' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Sb_BattleView) == 0x0002B0, "Member 'UImagineTypeView_C::Sb_BattleView' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Sb_PossessionInfoIcon) == 0x0002B8, "Member 'UImagineTypeView_C::Sb_PossessionInfoIcon' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Sb_SummonInfoIcon) == 0x0002C0, "Member 'UImagineTypeView_C::Sb_SummonInfoIcon' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, StackBEnhanceImagineIconTypeName) == 0x0002C8, "Member 'UImagineTypeView_C::StackBEnhanceImagineIconTypeName' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, SummonInfoIcon) == 0x0002D0, "Member 'UImagineTypeView_C::SummonInfoIcon' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Txt_Interval) == 0x0002D8, "Member 'UImagineTypeView_C::Txt_Interval' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Txt_PossessionName) == 0x0002E0, "Member 'UImagineTypeView_C::Txt_PossessionName' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Txt_PossessionType) == 0x0002E8, "Member 'UImagineTypeView_C::Txt_PossessionType' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Txt_PowerDesc) == 0x0002F0, "Member 'UImagineTypeView_C::Txt_PowerDesc' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Txt_SummonName) == 0x0002F8, "Member 'UImagineTypeView_C::Txt_SummonName' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Txt_SummonType) == 0x000300, "Member 'UImagineTypeView_C::Txt_SummonType' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Txt_Title_Interval) == 0x000308, "Member 'UImagineTypeView_C::Txt_Title_Interval' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Txt_Title_PossessionType) == 0x000310, "Member 'UImagineTypeView_C::Txt_Title_PossessionType' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Txt_Title_SummonType) == 0x000318, "Member 'UImagineTypeView_C::Txt_Title_SummonType' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, VB_BattleView) == 0x000320, "Member 'UImagineTypeView_C::VB_BattleView' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, VB_Possession) == 0x000328, "Member 'UImagineTypeView_C::VB_Possession' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, VB_StackBEnhanceAbility) == 0x000330, "Member 'UImagineTypeView_C::VB_StackBEnhanceAbility' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, WBP_StackB_S) == 0x000338, "Member 'UImagineTypeView_C::WBP_StackB_S' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, WS_TypeView) == 0x000340, "Member 'UImagineTypeView_C::WS_TypeView' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, PreviewType) == 0x000348, "Member 'UImagineTypeView_C::PreviewType' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, bEnableFlatStyle) == 0x000349, "Member 'UImagineTypeView_C::bEnableFlatStyle' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, BoxWidth) == 0x00034C, "Member 'UImagineTypeView_C::BoxWidth' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Img_Color) == 0x000350, "Member 'UImagineTypeView_C::Img_Color' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Txt_Color) == 0x000358, "Member 'UImagineTypeView_C::Txt_Color' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, FontSize) == 0x000380, "Member 'UImagineTypeView_C::FontSize' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Icon_Color) == 0x000384, "Member 'UImagineTypeView_C::Icon_Color' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, Own_Item_Info) == 0x000388, "Member 'UImagineTypeView_C::Own_Item_Info' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, bShow) == 0x0004A0, "Member 'UImagineTypeView_C::bShow' has a wrong offset!");
static_assert(offsetof(UImagineTypeView_C, bToolTipStackBMaxMode) == 0x0004A1, "Member 'UImagineTypeView_C::bToolTipStackBMaxMode' has a wrong offset!");

}

