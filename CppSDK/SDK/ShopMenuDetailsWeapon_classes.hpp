#pragma once

 

// Package: ShopMenuDetailsWeapon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"
#include "WBP_ShopMenuDetailsCommon_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C
// 0x02B8 (0x0540 - 0x0288)
class UShopMenuDetailsWeapon_C final : public UWBP_ShopMenuDetailsCommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UScaleBox*                              AttkGrp;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeIcon_C*                       Attribute5;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp2;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotList_C*     CommonWeaponAbilityInfoSlotList;                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTitleBG;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              LvGrp;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_AbilityDetail;                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn16_C*                SBButtonReturnToRecipe;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn16_C*                SBButtonShowRate;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_1;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_2;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_3;                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_4;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_5;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_6;                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_7;                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_8;                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_9;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_10;                             // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_11;                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_CommonAbility_C*              ShopMenu_CommonAbility1;                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_CommonAbility_C*              ShopMenu_CommonAbility2;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_CommonAbility_C*              ShopMenu_CommonAbility3;                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_CommonAbility_C*              ShopMenu_CommonAbility4;                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_Recipe;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_ShowRate;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextDesc;                                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttack;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttributeValue;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCp;                                             // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX;                                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT;                                            // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLvl;                                            // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND;                                            // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtSPEffect;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtSPEffect2;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR;                                            // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT;                                            // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DetailsVisible;                                    // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AC9[0x3];                                     // 0x0409(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrItemId;                                        // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_WeaponManager_C*                    BPWeaponManager;                                   // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ShopItemTableName;                                 // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CurrItemUniqueId;                                  // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FSBWeaponPerkUIInfo>            CurrPerkUIInfoTable;                               // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         WeaponID;                                          // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSellItem;                                         // 0x0454(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ACA[0x3];                                     // 0x0455(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         InDesignType;                                      // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4ACB[0x4];                                     // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    WeaponMaster;                                      // 0x0470(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Amount;                                            // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x0524(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickShowOriginal;                               // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         RecepiId;                                          // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LotteryGroupsId;                                   // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void OnClickShowOriginal__DelegateSignature();
	void ExecuteUbergraph_ShopMenuDetailsWeapon(int32 EntryPoint);
	void BndEvt__ShopMenuDetailsWeapon_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShopMenuDetailsWeapon_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShopMenuDetailsWeapon_Button_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__ShopMenuDetailsWeapon_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void CloseDetails();
	void ShowDetails(int32 ItemIndex, bool IsSellItem, const class FString& ItemUniqueId, int32 Param_Amount, int32 Param_AmountMin, bool bShowProduct, int32 RecipeId);
	void Construct();
	void Init(const class FString& InCurrMapName);
	void FindCurrMapWeaponTransform(const class FString& InCurrMapName, struct FTransform* OutTransform);
	void GetWeaponLevelStatus(ESBWeaponStatus EnhanceType, class FText* Value);
	void GetWeaponAtkStatus(class FText* Value);
	class FText GetSpEffectText();
	void SetLotteryAbility(bool bLotteryAbility);
	void SetLotteryGroupsId(int32 Param_LotteryGroupsId);
	class FText GetSpEffectText_Internal(class FName PerkPickId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsWeapon_C">();
	}
	static class UShopMenuDetailsWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsWeapon_C>();
	}
};
static_assert(alignof(UShopMenuDetailsWeapon_C) == 0x000008, "Wrong alignment on UShopMenuDetailsWeapon_C");
static_assert(sizeof(UShopMenuDetailsWeapon_C) == 0x000540, "Wrong size on UShopMenuDetailsWeapon_C");
static_assert(offsetof(UShopMenuDetailsWeapon_C, UberGraphFrame) == 0x000288, "Member 'UShopMenuDetailsWeapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, AnimOut) == 0x000290, "Member 'UShopMenuDetailsWeapon_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, AnimIn) == 0x000298, "Member 'UShopMenuDetailsWeapon_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, AttkGrp) == 0x0002A0, "Member 'UShopMenuDetailsWeapon_C::AttkGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, Attribute5) == 0x0002A8, "Member 'UShopMenuDetailsWeapon_C::Attribute5' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, BgDetails) == 0x0002B0, "Member 'UShopMenuDetailsWeapon_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, ColorGrp1) == 0x0002B8, "Member 'UShopMenuDetailsWeapon_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, ColorGrp2) == 0x0002C0, "Member 'UShopMenuDetailsWeapon_C::ColorGrp2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, CommonWeaponAbilityInfoSlotList) == 0x0002C8, "Member 'UShopMenuDetailsWeapon_C::CommonWeaponAbilityInfoSlotList' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, ImageTitleBG) == 0x0002D0, "Member 'UShopMenuDetailsWeapon_C::ImageTitleBG' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, LvGrp) == 0x0002D8, "Member 'UShopMenuDetailsWeapon_C::LvGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, NameParts) == 0x0002E0, "Member 'UShopMenuDetailsWeapon_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBButton_AbilityDetail) == 0x0002E8, "Member 'UShopMenuDetailsWeapon_C::SBButton_AbilityDetail' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBButtonReturnToRecipe) == 0x0002F0, "Member 'UShopMenuDetailsWeapon_C::SBButtonReturnToRecipe' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBButtonShowRate) == 0x0002F8, "Member 'UShopMenuDetailsWeapon_C::SBButtonShowRate' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock) == 0x000300, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_1) == 0x000308, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_2) == 0x000310, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_3) == 0x000318, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_3' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_4) == 0x000320, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_4' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_5) == 0x000328, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_5' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_6) == 0x000330, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_6' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_7) == 0x000338, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_7' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_8) == 0x000340, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_8' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_9) == 0x000348, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_9' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_10) == 0x000350, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_10' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, SBRuntimeTextBlock_11) == 0x000358, "Member 'UShopMenuDetailsWeapon_C::SBRuntimeTextBlock_11' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, ShopMenu_CommonAbility1) == 0x000360, "Member 'UShopMenuDetailsWeapon_C::ShopMenu_CommonAbility1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, ShopMenu_CommonAbility2) == 0x000368, "Member 'UShopMenuDetailsWeapon_C::ShopMenu_CommonAbility2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, ShopMenu_CommonAbility3) == 0x000370, "Member 'UShopMenuDetailsWeapon_C::ShopMenu_CommonAbility3' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, ShopMenu_CommonAbility4) == 0x000378, "Member 'UShopMenuDetailsWeapon_C::ShopMenu_CommonAbility4' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, Text_Recipe) == 0x000380, "Member 'UShopMenuDetailsWeapon_C::Text_Recipe' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, Text_ShowRate) == 0x000388, "Member 'UShopMenuDetailsWeapon_C::Text_ShowRate' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TextDesc) == 0x000390, "Member 'UShopMenuDetailsWeapon_C::TextDesc' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtAttack) == 0x000398, "Member 'UShopMenuDetailsWeapon_C::TxtAttack' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtAttributeValue) == 0x0003A0, "Member 'UShopMenuDetailsWeapon_C::TxtAttributeValue' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtCp) == 0x0003A8, "Member 'UShopMenuDetailsWeapon_C::TxtCp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtDEX) == 0x0003B0, "Member 'UShopMenuDetailsWeapon_C::TxtDEX' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtINT) == 0x0003B8, "Member 'UShopMenuDetailsWeapon_C::TxtINT' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtLvl) == 0x0003C0, "Member 'UShopMenuDetailsWeapon_C::TxtLvl' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtMND) == 0x0003C8, "Member 'UShopMenuDetailsWeapon_C::TxtMND' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtSPEffect) == 0x0003D0, "Member 'UShopMenuDetailsWeapon_C::TxtSPEffect' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtSPEffect2) == 0x0003D8, "Member 'UShopMenuDetailsWeapon_C::TxtSPEffect2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtSTR) == 0x0003E0, "Member 'UShopMenuDetailsWeapon_C::TxtSTR' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, TxtVIT) == 0x0003E8, "Member 'UShopMenuDetailsWeapon_C::TxtVIT' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, WBP_ShopMenuDetailsTags) == 0x0003F0, "Member 'UShopMenuDetailsWeapon_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, OnClose) == 0x0003F8, "Member 'UShopMenuDetailsWeapon_C::OnClose' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, DetailsVisible) == 0x000408, "Member 'UShopMenuDetailsWeapon_C::DetailsVisible' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, CurrItemId) == 0x00040C, "Member 'UShopMenuDetailsWeapon_C::CurrItemId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, BPWeaponManager) == 0x000410, "Member 'UShopMenuDetailsWeapon_C::BPWeaponManager' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, ShopItemTableName) == 0x000418, "Member 'UShopMenuDetailsWeapon_C::ShopItemTableName' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, CurrItemUniqueId) == 0x000420, "Member 'UShopMenuDetailsWeapon_C::CurrItemUniqueId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, CurrPerkUIInfoTable) == 0x000430, "Member 'UShopMenuDetailsWeapon_C::CurrPerkUIInfoTable' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, OnEndCloseDetailAnimation) == 0x000440, "Member 'UShopMenuDetailsWeapon_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, WeaponID) == 0x000450, "Member 'UShopMenuDetailsWeapon_C::WeaponID' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, bSellItem) == 0x000454, "Member 'UShopMenuDetailsWeapon_C::bSellItem' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, OnClickZoomIn) == 0x000458, "Member 'UShopMenuDetailsWeapon_C::OnClickZoomIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, InDesignType) == 0x000468, "Member 'UShopMenuDetailsWeapon_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, WeaponMaster) == 0x000470, "Member 'UShopMenuDetailsWeapon_C::WeaponMaster' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, Amount) == 0x000520, "Member 'UShopMenuDetailsWeapon_C::Amount' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, AmountMin) == 0x000524, "Member 'UShopMenuDetailsWeapon_C::AmountMin' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, OnClickShowOriginal) == 0x000528, "Member 'UShopMenuDetailsWeapon_C::OnClickShowOriginal' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, RecepiId) == 0x000538, "Member 'UShopMenuDetailsWeapon_C::RecepiId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsWeapon_C, LotteryGroupsId) == 0x00053C, "Member 'UShopMenuDetailsWeapon_C::LotteryGroupsId' has a wrong offset!");

}

