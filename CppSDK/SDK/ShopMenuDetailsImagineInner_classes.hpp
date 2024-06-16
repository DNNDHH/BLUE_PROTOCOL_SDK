#pragma once

 

// Package: ShopMenuDetailsImagineInner

#include "Basic.hpp"

#include "WBP_ShopMenuDetailsCommon_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C
// 0x0330 (0x05B8 - 0x0288)
class UShopMenuDetailsImagineInner_C final : public UWBP_ShopMenuDetailsCommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAttributeIcon_C*                       Attribute1;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp2;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_104;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Imagine;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon1;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon2;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon3;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon4;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon5;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_AbilityInfo;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn16_C*                SBButtonReturnToRecipe;                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn16_C*                SBButtonShowRate;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_1;                              // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_3;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_8;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_17;                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_23;                             // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_24;                             // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_25;                             // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_26;                             // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_27;                             // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_28;                             // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_29;                             // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_Recipe;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_ShowRate;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg;                                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtAbilityName;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttack;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDefence;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX;                                            // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT;                                            // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtLv1;                                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND;                                            // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR;                                            // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT;                                            // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         InDesignType;                                      // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8A49[0x4];                                     // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBtnImgViewClicked;                               // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Level;                                             // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImagineParameter                      ImagineLevelParam;                                 // 0x042C(0x006C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<bool>                                  EquipPosArray;                                     // 0x0498(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 ParamArray;                                        // 0x04A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTextBlock*>                     ParamTextBlockArray;                               // 0x04B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USizeBox*>                       PosIconArray;                                      // 0x04C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSBMasterImagine                       MasterImagine;                                     // 0x04D8(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 UniqueId;                                          // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickShowOriginal;                               // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         RecipeId;                                          // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkId;                                            // 0x05AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LotteryGroupsId;                                   // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void OnBtnImgViewClicked__DelegateSignature();
	void OnClickShowOriginal__DelegateSignature();
	void ExecuteUbergraph_ShopMenuDetailsImagineInner(int32 EntryPoint);
	void BndEvt__ShopMenuDetailsImagineInner_SBButtonShowRate_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShopMenuDetailsImagineInner_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void SetData(int32 ItemIndex, int32 Amount, int32 AmountMin, const class FString& Param_UniqueId, bool bShowProduct, int32 Param_RecipeId);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void CloseDetails();
	void ShowDetails();
	void Construct();
	void SetLotteryGroupsId(int32 Param_LotteryGroupsId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsImagineInner_C">();
	}
	static class UShopMenuDetailsImagineInner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsImagineInner_C>();
	}
};
static_assert(alignof(UShopMenuDetailsImagineInner_C) == 0x000008, "Wrong alignment on UShopMenuDetailsImagineInner_C");
static_assert(sizeof(UShopMenuDetailsImagineInner_C) == 0x0005B8, "Wrong size on UShopMenuDetailsImagineInner_C");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, UberGraphFrame) == 0x000288, "Member 'UShopMenuDetailsImagineInner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, AnimOut) == 0x000290, "Member 'UShopMenuDetailsImagineInner_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, AnimIn) == 0x000298, "Member 'UShopMenuDetailsImagineInner_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, Attribute1) == 0x0002A0, "Member 'UShopMenuDetailsImagineInner_C::Attribute1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, BgDetails) == 0x0002A8, "Member 'UShopMenuDetailsImagineInner_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, ColorGrp1) == 0x0002B0, "Member 'UShopMenuDetailsImagineInner_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, ColorGrp2) == 0x0002B8, "Member 'UShopMenuDetailsImagineInner_C::ColorGrp2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, Image) == 0x0002C0, "Member 'UShopMenuDetailsImagineInner_C::Image' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, Image_1) == 0x0002C8, "Member 'UShopMenuDetailsImagineInner_C::Image_1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, Image_2) == 0x0002D0, "Member 'UShopMenuDetailsImagineInner_C::Image_2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, Image_3) == 0x0002D8, "Member 'UShopMenuDetailsImagineInner_C::Image_3' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, Image_104) == 0x0002E0, "Member 'UShopMenuDetailsImagineInner_C::Image_104' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, Img_Imagine) == 0x0002E8, "Member 'UShopMenuDetailsImagineInner_C::Img_Imagine' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, NameParts) == 0x0002F0, "Member 'UShopMenuDetailsImagineInner_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, PosIcon1) == 0x0002F8, "Member 'UShopMenuDetailsImagineInner_C::PosIcon1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, PosIcon2) == 0x000300, "Member 'UShopMenuDetailsImagineInner_C::PosIcon2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, PosIcon3) == 0x000308, "Member 'UShopMenuDetailsImagineInner_C::PosIcon3' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, PosIcon4) == 0x000310, "Member 'UShopMenuDetailsImagineInner_C::PosIcon4' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, PosIcon5) == 0x000318, "Member 'UShopMenuDetailsImagineInner_C::PosIcon5' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBButton_AbilityInfo) == 0x000320, "Member 'UShopMenuDetailsImagineInner_C::SBButton_AbilityInfo' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBButtonReturnToRecipe) == 0x000328, "Member 'UShopMenuDetailsImagineInner_C::SBButtonReturnToRecipe' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBButtonShowRate) == 0x000330, "Member 'UShopMenuDetailsImagineInner_C::SBButtonShowRate' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock) == 0x000338, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_1) == 0x000340, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_3) == 0x000348, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_3' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_8) == 0x000350, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_8' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_17) == 0x000358, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_17' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_23) == 0x000360, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_23' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_24) == 0x000368, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_24' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_25) == 0x000370, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_25' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_26) == 0x000378, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_26' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_27) == 0x000380, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_27' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_28) == 0x000388, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_28' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, SBRuntimeTextBlock_29) == 0x000390, "Member 'UShopMenuDetailsImagineInner_C::SBRuntimeTextBlock_29' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, Text_Recipe) == 0x000398, "Member 'UShopMenuDetailsImagineInner_C::Text_Recipe' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, Text_ShowRate) == 0x0003A0, "Member 'UShopMenuDetailsImagineInner_C::Text_ShowRate' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, TitleBg) == 0x0003A8, "Member 'UShopMenuDetailsImagineInner_C::TitleBg' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, TxtAbilityName) == 0x0003B0, "Member 'UShopMenuDetailsImagineInner_C::TxtAbilityName' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, TxtAttack) == 0x0003B8, "Member 'UShopMenuDetailsImagineInner_C::TxtAttack' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, TxtDefence) == 0x0003C0, "Member 'UShopMenuDetailsImagineInner_C::TxtDefence' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, TxtDEX) == 0x0003C8, "Member 'UShopMenuDetailsImagineInner_C::TxtDEX' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, TxtINT) == 0x0003D0, "Member 'UShopMenuDetailsImagineInner_C::TxtINT' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, TxtLv1) == 0x0003D8, "Member 'UShopMenuDetailsImagineInner_C::TxtLv1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, TxtMND) == 0x0003E0, "Member 'UShopMenuDetailsImagineInner_C::TxtMND' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, TxtSTR) == 0x0003E8, "Member 'UShopMenuDetailsImagineInner_C::TxtSTR' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, TxtVIT) == 0x0003F0, "Member 'UShopMenuDetailsImagineInner_C::TxtVIT' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, WBP_ShopMenuDetailsTags) == 0x0003F8, "Member 'UShopMenuDetailsImagineInner_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, InDesignType) == 0x000400, "Member 'UShopMenuDetailsImagineInner_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, OnEndCloseDetailAnimation) == 0x000408, "Member 'UShopMenuDetailsImagineInner_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, OnBtnImgViewClicked) == 0x000418, "Member 'UShopMenuDetailsImagineInner_C::OnBtnImgViewClicked' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, Level) == 0x000428, "Member 'UShopMenuDetailsImagineInner_C::Level' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, ImagineLevelParam) == 0x00042C, "Member 'UShopMenuDetailsImagineInner_C::ImagineLevelParam' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, EquipPosArray) == 0x000498, "Member 'UShopMenuDetailsImagineInner_C::EquipPosArray' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, ParamArray) == 0x0004A8, "Member 'UShopMenuDetailsImagineInner_C::ParamArray' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, ParamTextBlockArray) == 0x0004B8, "Member 'UShopMenuDetailsImagineInner_C::ParamTextBlockArray' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, PosIconArray) == 0x0004C8, "Member 'UShopMenuDetailsImagineInner_C::PosIconArray' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, MasterImagine) == 0x0004D8, "Member 'UShopMenuDetailsImagineInner_C::MasterImagine' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, UniqueId) == 0x000588, "Member 'UShopMenuDetailsImagineInner_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, OnClickShowOriginal) == 0x000598, "Member 'UShopMenuDetailsImagineInner_C::OnClickShowOriginal' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, RecipeId) == 0x0005A8, "Member 'UShopMenuDetailsImagineInner_C::RecipeId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, PerkId) == 0x0005AC, "Member 'UShopMenuDetailsImagineInner_C::PerkId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsImagineInner_C, LotteryGroupsId) == 0x0005B0, "Member 'UShopMenuDetailsImagineInner_C::LotteryGroupsId' has a wrong offset!");

}

