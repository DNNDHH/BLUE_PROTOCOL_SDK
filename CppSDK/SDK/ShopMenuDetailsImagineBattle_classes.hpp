#pragma once

 

// Package: ShopMenuDetailsImagineBattle

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "WBP_ShopMenuDetailsCommon_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C
// 0x02D8 (0x0560 - 0x0288)
class UShopMenuDetailsImagineBattle_C final : public UWBP_ShopMenuDetailsCommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp2;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Imagine;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NS_BackGroundAura;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_AbilityInfo;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn16_C*                SBButtonReturnToRecipe;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn16_C*                SBButtonShowRate;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_0;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_3;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_5;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_10;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_12;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_13;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_14;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_15;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_16;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_Idea;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_Recipe;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_ShowRate;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtAbilityName;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttack;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDefence;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX;                                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT;                                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtLv1;                                            // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND;                                            // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR;                                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT;                                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleImagineSkillInfoParts_C*     WBP_BattleImagineSkillInfoParts;                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ShowOriginalText;                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         InDesignType;                                      // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4470[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBMasterImagine                       MasterImagine;                                     // 0x03D0(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Level;                                             // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4471[0x4];                                     // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_MultiLine_C*  ToolTopWidget;                                     // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      ImagineLevelParam;                                 // 0x0490(0x006C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_4472[0x4];                                     // 0x04FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 ParamArray;                                        // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTextBlock*>                     ParamTextBlockArray;                               // 0x0510(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 UniqueId;                                          // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickShowOriginal;                               // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBRewardItemType                             OriginalRewardType;                                // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4473[0x3];                                     // 0x0551(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OriginalItemIndex;                                 // 0x0554(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkId;                                            // 0x0558(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LotteryGroupsId;                                   // 0x055C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void OnClickShowOriginal__DelegateSignature();
	void ExecuteUbergraph_ShopMenuDetailsImagineBattle(int32 EntryPoint);
	void BndEvt__ShopMenuDetailsImagineBattle_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShopMenuDetailsImagineBattle_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShopMenuDetailsImagineBattle_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature();
	void SetData(int32 ItemIndex, int32 Amount, int32 AmountMin, const class FString& Param_UniqueId, bool bShowProduct, ESBRewardItemType Param_OriginalRewardType, int32 Param_OriginalItemIndex);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void CloseDetails();
	void ShowDetails();
	void Construct();
	class UWidget* GetToolTipWidgetByAbilityNameScaleBox();
	void GetAbilityName(bool* bHasValidAbility, class FText* AbilityName);
	void ShowRateDialog();
	void SetLotteryGroupsId(int32 Param_LotteryGroupsId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsImagineBattle_C">();
	}
	static class UShopMenuDetailsImagineBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsImagineBattle_C>();
	}
};
static_assert(alignof(UShopMenuDetailsImagineBattle_C) == 0x000008, "Wrong alignment on UShopMenuDetailsImagineBattle_C");
static_assert(sizeof(UShopMenuDetailsImagineBattle_C) == 0x000560, "Wrong size on UShopMenuDetailsImagineBattle_C");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, UberGraphFrame) == 0x000288, "Member 'UShopMenuDetailsImagineBattle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, AnimOut) == 0x000290, "Member 'UShopMenuDetailsImagineBattle_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, AnimIn) == 0x000298, "Member 'UShopMenuDetailsImagineBattle_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, BgDetails) == 0x0002A0, "Member 'UShopMenuDetailsImagineBattle_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, ColorGrp1) == 0x0002A8, "Member 'UShopMenuDetailsImagineBattle_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, ColorGrp2) == 0x0002B0, "Member 'UShopMenuDetailsImagineBattle_C::ColorGrp2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, Img_Imagine) == 0x0002B8, "Member 'UShopMenuDetailsImagineBattle_C::Img_Imagine' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, NameParts) == 0x0002C0, "Member 'UShopMenuDetailsImagineBattle_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, NS_BackGroundAura) == 0x0002C8, "Member 'UShopMenuDetailsImagineBattle_C::NS_BackGroundAura' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBButton_AbilityInfo) == 0x0002D0, "Member 'UShopMenuDetailsImagineBattle_C::SBButton_AbilityInfo' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBButtonReturnToRecipe) == 0x0002D8, "Member 'UShopMenuDetailsImagineBattle_C::SBButtonReturnToRecipe' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBButtonShowRate) == 0x0002E0, "Member 'UShopMenuDetailsImagineBattle_C::SBButtonShowRate' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBRuntimeTextBlock) == 0x0002E8, "Member 'UShopMenuDetailsImagineBattle_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBRuntimeTextBlock_0) == 0x0002F0, "Member 'UShopMenuDetailsImagineBattle_C::SBRuntimeTextBlock_0' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBRuntimeTextBlock_3) == 0x0002F8, "Member 'UShopMenuDetailsImagineBattle_C::SBRuntimeTextBlock_3' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBRuntimeTextBlock_5) == 0x000300, "Member 'UShopMenuDetailsImagineBattle_C::SBRuntimeTextBlock_5' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBRuntimeTextBlock_10) == 0x000308, "Member 'UShopMenuDetailsImagineBattle_C::SBRuntimeTextBlock_10' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBRuntimeTextBlock_12) == 0x000310, "Member 'UShopMenuDetailsImagineBattle_C::SBRuntimeTextBlock_12' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBRuntimeTextBlock_13) == 0x000318, "Member 'UShopMenuDetailsImagineBattle_C::SBRuntimeTextBlock_13' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBRuntimeTextBlock_14) == 0x000320, "Member 'UShopMenuDetailsImagineBattle_C::SBRuntimeTextBlock_14' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBRuntimeTextBlock_15) == 0x000328, "Member 'UShopMenuDetailsImagineBattle_C::SBRuntimeTextBlock_15' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, SBRuntimeTextBlock_16) == 0x000330, "Member 'UShopMenuDetailsImagineBattle_C::SBRuntimeTextBlock_16' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, Text_Idea) == 0x000338, "Member 'UShopMenuDetailsImagineBattle_C::Text_Idea' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, Text_Recipe) == 0x000340, "Member 'UShopMenuDetailsImagineBattle_C::Text_Recipe' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, Text_ShowRate) == 0x000348, "Member 'UShopMenuDetailsImagineBattle_C::Text_ShowRate' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, TitleBg) == 0x000350, "Member 'UShopMenuDetailsImagineBattle_C::TitleBg' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, TxtAbilityName) == 0x000358, "Member 'UShopMenuDetailsImagineBattle_C::TxtAbilityName' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, TxtAttack) == 0x000360, "Member 'UShopMenuDetailsImagineBattle_C::TxtAttack' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, TxtDefence) == 0x000368, "Member 'UShopMenuDetailsImagineBattle_C::TxtDefence' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, TxtDEX) == 0x000370, "Member 'UShopMenuDetailsImagineBattle_C::TxtDEX' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, TxtINT) == 0x000378, "Member 'UShopMenuDetailsImagineBattle_C::TxtINT' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, TxtLv1) == 0x000380, "Member 'UShopMenuDetailsImagineBattle_C::TxtLv1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, TxtMND) == 0x000388, "Member 'UShopMenuDetailsImagineBattle_C::TxtMND' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, TxtSTR) == 0x000390, "Member 'UShopMenuDetailsImagineBattle_C::TxtSTR' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, TxtVIT) == 0x000398, "Member 'UShopMenuDetailsImagineBattle_C::TxtVIT' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, WBP_BattleImagineSkillInfoParts) == 0x0003A0, "Member 'UShopMenuDetailsImagineBattle_C::WBP_BattleImagineSkillInfoParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, WBP_ShopMenuDetailsTags) == 0x0003A8, "Member 'UShopMenuDetailsImagineBattle_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, WidgetSwitcher_ShowOriginalText) == 0x0003B0, "Member 'UShopMenuDetailsImagineBattle_C::WidgetSwitcher_ShowOriginalText' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, InDesignType) == 0x0003B8, "Member 'UShopMenuDetailsImagineBattle_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, OnEndCloseDetailAnimation) == 0x0003C0, "Member 'UShopMenuDetailsImagineBattle_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, MasterImagine) == 0x0003D0, "Member 'UShopMenuDetailsImagineBattle_C::MasterImagine' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, Level) == 0x000480, "Member 'UShopMenuDetailsImagineBattle_C::Level' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, ToolTopWidget) == 0x000488, "Member 'UShopMenuDetailsImagineBattle_C::ToolTopWidget' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, ImagineLevelParam) == 0x000490, "Member 'UShopMenuDetailsImagineBattle_C::ImagineLevelParam' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, ParamArray) == 0x000500, "Member 'UShopMenuDetailsImagineBattle_C::ParamArray' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, ParamTextBlockArray) == 0x000510, "Member 'UShopMenuDetailsImagineBattle_C::ParamTextBlockArray' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, OnClickZoomIn) == 0x000520, "Member 'UShopMenuDetailsImagineBattle_C::OnClickZoomIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, UniqueId) == 0x000530, "Member 'UShopMenuDetailsImagineBattle_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, OnClickShowOriginal) == 0x000540, "Member 'UShopMenuDetailsImagineBattle_C::OnClickShowOriginal' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, OriginalRewardType) == 0x000550, "Member 'UShopMenuDetailsImagineBattle_C::OriginalRewardType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, OriginalItemIndex) == 0x000554, "Member 'UShopMenuDetailsImagineBattle_C::OriginalItemIndex' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, PerkId) == 0x000558, "Member 'UShopMenuDetailsImagineBattle_C::PerkId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineBattle_C, LotteryGroupsId) == 0x00055C, "Member 'UShopMenuDetailsImagineBattle_C::LotteryGroupsId' has a wrong offset!");

}

