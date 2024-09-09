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
	 * WidgetBlueprintGeneratedClass CommonIconSimple.CommonIconSimple_C
	 * Size -> 0x0072 (FullSize[0x02EA] - InheritedSize[0x0278])
	 */
	class UCommonIconSimple_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_Icon;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIconToolTip_C*                                CachedToolTipWidget;                                     // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGrayOut;                                               // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B52D[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              WaitLoadTexture[0x28];                                   // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              NowLoadTexture[0x28];                                    // 0x02C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bStampMode;                                              // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bForceHideAmount2;                                       // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetUnidentifiedIcon();
		void SetItemBoxContent(const struct FSBItemBoxContentParam& Data);
		void SetProductData(class UBP_SBProductItemData_C* Target, bool* bValid);
		void SetMasterReward(const struct FSBMasterReward& Data);
		void SetRewardIcon(ESBRewardItemType InRewardType, int32_t InId, int32_t InAmount, int32_t InAmountMin);
		void GetRewardItemIcon(ESBRewardItemType RewardItemType);
		void SetSkyCoin(int32_t Amount);
		void ItemTypeToToolTipType(EItemType InItemType, EToolTipType* ToolTipType);
		void SetClassExp(int32_t Exp);
		void SetGrayOut(bool IsGrayOut);
		void SetEmptyStamp();
		void SetBrokenData();
		void SetBP(int32_t InAmount);
		void SetEmotion(const class FName& ID);
		void SetMoney(int32_t InAmount);
		void OnLoaded_C6EEEA144239A2CEAA1AF3A893BE3159(class UObject* Loaded);
		void SetIconStamp(const class FString& StampId);
		void SetIconMountImagine(int32_t InIndex, const class FString& InUniqueId);
		void IconLoadRequest();
		void IconLoadStart();
		void IconLoadRequestCheckStart();
		void SetIconWeapon(int32_t InItemIndex, bool IsDetailsMode, const class FString& InItemUniqueId, int32_t InStorageNumber);
		void SetIconBasic(EItemType Selection, int32_t InItemIndex);
		void SetIconCostume(int32_t InItemIndex, bool bDisplayLockIcon);
		void SetRewardCategory(ESBRewardItemType RewardItemType);
		void SetIconImagine(int32_t InImagineItemId, const class FString& UniqueId, int32_t StorageNumber);
		void SetIconStampCategory(int32_t CategoryId);
		void SetIconToken(int32_t ID, int32_t Amount);
		void SetIconRecipe(ESBRewardItemType Type, int32_t ID);
		void SetIconAchivement(int32_t ID);
		void SetIconItem(int32_t InItemIndex, int32_t InItemAmount, bool bDisplayLockIcon, bool IsUnidentified);
		void SetIconLiquidMemory(int32_t ID);
		void SetIconStampWithToolTip(int32_t StampId);
		void SetIconRecipeSet(int32_t ID);
		void ExecuteUbergraph_CommonIconSimple(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
