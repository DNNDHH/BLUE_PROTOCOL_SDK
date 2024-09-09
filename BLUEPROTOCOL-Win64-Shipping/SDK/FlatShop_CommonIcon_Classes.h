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
	 * WidgetBlueprintGeneratedClass FlatShop_CommonIcon.FlatShop_CommonIcon_C
	 * Size -> 0x0138 (FullSize[0x03B0] - InheritedSize[0x0278])
	 */
	class UFlatShop_CommonIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Icon_Item;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBProductData                                      ProductData;                                             // 0x0288(0x00D8) Edit, BlueprintVisible, DisableEditOnInstance
		ESBRewardItemType                                          ItemType;                                                // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U2NO[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemId;                                                  // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RowName;                                                 // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Thumbnail[0x28];                                         // 0x0370(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UDataTable*                                          DT_Icon;                                                 // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCharacterGender                                         Gender;                                                  // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_96QR[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBMasterDataManager*                                MasterDataManager;                                       // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnLoaded_E37A97DE401D23101CB622A989A36F64(class UObject* Loaded);
		void SetIcon(const struct FSBProductData& ProductData, int32_t TextureId, ESBRmShopMenuType RmShopType);
		void SwitchRewardType(ESBRewardItemType ItemType, int32_t ItemId);
		void LoadTexture_Nodata();
		void SetItems();
		void SetCostume();
		void SetReward();
		void SetEmotion();
		void SetStamps();
		void SetToken();
		void SetStampSet();
		void SetTAbility();
		void SetRealGoods();
		void SetAdvParts();
		void SetOrnament();
		void SwitchRewardTypeByProductData();
		void SetDataBySeasonPass(const class FName& RewardId, const class FName& TextureId);
		void LoadTexture();
		void ExecuteUbergraph_FlatShop_CommonIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
