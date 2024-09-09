#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass QuestRewardIcon.QuestRewardIcon_C
	 * Size -> 0x0114 (FullSize[0x038C] - InheritedSize[0x0278])
	 */
	class UQuestRewardIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimTeamBonus;                                           // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BG;                                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasTeamBonus;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FloorNumber;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UIconLuminousImage_C*                                FrameLuminous;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIcon_C*                                       Icon;                                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconCheck;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UIcon_TacticalAbilityLearning_C*                     IconTacticalAbility;                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageFlag;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 nF;                                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TeamBonusIcon;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextTeamBonusPercentValue;                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WSIcon;                                                  // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_ProductDetailMenu_C*                            DetailWindow;                                            // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              UniqueId;                                                // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FSBMasterReward                                     MasterReward;                                            // 0x0300(0x0014) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		ESBRewardItemType                                          RewardType;                                              // 0x0314(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HNCR[0x3];                                   // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemId;                                                  // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Amount;                                                  // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RewardId;                                                // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    FloorNum;                                                // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnToggleCheck;                                           // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsChoiceReward;                                          // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       IsCheckable;                                             // 0x0339(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bIsClickToShowDetail;                                    // 0x033A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       ShowFlag;                                                // 0x033B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_91UX[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClick;                                                 // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsCheck;                                                 // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EMK4[0x3];                                   // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        AmountColorWhite;                                        // 0x0354(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AmountColorYellow;                                       // 0x0364(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AmountColorOrange;                                       // 0x0374(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsForceHideAmount;                                      // 0x0384(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bBonus;                                                  // 0x0385(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O5RG[0x2];                                   // 0x0386(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RewardLotId;                                             // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetPerkPickId(int32_t LotId);
		void SetOrnament(int32_t InIndex, int32_t InAmount);
		void StopAnimTeamBonus();
		void PlayAnimTeamBonus();
		void DeleteDetail();
		void CreateDetail();
		void SetTacticalAbility(int32_t SkillId, int32_t SkillLV, bool bIsClickToShowDetail);
		void isDetailWindow(bool* Result);
		void SetUnidentifiedIcon();
		void SetUnknown();
		void SetLiquidMemory(int32_t InIndex, int32_t InAmount);
		void SetAchivement(int32_t InIdex, int32_t InAmount);
		void SetRecipeSet(int32_t InIdex, int32_t InAmount);
		void SetRecipe(ESBRewardItemType InType, int32_t InIndex, int32_t InAmount);
		void GetAmountColorOrange(struct FLinearColor* Color);
		void GetAmountColorYellow(struct FLinearColor* Color);
		void GetAmountColorWhite(struct FLinearColor* Color);
		void SetAmountColorBonus(bool IsBonus);
		void GetMasterReward(struct FSBMasterReward* MasterReward);
		void GetRewardId(int32_t* RewardId);
		void SetRewardMasterOnly(struct FSBMasterReward* InMasterReward, bool bUseRewardLottery);
		void SetReceivedStyle(bool IsReceived);
		void SetClickToShowDetail(bool bIsClickToShowDetail);
		void SetIconType(bool IsTacticalAbility);
		void SetStamp(int32_t InIndex, int32_t InAmount);
		void SetItemSimpleAmount(int32_t InIndex, int32_t InAmount, bool bIsUnIdentified);
		void SetItem(int32_t ItemIndex, int32_t Amount, bool IsUnidentified, int32_t AmountMin, int32_t AmountMax);
		void SetWeaponDetails(int32_t Index, int32_t InAmount, const class FString& InItemUniqueId, int32_t InStorageNumber, const struct FSBWeaponItemData& InWeaponData);
		void SetWeapon(int32_t Index, int32_t Amount, bool bIsAlwaysCategoryIcon);
		void SetCostume(int32_t ItemIndex, int32_t Amount);
		void SetMountImagine(int32_t Index, int32_t Amount);
		void SetImagine(int32_t Index, int32_t Amount, bool bIsAlwaysCategoryIcon);
		void SetSkyCoin(int32_t Amount);
		void SetGC(int32_t Amount);
		void SetCheck(bool bInCheck);
		void SetAlertIconType(bool IsYellow);
		void SetAlertIconVisible(bool IsVisible);
		void SetAmountColorType(const class FString& ColorName);
		void SetAmountColor(const struct FLinearColor& InColor);
		void SetAmountVisibility(bool InIconAmountVisibility, bool UnderIconAmountVisibility);
		void SetFlagVisible(bool Index);
		void SetFloorNumberVisible(bool IsVisible);
		void SetBGVisible(bool IsVisible);
		void SetTeamBonus(int32_t InTeamBonusPercent);
		void SetBonus(bool bBonus);
		void SetLuminous(bool InIsDraw);
		void SetOption(bool IsLuminous, bool IsBonus, int32_t InTeamBonusPercent);
		void Setup();
		void SetMoney(int32_t Num);
		void SetClassExp(int32_t Exp);
		void SetRewardIcon(class UCommonIcon_C* self2, ESBRewardItemType InRewardType, int32_t InId, int32_t InAmount, bool bUseRewardLottery, int32_t AmountRangeMin, int32_t AmountRangeMax);
		void SetupIcon(ESBRewardItemType RewardType, int32_t ID, int32_t Value, const class FString& UniqueId, bool IsUnidentified, bool IsUseRewardLottery, int32_t AmountMin, int32_t AmountMax);
		void SetRewardMaster(const struct FSBMasterReward& InMasterReward, bool IsUnidentified, bool OverwriteAmount, int32_t NewAmount, int32_t AmountMin, int32_t AmountMax, bool IsTreasure);
		void CustomEvent(class UUMG_ProductDetailMenu_C* Sender);
		void BindDetail(class UUMG_ProductDetailMenu_C* DetailWidget);
		void UnbindDetail(class UUMG_ProductDetailMenu_C* DetailWidget);
		void Construct();
		void BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void Destruct();
		void ExecuteUbergraph_QuestRewardIcon(int32_t EntryPoint);
		void OnClick__DelegateSignature(class UQuestRewardIcon_C* Sender);
		void OnToggleCheck__DelegateSignature(bool IsCheck, class UQuestRewardIcon_C* Widget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
