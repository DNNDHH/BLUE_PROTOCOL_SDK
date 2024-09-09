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
	 * WidgetBlueprintGeneratedClass CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UCommonIconToolTipContent_Item_C : public UUserWidget
	{
	public:
		class UImage*                                              BG;                                                      // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LabelName;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LabelType;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_StackB_M_C*                                     WBP_StackB_M;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetVisibleStackB(bool Visible);
		void SetNameAndType(ESBRewardItemType Type, int32_t ID, int32_t Amount, int32_t AmountMin);
		void SetCostume(int32_t CostumeId);
		void SetWeapon(int32_t WeaponID, const class FString& InUniqueId, int32_t InStorageNumber);
		void SetMountImagine(int32_t InImagineItemId, const class FString& InUniqueId, int32_t InStorageNumber);
		void SetImagine(int32_t InImagineItemId, const class FString& InUniqueId, int32_t InStorageNumber);
		void SetItem(int32_t InItemIndex, bool bUnidentified);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
