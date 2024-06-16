#pragma once

 

// Package: CommonIcon

#include "Basic.hpp"

#include "ToolTipType_structs.hpp"
#include "Engine_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"
#include "EColorBadgeType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIcon.CommonIcon_C
// 0x0298 (0x0530 - 0x0298)
class UCommonIcon_C final : public USBCommonIconWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimEffect1;                                       // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnAlertIcon_C*                        CmnAlertIcon;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnColorBadge_C*                       ColorBadge;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPAmount2;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPIcon;                                            // 0x02C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Effect1;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_EquipmentIcon;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_NewIcon;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PresetIcon;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ShortcutRegisteredIcon;                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Unused;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_UseWeaponSkinIcon;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Amount;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Amount2;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Infinite;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Level;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LimitedTimeIcon;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PickUpEffect;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           UnusedGrp;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        WBP_StackB_S;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIconToolTip_C*                   CachedToolTipWidget;                               // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPreviewAmount2;                                   // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bTooltipEnable;                                    // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIconLoading;                                      // 0x0362(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsGrayOut;                                         // 0x0363(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsImagineSimpleTooltip;                            // 0x0364(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUnidentified;                                    // 0x0365(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsInIconBtn;                                      // 0x0366(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85BD[0x1];                                     // 0x0367(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        ToolTipInfo;                                       // 0x0368(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              WaitLoadTexture;                                   // 0x03E0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              NowLoadTexture;                                    // 0x0408(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bStampMode;                                        // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EToolTipType                                  SwapToolTipType;                                   // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bForceHideAmount2;                                 // 0x0432(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85BE[0x5];                                     // 0x0433(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              BattleImagineCategoryIconTexture;                  // 0x0438(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              InnerImagineCategoryIconTexture;                   // 0x0460(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIconSelected;                                     // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ButtonActive;                                      // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85BF[0x6];                                     // 0x04AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickRight;                                      // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressedRight;                                    // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bButtonNoHitVisible;                               // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Amount2Visibility;                                 // 0x04D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bKeepSpaceAtButtonDisable;                         // 0x04D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bForceLevelSyncOff;                                // 0x04D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85C0[0x4];                                     // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      ToolTipWeaponData;                                 // 0x04D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsToolTipWeaponData;                              // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void OnPressed__DelegateSignature(class UCommonIcon_C* Sender);
	void OnClickRight__DelegateSignature(class UCommonIcon_C* Sender);
	void OnPressedRight__DelegateSignature(class UCommonIcon_C* Sender);
	void ExecuteUbergraph_CommonIcon(int32 EntryPoint);
	void SetOrnament(int32 InItemIndex, bool bDisplayLockIcon, bool bLimitedTime);
	void SetIconAdventureBoard(int32 ID, bool bLimitedTime);
	void SetIconRealGoods(class FName ID);
	void SetIconUseLotteryGroup(int32 InLotteryGroupId, int32 InAmount, bool bAlwaysCategoryIcon, bool bLimitedTime, int32 InAmountMin, int32 InAmountMax);
	void SetIconItem(int32 InItemIndex, int32 InItemAmount, bool bDisplayLockIcon, bool Param_IsUnidentified, bool bLimitedTime, int32 InItemAmountMin, int32 InItemAmountMax);
	void SetLimitedTimeIcon(bool bLimitedTime, const class FString& EventTermId, int32 DurationMinutes);
	void BndEvt__CommonIcon_SBButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__CommonIcon_SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetIconImagine(int32 InImagineItemId, const class FString& UniqueId, int32 StorageNumber, bool bLimitedTime, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool bInForceLevelSyncOff);
	void SetIconImagineForReward(int32 InLotteryGroupId, int32 InAmount, bool bIsAlwaysCategoryIcon, bool bLimitedTime);
	void SetIconWeaponForReward(int32 InLotteryGroupId, int32 InAmount, bool bIsAlwaysCayegoryIcon, bool bLimitedTime);
	void SetIconWeapon(int32 InItemIndex, bool IsDetailsMode, const class FString& InItemUniqueId, int32 InStorageNumber, bool bLimitedTime, bool bInForceLevelSyncOff);
	void SetIconRecipeSet(int32 ID);
	void PreConstruct(bool IsDesignTime);
	void SetIconStampWithToolTip(int32 StampId);
	void SetIconPointTypeReward(ESBRewardItemType RewardType, int32 Amount);
	void SetIconLiquidMemory(int32 ID);
	void SetIconAchivement(int32 ID, bool bLimitedTime);
	void SetIconRecipe(ESBRewardItemType Type, int32 ID, bool bLimitedTime);
	void SetIconToken(int32 ID, int32 Amount, bool bLimitedTime);
	void SetIconStampCategory(const int32 CategoryId, bool bLimitedTime);
	void Set_RewardCategory(ESBRewardItemType RewardItemType);
	void WidgetAnimationEvt_AnimEffect1_K2Node_WidgetAnimationEvent_0();
	void SetIconCostume(int32 InItemIndex, bool bDisplayLockIcon, bool bLimitedTime);
	void SetIconBasic(EItemType Selection, int32 InItemIndex, bool bLimitedTime);
	void SetIconStamp(const class FString& StampId, bool bLimitedTime);
	void IconLoadRequestCheckStart();
	void IconLoadStart(TSoftObjectPtr<class UTexture2D> Param_NowLoadTexture);
	void IconLoadRequest(const TSoftObjectPtr<class UTexture2D>& TextureReference);
	void SetIconMountImagine(int32 InIndex, const class FString& InUniqueId, bool bLimitedTime, int32 StorageId);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnLoaded_C8DDBE9E482CE6A9639395A6A23184BE(class UObject* Loaded);
	void SetMoney(int32 InAmount);
	void SetEmotion(const class FString& ID, bool bLimitedTime);
	class UWidget* GetToolTipWidget_0();
	void CreateToolTipWidgetifNeeded(class UCommonIconToolTip_C** Widget);
	void SetAmount(int32 Amount, bool UseGrouping);
	void SetAmountRange(int32 AmountMin, int32 AmountMax);
	void SetAmountText(const class FText& InText);
	void SetAmountValue(bool bUseGrouping, int32 Value);
	void SetAmountVisibility(bool Param_Visibility);
	void SetAmount2Text(const class FText& InText);
	void SetAmount2Value(int32 Value, bool bUseGrouping);
	void SetAmount2Visibility(bool Param_Visibility);
	void SetAmount2VisibilityByAmount(int32 Amount, bool* bVisible);
	void SetEquipmentIconVisibility(bool Param_Visibility);
	void SetShortcutRegisteredIconVisibility(bool Param_Visibility);
	void SetGC(int32 InAmount);
	void SetBrokenData();
	void SetItemRarity(ESBRarity InRarity);
	void SetEmptyStamp();
	void SetGrayOut(bool Param_IsGrayOut);
	void SetReceivedStyle(bool bIsReceived);
	void SetLockIconVisibility(bool IsVisibility);
	void ResetPartsVisivility();
	void SetRarity(ESBRarity InRarity);
	void SetImagineRarity(ESBRarity InRarity);
	void SetClassExp(int32 Exp);
	void SetImagineSimpleTooltip(bool Param_IsImagineSimpleTooltip);
	void ItemTypeToToolTipType(EItemType InItemType, EToolTipType* ToolTipType);
	void SetSkyCoin(int32 Amount);
	void PlayAnimEffect1();
	void SetRewardTextColor(const struct FLinearColor& InColor);
	void GetRewardItemIcon(ESBRewardItemType RewardItemType, TSoftObjectPtr<class UTexture2D>* Icon);
	void Set_New_Mark(bool IsNew);
	void SetLimitedIconVisibility(bool IsVisibility);
	void Set_Reward_Icon(ESBRewardItemType InRewardType, int32 InId, int32 InAmount, int32 InAmountMinForTooltip, bool bUseRewardLottery, bool bLimitedTime, int32 AmountRangeMin, int32 AmountRangeMax);
	void SetMasterReward(const struct FSBMasterReward& Data);
	void SetColorBadgeVisibility(bool InIsVisible);
	void SetColorBadgeType(EColorBadgeType InColorBadgeType);
	void SetColorBadgeColor(const struct FLinearColor& InColor);
	void SetColorBadgeExtraColor(const struct FLinearColor& InColor1, const struct FLinearColor& InColor2);
	void SetUnusedMarkVisibility(bool InIsVisible);
	void SetProductData(class UBP_SBProductItemData_C* Target, bool* bValid);
	void SetItemBoxContent(const struct FSBItemBoxContentParam& Data);
	void SetUnidentifiedIcon();
	void SetButtonActive(bool Active, bool bNoHitVisible, bool Param_bKeepSpaceAtButtonDisable);
	void Set_Icon_Selected(bool IsSelected);
	void Set_Pressed_Sound_Id(ESystemSE InSoundId);
	void Set_Hovered_Sound_Id(ESystemSE InSoundId);
	void Set_Hovered_Color(const struct FLinearColor& Color);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetAlertIconVisible(bool Param_IsVisible);
	void SetAlertIconType(bool IsYellow);
	void SetAmount2Color(const struct FSlateColor& InColorAndOpacity);
	void SetAmount2Padding();
	void SetEquipmentPresetIconVisibility(bool EquipmentVisibility, bool PresetVisibility);
	void Set_Stack_BIcon_S(bool Visible, int32 StackNum, bool IsEffectiveDisplay);
	void ResetAmount2Padding();
	void Set_Stack_BIcon_S_One_Item(bool Visible, const struct FOwnItemInfo& Info, bool IsEffectiveDisplay);
	void SetPickup(bool bValue);
	void SetTooltipEnable(bool bEnable);
	void SetToolTipInfo(struct FST_ToolTipInfo& InToolTipInfo);
	void SetToolTipWeaponData(const struct FSBWeaponItemData& InPlayerProfileWeaponData);
	void SetStackBIconSOneItemBase(bool InIsVisible, EItemType InItemType, int32 InStackBNum, int32 InStackBMax, bool InIsEffectiveDisplay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIcon_C">();
	}
	static class UCommonIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIcon_C>();
	}
};
static_assert(alignof(UCommonIcon_C) == 0x000008, "Wrong alignment on UCommonIcon_C");
static_assert(sizeof(UCommonIcon_C) == 0x000530, "Wrong size on UCommonIcon_C");
static_assert(offsetof(UCommonIcon_C, UberGraphFrame) == 0x000298, "Member 'UCommonIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, AnimEffect1) == 0x0002A0, "Member 'UCommonIcon_C::AnimEffect1' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, CmnAlertIcon) == 0x0002A8, "Member 'UCommonIcon_C::CmnAlertIcon' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, ColorBadge) == 0x0002B0, "Member 'UCommonIcon_C::ColorBadge' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, CPAmount2) == 0x0002B8, "Member 'UCommonIcon_C::CPAmount2' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, CPIcon) == 0x0002C0, "Member 'UCommonIcon_C::CPIcon' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Effect1) == 0x0002C8, "Member 'UCommonIcon_C::Effect1' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Image_EquipmentIcon) == 0x0002D0, "Member 'UCommonIcon_C::Image_EquipmentIcon' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Image_Icon) == 0x0002D8, "Member 'UCommonIcon_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Image_LockIcon) == 0x0002E0, "Member 'UCommonIcon_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Image_NewIcon) == 0x0002E8, "Member 'UCommonIcon_C::Image_NewIcon' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Image_PresetIcon) == 0x0002F0, "Member 'UCommonIcon_C::Image_PresetIcon' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Image_ShortcutRegisteredIcon) == 0x0002F8, "Member 'UCommonIcon_C::Image_ShortcutRegisteredIcon' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Image_Unused) == 0x000300, "Member 'UCommonIcon_C::Image_Unused' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Image_UseWeaponSkinIcon) == 0x000308, "Member 'UCommonIcon_C::Image_UseWeaponSkinIcon' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Label_Amount) == 0x000310, "Member 'UCommonIcon_C::Label_Amount' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Label_Amount2) == 0x000318, "Member 'UCommonIcon_C::Label_Amount2' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Label_Infinite) == 0x000320, "Member 'UCommonIcon_C::Label_Infinite' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Label_Level) == 0x000328, "Member 'UCommonIcon_C::Label_Level' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, LimitedTimeIcon) == 0x000330, "Member 'UCommonIcon_C::LimitedTimeIcon' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, PickUpEffect) == 0x000338, "Member 'UCommonIcon_C::PickUpEffect' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, SBButton) == 0x000340, "Member 'UCommonIcon_C::SBButton' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, UnusedGrp) == 0x000348, "Member 'UCommonIcon_C::UnusedGrp' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, WBP_StackB_S) == 0x000350, "Member 'UCommonIcon_C::WBP_StackB_S' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, CachedToolTipWidget) == 0x000358, "Member 'UCommonIcon_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bPreviewAmount2) == 0x000360, "Member 'UCommonIcon_C::bPreviewAmount2' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bTooltipEnable) == 0x000361, "Member 'UCommonIcon_C::bTooltipEnable' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bIconLoading) == 0x000362, "Member 'UCommonIcon_C::bIconLoading' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, IsGrayOut) == 0x000363, "Member 'UCommonIcon_C::IsGrayOut' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, IsImagineSimpleTooltip) == 0x000364, "Member 'UCommonIcon_C::IsImagineSimpleTooltip' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, IsUnidentified) == 0x000365, "Member 'UCommonIcon_C::IsUnidentified' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bIsInIconBtn) == 0x000366, "Member 'UCommonIcon_C::bIsInIconBtn' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, ToolTipInfo) == 0x000368, "Member 'UCommonIcon_C::ToolTipInfo' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, WaitLoadTexture) == 0x0003E0, "Member 'UCommonIcon_C::WaitLoadTexture' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, NowLoadTexture) == 0x000408, "Member 'UCommonIcon_C::NowLoadTexture' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bStampMode) == 0x000430, "Member 'UCommonIcon_C::bStampMode' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, SwapToolTipType) == 0x000431, "Member 'UCommonIcon_C::SwapToolTipType' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bForceHideAmount2) == 0x000432, "Member 'UCommonIcon_C::bForceHideAmount2' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, BattleImagineCategoryIconTexture) == 0x000438, "Member 'UCommonIcon_C::BattleImagineCategoryIconTexture' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, InnerImagineCategoryIconTexture) == 0x000460, "Member 'UCommonIcon_C::InnerImagineCategoryIconTexture' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, OnClick) == 0x000488, "Member 'UCommonIcon_C::OnClick' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, OnPressed) == 0x000498, "Member 'UCommonIcon_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bIconSelected) == 0x0004A8, "Member 'UCommonIcon_C::bIconSelected' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, ButtonActive) == 0x0004A9, "Member 'UCommonIcon_C::ButtonActive' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, OnClickRight) == 0x0004B0, "Member 'UCommonIcon_C::OnClickRight' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, OnPressedRight) == 0x0004C0, "Member 'UCommonIcon_C::OnPressedRight' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bButtonNoHitVisible) == 0x0004D0, "Member 'UCommonIcon_C::bButtonNoHitVisible' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, Amount2Visibility) == 0x0004D1, "Member 'UCommonIcon_C::Amount2Visibility' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bKeepSpaceAtButtonDisable) == 0x0004D2, "Member 'UCommonIcon_C::bKeepSpaceAtButtonDisable' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bForceLevelSyncOff) == 0x0004D3, "Member 'UCommonIcon_C::bForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, ToolTipWeaponData) == 0x0004D8, "Member 'UCommonIcon_C::ToolTipWeaponData' has a wrong offset!");
static_assert(offsetof(UCommonIcon_C, bIsToolTipWeaponData) == 0x000528, "Member 'UCommonIcon_C::bIsToolTipWeaponData' has a wrong offset!");

}

