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
	 * BlueprintGeneratedClass BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_UIBluePrintFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsVisibleParentsAlsoSee(class UWidget* Widget, class UObject* __WorldContext, bool* Visible);
		void GetRealGoodsThumbnail(const class FName& ID, class UObject* __WorldContext);
		void GetRealGoodsIcon(const class FName& ID, class UObject* __WorldContext);
		void BlancToSpace(const class FText& InText, class UObject* __WorldContext, class FText* Text);
		class FText GetTokenUseText_Base(const class FName& TextId, int32_t TokenID, int32_t HaveNum, int32_t UseNum, class UObject* __WorldContext);
		class FText GetTokenUseText2(const class FName& TextId, int32_t Token1ID, int32_t Token1Cost, int32_t Token2ID, int32_t Token2Cost, class UObject* __WorldContext);
		class FText GetTokenUseText(const class FName& TextId, int32_t TokenID, int32_t UseNum, class UObject* __WorldContext);
		void SetTextColorMulti(const struct FLinearColor& Color, TArray<class UTextBlock*>* TextList, class UObject* __WorldContext);
		void SetImageColorMulti(const struct FLinearColor& Color, TArray<class UImage*>* Images, class UObject* __WorldContext);
		void GetWeaponClassTypeByUniqueId(const class FString& InWeaponUniqueId, class USBOwnItemListContainer* InEquipmentBag, class USBOwnItemListContainer* InCharacterStorage, class UObject* __WorldContext, bool* OutIsValid, ESBClassType* OutClassType);
		void GetEquipmentStatusDiffRequestRetCode(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, class UObject* __WorldContext, int32_t* OutRetCode);
		void CheckWeaponDecay(const class FString& InWeaponUniqueId, TArray<struct FSBDecayedWeaponData>* InDecayedWeaponDatas, class UObject* __WorldContext, bool* OutIsWeaponDecayed);
		void GetImagineArtsName(const class FName& InImagineArtsNameId, class UObject* __WorldContext, class FString* OutArtsName);
		void GetElementNameFromAttribute(ESBAttribute InAttribute, class UObject* __WorldContext, class FString* OutElementName);
		void GetPassiveImagineEmptyIconTexture(ESBPlayerPassiveImagineSlotType InSlotType, class UObject* __WorldContext);
		void SetCharaCostumePartsToNakedByDeletedCostumeData(class USBCharaCreateComponent* InCharaCreateComponent, TArray<struct FSBDeletedCostumeData>* InDeletedCostumeDatas, class UObject* __WorldContext, bool* OutIsCharaPartsSettedToNaked);
		void ShowExpiredItemNoticeSystemMessage(bool InIsExpiredWeaponStickerUsedOnEquippedWeapon, int32_t InExpiredWeaponStickerUsedWeaponId, bool InIsExpiredEquipmentIncluded, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, class UObject* __WorldContext, bool* OutIsMessageShowed);
		void GetCharaPartsDBFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, class UDataTable** OutCharaPartsDB);
		void GetCharaPartsLocationFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation);
		void GetWeaponStickerRemoveItemInfo(class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutHaveWeaponStickerRemoveItem, struct FOwnItemInfo* OutOwnItemInfo);
		void GetWeaponStickerRemoveItemAmount(class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutHaveWeaponStickerRemoveItem, int32_t* OutItemAmount);
		void GetWeaponStickerRemoveItemInfoByItemId(int32_t InItemID, class UObject* __WorldContext, bool* OutIsWeaponStickerRemoveItem, struct FAppearanceWeaponSticker* OutWeaponStickerRemoveItemInfo);
		void GetWeaponStickerInfoByItemId(int32_t InItemID, class UObject* __WorldContext, bool* OutIsWeaponSticker, struct FAppearanceWeaponSticker* OutWeaponStickerInfo);
		void GetWeaponItemDataByUniqueId(const class FString& InUniqueId, class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutIsValid, struct FSBWeaponItemData* OutWeaponItemData);
		void GetGashaDemoSpawnTransform(class UObject* __WorldContext, struct FTransform* OutTransform);
		void GetImagineFullTexture(int32_t InId, class UObject* __WorldContext);
		void GetProtectorCategoryTextId(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, int32_t* OutTextID);
		void GetViewPortCalcOffset(class UObject* __WorldContext, struct FVector2D* Position);
		void ChangeFontSize(class UTextBlock* InTextBlock, int32_t Infontsize, class UObject* __WorldContext);
		void GetLiquidMemoryFillingColor(int32_t InLiquidMemoryId, class UObject* __WorldContext, struct FLinearColor* OutFillingColor);
		void CalculateDiscountValue(int32_t InValue, float InDiscountRate, class UObject* __WorldContext, int32_t* OutDiscountValue);
		void GetTokenIconTextureL(int32_t TokenID, class UObject* __WorldContext);
		void GetTokenIconTexture(int32_t TokenID, class UObject* __WorldContext);
		void GetImagineIconTexture(int32_t ID, bool isLarge, class UObject* __WorldContext);
		void GetAdventurerComponent(class UObject* __WorldContext, class USBPlayerAdventurerComponent** PlayerAdventurerComponent);
		void GetPlayerGender(class UObject* __WorldContext, ESBCharacterGender* OutGender);
		void GetImagineArtsTypeName(const class FName& InImagineArtsTypeNameID, class UObject* __WorldContext, class FString* OutTypeName);
		void CreateDetailwithSummary(const struct FPlayerProfileMenuDetailData& InDeteailData, class UObject* __WorldContext, struct FPlayerProfileSummaryData* retSummary);
		void GetPlayerPotisionName(bool Inactive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, class UObject* __WorldContext, bool* IsActiveMap, class FText* PositionName);
		void HidePlaceGuideDemo(class UObject* __WorldContext);
		void ShowPlaceGuideDemo(const class FName& InLocationName, class UObject* __WorldContext);
		void GetTextWindowDemo(class UObject* __WorldContext, class USBTextWindowBase** TextWindowDemo);
		void CloseTextWindowDemo(class UObject* __WorldContext);
		void HidePlaceGuide(class UObject* __WorldContext);
		void ShowPlaceGuide(const class FName& LocationId, int32_t Priority, class UObject* __WorldContext, bool* bResult);
		void GetAttackParamUIColor(class UObject* __WorldContext, struct FLinearColor* OutColor);
		void FindMapSpawnLocationforItemDetailCapture(const class FString& InMapName, class UObject* __WorldContext, struct FTransform* OutTransform);
		void GetActivityCategoryIcon(ESBActivityCategory InActivityCategory, class UObject* __WorldContext, class UTexture2D** Texture);
		void GetClassTypeIcon(ESBClassType InClassType, class UObject* __WorldContext, class UTexture2D** OutIconImage);
		void GetPlayerClassType(class UObject* __WorldContext, ESBClassType* ClassType);
		void GetEmotionIcon(const class FName& IconName, class UObject* __WorldContext, class UTexture2D** IconTexture);
		void GetRewardItemIconTexture(int32_t InItemID, ESBRewardItemType InItemType, ESBCharacterGender InGender, bool LargeIcon, bool bUnidentified, EItemCategory ItemCategory, const class FName& UnidentifiedIconName, class UObject* __WorldContext);
		void GetItemIconTexture(int32_t InItemID, EItemType InItemType, ESBCharacterGender InGender, bool LargeIcon, bool bUnidentified, EItemCategory ItemCategory, const class FName& UnidentifiedIconName, class UObject* __WorldContext);
		void GetHostilityColor(ESBHostility Hostility, class UObject* __WorldContext, struct FLinearColor* Color);
		void GetTeamColor(int32_t TeamNumber, class UObject* __WorldContext, struct FLinearColor* Color);
		void CreateQuestRewardIcon(const struct FRewardInfo& InRewardInfo, bool bInSelectRewardSelectable, bool bEnableHiddenReward, class UObject* __WorldContext, class UUserWidget** OutWidget);
		int32_t GetPlayerCurrentStamina(class UObject* __WorldContext);
		int32_t GetPlayerMaxStamina(class UObject* __WorldContext);
		int32_t GetPlayerCurrentMp(class UObject* __WorldContext);
		int32_t GetPlayerMaxMp(class UObject* __WorldContext);
		int32_t GetPlayerCurrentHp(class UObject* __WorldContext);
		int32_t GetPlayerMaxHp(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
