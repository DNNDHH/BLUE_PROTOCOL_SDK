#pragma once

 

// Package: QuestRewardIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestRewardIcon.QuestRewardIcon_C
// 0x0110 (0x0388 - 0x0278)
class UQuestRewardIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimTeamBonus;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasTeamBonus;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FloorNumber;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconLuminousImage_C*                   FrameLuminous;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          Icon;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconCheck;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_TacticalAbilityLearning_C*        IconTacticalAbility;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageFlag;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    NF;                                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TeamBonusIcon;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTeamBonusPercentValue;                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WSIcon;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               DetailWindow;                                      // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 UniqueId;                                          // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSBMasterReward                        MasterReward;                                      // 0x0300(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	ESBRewardItemType                             RewardType;                                        // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E23[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RewardId;                                          // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         FloorNum;                                          // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnToggleCheck;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsChoiceReward;                                    // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsCheckable;                                       // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsClickToShowDetail;                              // 0x033A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          ShowFlag;                                          // 0x033B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6E24[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsCheck;                                           // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E25[0x3];                                     // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           AmountColorWhite;                                  // 0x0354(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           AmountColorYellow;                                 // 0x0364(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           AmountColorOrange;                                 // 0x0374(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsForceHideAmount;                                // 0x0384(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBonus;                                            // 0x0385(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnToggleCheck__DelegateSignature(bool Param_IsCheck, class UQuestRewardIcon_C* Widget);
	void OnClick__DelegateSignature(class UQuestRewardIcon_C* Sender);
	void ExecuteUbergraph_QuestRewardIcon(int32 EntryPoint);
	void Destruct();
	void BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void Construct();
	void UnbindDetail(class UUMG_ProductDetailMenu_C* DetailWidget);
	void BindDetail(class UUMG_ProductDetailMenu_C* DetailWidget);
	void CustomEvent(class UUMG_ProductDetailMenu_C* Sender);
	void SetRewardMaster(const struct FSBMasterReward& InMasterReward, bool IsUnidentified, bool OverwriteAmount, int32 NewAmount, int32 AmountMin, int32 AmountMax);
	void SetupIcon(ESBRewardItemType Param_RewardType, int32 ID, int32 Value, const class FString& Param_UniqueId, bool IsUnidentified, bool IsUseRewardLottery, int32 AmountMin, int32 AmountMax);
	void SetRewardIcon(class UCommonIcon_C* Self2, ESBRewardItemType InRewardType, int32 InId, int32 InAmount, bool bUseRewardLottery, int32 AmountRangeMin, int32 AmountRangeMax);
	void SetClassExp(int32 Exp);
	void SetMoney(int32 Num);
	void Setup();
	void SetOption(bool IsLuminous, bool IsBonus, int32 InTeamBonusPercent);
	void SetLuminous(bool InIsDraw);
	void SetBonus(bool Param_bBonus);
	void SetTeamBonus(int32 InTeamBonusPercent);
	void SetBGVisible(bool Param_IsVisible);
	void SetFloorNumberVisible(bool Param_IsVisible);
	void SetFlagVisible(bool Param_Index);
	void SetAmountVisibility(bool InIconAmountVisibility, bool UnderIconAmountVisibility);
	void SetAmountColor(const struct FLinearColor& InColor);
	void SetAmountColorType(const class FString& ColorName);
	void SetAlertIconVisible(bool Param_IsVisible);
	void SetAlertIconType(bool IsYellow);
	void SetCheck(bool bInCheck);
	void SetGC(int32 Param_Amount);
	void SetSkyCoin(int32 Param_Amount);
	void SetImagine(int32 Param_Index, int32 Param_Amount, bool bIsAlwaysCategoryIcon);
	void SetMountImagine(int32 Param_Index, int32 Param_Amount);
	void SetCostume(int32 ItemIndex, int32 Param_Amount);
	void SetWeapon(int32 Param_Index, int32 Param_Amount, bool bIsAlwaysCategoryIcon);
	void SetWeaponDetails(int32 Param_Index, int32 InAmount, const class FString& InItemUniqueId, int32 InStorageNumber, const struct FSBWeaponItemData& InWeaponData);
	void SetItem(int32 ItemIndex, int32 Param_Amount, bool IsUnidentified, int32 AmountMin, int32 AmountMax);
	void SetItemSimpleAmount(int32 InIndex, int32 InAmount, bool bIsUnIdentified);
	void SetStamp(int32 InIndex, int32 InAmount);
	void SetIconType(bool IsTacticalAbility);
	void SetClickToShowDetail(bool Param_bIsClickToShowDetail);
	void SetReceivedStyle(bool IsReceived);
	void SetRewardMasterOnly(struct FSBMasterReward& InMasterReward, bool bUseRewardLottery);
	void GetRewardId(int32* Param_RewardId);
	void GetMasterReward(struct FSBMasterReward* Param_MasterReward);
	void SetAmountColorBonus(bool IsBonus);
	void SetRecipe(ESBRewardItemType InType, int32 InIndex, int32 InAmount);
	void SetRecipeSet(int32 InIdex, int32 InAmount);
	void SetAchivement(int32 InIdex, int32 InAmount);
	void SetLiquidMemory(int32 InIndex, int32 InAmount);
	void SetUnknown();
	void SetUnidentifiedIcon();
	void SetTacticalAbility(int32 SkillId, int32 SkillLV, bool Param_bIsClickToShowDetail);
	void CreateDetail();
	void DeleteDetail();
	void PlayAnimTeamBonus();
	void StopAnimTeamBonus();

	void GetAmountColorWhite(struct FLinearColor* Color) const;
	void GetAmountColorYellow(struct FLinearColor* Color) const;
	void GetAmountColorOrange(struct FLinearColor* Color) const;
	void IsDetailWindow(bool* Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestRewardIcon_C">();
	}
	static class UQuestRewardIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestRewardIcon_C>();
	}
};
static_assert(alignof(UQuestRewardIcon_C) == 0x000008, "Wrong alignment on UQuestRewardIcon_C");
static_assert(sizeof(UQuestRewardIcon_C) == 0x000388, "Wrong size on UQuestRewardIcon_C");
static_assert(offsetof(UQuestRewardIcon_C, UberGraphFrame) == 0x000278, "Member 'UQuestRewardIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, AnimTeamBonus) == 0x000280, "Member 'UQuestRewardIcon_C::AnimTeamBonus' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, BG) == 0x000288, "Member 'UQuestRewardIcon_C::BG' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, CanvasTeamBonus) == 0x000290, "Member 'UQuestRewardIcon_C::CanvasTeamBonus' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, FloorNumber) == 0x000298, "Member 'UQuestRewardIcon_C::FloorNumber' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, FrameLuminous) == 0x0002A0, "Member 'UQuestRewardIcon_C::FrameLuminous' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, Icon) == 0x0002A8, "Member 'UQuestRewardIcon_C::Icon' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, IconCheck) == 0x0002B0, "Member 'UQuestRewardIcon_C::IconCheck' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, IconTacticalAbility) == 0x0002B8, "Member 'UQuestRewardIcon_C::IconTacticalAbility' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, ImageFlag) == 0x0002C0, "Member 'UQuestRewardIcon_C::ImageFlag' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, NF) == 0x0002C8, "Member 'UQuestRewardIcon_C::NF' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, TeamBonusIcon) == 0x0002D0, "Member 'UQuestRewardIcon_C::TeamBonusIcon' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, TextTeamBonusPercentValue) == 0x0002D8, "Member 'UQuestRewardIcon_C::TextTeamBonusPercentValue' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, WSIcon) == 0x0002E0, "Member 'UQuestRewardIcon_C::WSIcon' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, DetailWindow) == 0x0002E8, "Member 'UQuestRewardIcon_C::DetailWindow' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, UniqueId) == 0x0002F0, "Member 'UQuestRewardIcon_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, MasterReward) == 0x000300, "Member 'UQuestRewardIcon_C::MasterReward' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, RewardType) == 0x000314, "Member 'UQuestRewardIcon_C::RewardType' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, ItemId) == 0x000318, "Member 'UQuestRewardIcon_C::ItemId' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, Amount) == 0x00031C, "Member 'UQuestRewardIcon_C::Amount' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, RewardId) == 0x000320, "Member 'UQuestRewardIcon_C::RewardId' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, FloorNum) == 0x000324, "Member 'UQuestRewardIcon_C::FloorNum' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, OnToggleCheck) == 0x000328, "Member 'UQuestRewardIcon_C::OnToggleCheck' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, IsChoiceReward) == 0x000338, "Member 'UQuestRewardIcon_C::IsChoiceReward' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, IsCheckable) == 0x000339, "Member 'UQuestRewardIcon_C::IsCheckable' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, bIsClickToShowDetail) == 0x00033A, "Member 'UQuestRewardIcon_C::bIsClickToShowDetail' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, ShowFlag) == 0x00033B, "Member 'UQuestRewardIcon_C::ShowFlag' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, OnClick) == 0x000340, "Member 'UQuestRewardIcon_C::OnClick' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, IsCheck) == 0x000350, "Member 'UQuestRewardIcon_C::IsCheck' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, AmountColorWhite) == 0x000354, "Member 'UQuestRewardIcon_C::AmountColorWhite' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, AmountColorYellow) == 0x000364, "Member 'UQuestRewardIcon_C::AmountColorYellow' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, AmountColorOrange) == 0x000374, "Member 'UQuestRewardIcon_C::AmountColorOrange' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, bIsForceHideAmount) == 0x000384, "Member 'UQuestRewardIcon_C::bIsForceHideAmount' has a wrong offset!");
static_assert(offsetof(UQuestRewardIcon_C, bBonus) == 0x000385, "Member 'UQuestRewardIcon_C::bBonus' has a wrong offset!");

}

