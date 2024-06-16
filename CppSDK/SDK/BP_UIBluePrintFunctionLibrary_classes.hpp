#pragma once

 

// Package: BP_UIBluePrintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "CharaParts_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UIBluePrintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static int32 GetPlayerMaxHp(class UObject* __WorldContext);
	static int32 GetPlayerCurrentHp(class UObject* __WorldContext);
	static int32 GetPlayerMaxMp(class UObject* __WorldContext);
	static int32 GetPlayerCurrentMp(class UObject* __WorldContext);
	static int32 GetPlayerMaxStamina(class UObject* __WorldContext);
	static int32 GetPlayerCurrentStamina(class UObject* __WorldContext);
	static void Create_Quest_Reward_Icon(const struct FRewardInfo& InRewardInfo, bool bInSelectRewardSelectable, bool bEnableHiddenReward, class UObject* __WorldContext, class UUserWidget** OutWidget);
	static void GetTeamColor(int32 TeamNumber, class UObject* __WorldContext, struct FLinearColor* Color);
	static void GetHostilityColor(ESBHostility Hostility, class UObject* __WorldContext, struct FLinearColor* Color);
	static void GetItemIconTexture(int32 InItemID, EItemType InItemType, ESBCharacterGender InGender, bool LargeIcon, bool bUnidentified, EItemCategory ItemCategory, class FName UnidentifiedIconName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture);
	static void GetRewardItemIconTexture(int32 InItemID, ESBRewardItemType InItemType, ESBCharacterGender InGender, bool LargeIcon, bool bUnidentified, EItemCategory ItemCategory, class FName UnidentifiedIconName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture);
	static void GetEmotionIcon(class FName IconName, class UObject* __WorldContext, class UTexture2D** IconTexture);
	static void GetClassTypeIcon(ESBClassType InClassType, class UObject* __WorldContext, class UTexture2D** OutIconImage);
	static void GetActivityCategoryIcon(ESBActivityCategory InActivityCategory, class UObject* __WorldContext, class UTexture2D** Texture);
	static void Find_Map_Spawn_Location_for_Item_Detail_Capture(const class FString& InMapName, class UObject* __WorldContext, struct FTransform* OutTransform);
	static void GetAttackParamUIColor(class UObject* __WorldContext, struct FLinearColor* OutColor);
	static void ShowPlaceGuide(class FName LocationId, int32 Priority, class UObject* __WorldContext, bool* bResult);
	static void HidePlaceGuide(class UObject* __WorldContext);
	static void CloseTextWindowDemo(class UObject* __WorldContext);
	static void GetTextWindowDemo(class UObject* __WorldContext, class USBTextWindowBase** TextWindowDemo);
	static void ShowPlaceGuideDemo(class FName InLocationName, class UObject* __WorldContext);
	static void HidePlaceGuideDemo(class UObject* __WorldContext);
	static void GetPlayerPotisionName(bool Inactive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, class UObject* __WorldContext, bool* IsActiveMap, class FText* PositionName);
	static void CreateDetailwithSummary(const struct FPlayerProfileMenuDetailData& InDeteailData, class UObject* __WorldContext, struct FPlayerProfileSummaryData* RetSummary);
	static void GetImagineArtsTypeName(const class FName InImagineArtsTypeNameID, class UObject* __WorldContext, class FString* OutTypeName);
	static void GetPlayerGender(class UObject* __WorldContext, ESBCharacterGender* OutGender);
	static void GetAdventurerComponent(class UObject* __WorldContext, class USBPlayerAdventurerComponent** PlayerAdventurerComponent);
	static TSoftObjectPtr<class UTexture2D> GetImagineIconTexture(int32 ID, bool IsLarge, class UObject* __WorldContext);
	static void GetTokenIconTexture(int32 TokenID, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Texture);
	static void GetTokenIconTextureL(int32 TokenID, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Texture);
	static void CalculateDiscountValue(int32 InValue, float InDiscountRate, class UObject* __WorldContext, int32* OutDiscountValue);
	static void GetLiquidMemoryFillingColor(int32 InLiquidMemoryId, class UObject* __WorldContext, struct FLinearColor* OutFillingColor);
	static void ChangeFontSize(class UTextBlock* InTextBlock, int32 Infontsize, class UObject* __WorldContext);
	static void GetViewPortCalcOffset(class UObject* __WorldContext, struct FVector2D* Position);
	static void GetProtectorCategoryTextId(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, int32* OutTextId);
	static TSoftObjectPtr<class UTexture2D> GetImagineFullTexture(const int32 InId, class UObject* __WorldContext);
	static void GetWeaponItemDataByUniqueId(const class FString& InUniqueId, class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutIsValid, struct FSBWeaponItemData* OutWeaponItemData);
	static void GetWeaponStickerInfoByItemId(int32 InItemID, class UObject* __WorldContext, bool* OutIsWeaponSticker, struct FAppearanceWeaponSticker* OutWeaponStickerInfo);
	static void GetWeaponStickerRemoveItemInfoByItemId(int32 InItemID, class UObject* __WorldContext, bool* OutIsWeaponStickerRemoveItem, struct FAppearanceWeaponSticker* OutWeaponStickerRemoveItemInfo);
	static void GetWeaponStickerRemoveItemAmount(class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutHaveWeaponStickerRemoveItem, int32* OutItemAmount);
	static void GetWeaponStickerRemoveItemInfo(class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutHaveWeaponStickerRemoveItem, struct FOwnItemInfo* OutOwnItemInfo);
	static void GetCharaPartsLocationFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation);
	static void GetCharaPartsDBFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, class UDataTable** OutCharaPartsDB);
	static void ShowExpiredItemNoticeSystemMessage(bool InIsExpiredWeaponStickerUsedOnEquippedWeapon, int32 InExpiredWeaponStickerUsedWeaponId, bool InIsExpiredEquipmentIncluded, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, class UObject* __WorldContext, bool* OutIsMessageShowed);
	static void SetCharaCostumePartsToNakedByDeletedCostumeData(class USBCharaCreateComponent* InCharaCreateComponent, TArray<struct FSBDeletedCostumeData>& InDeletedCostumeDatas, class UObject* __WorldContext, bool* OutIsCharaPartsSettedToNaked);
	static void GetPassiveImagineEmptyIconTexture(ESBPlayerPassiveImagineSlotType InSlotType, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture);
	static void GetElementNameFromAttribute(ESBAttribute InAttribute, class UObject* __WorldContext, class FString* OutElementName);
	static void GetImagineArtsName(const class FName InImagineArtsNameId, class UObject* __WorldContext, class FString* OutArtsName);
	static void CheckWeaponDecay(const class FString& InWeaponUniqueId, TArray<struct FSBDecayedWeaponData>& InDecayedWeaponDatas, class UObject* __WorldContext, bool* OutIsWeaponDecayed);
	static void GetEquipmentStatusDiffRequestRetCode(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, class UObject* __WorldContext, int32* OutRetCode);
	static void GetWeaponClassTypeByUniqueId(const class FString& InWeaponUniqueId, class USBOwnItemListContainer* InEquipmentBag, class USBOwnItemListContainer* InCharacterStorage, class UObject* __WorldContext, bool* OutIsValid, ESBClassType* OutClassType);
	static void SetImageColorMulti(const struct FLinearColor& Color, TArray<class UImage*>& Images, class UObject* __WorldContext);
	static void SetTextColorMulti(const struct FLinearColor& Color, TArray<class UTextBlock*>& TextList, class UObject* __WorldContext);
	static class FText GetTokenUseText(const class FName TextId, int32 TokenID, int32 UseNum, class UObject* __WorldContext);
	static class FText GetTokenUseText2(const class FName TextId, int32 Token1ID, int32 Token1Cost, int32 Token2ID, int32 Token2Cost, class UObject* __WorldContext);
	static class FText GetTokenUseText_Base(const class FName TextId, int32 TokenID, int32 HaveNum, int32 UseNum, class UObject* __WorldContext);
	static void BlancToSpace(const class FText& InText, class UObject* __WorldContext, class FText* Text);
	static void GetRealGoodsIcon(class FName ID, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Texture);
	static void GetRealGoodsThumbnail(class FName ID, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Texture);

	static void GetPlayerClassType(class UObject* __WorldContext, ESBClassType* ClassType);
	static void Get_Gasha_Demo_Spawn_Transform(class UObject* __WorldContext, struct FTransform* OutTransform);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIBluePrintFunctionLibrary_C">();
	}
	static class UBP_UIBluePrintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIBluePrintFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_UIBluePrintFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_UIBluePrintFunctionLibrary_C");
static_assert(sizeof(UBP_UIBluePrintFunctionLibrary_C) == 0x000028, "Wrong size on UBP_UIBluePrintFunctionLibrary_C");

}

