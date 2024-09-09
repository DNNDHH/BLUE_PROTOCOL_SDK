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
	 * WidgetBlueprintGeneratedClass CommonIconToolTip.CommonIconToolTip_C
	 * Size -> 0x0108 (FullSize[0x0380] - InheritedSize[0x0278])
	 */
	class UCommonIconToolTip_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FST_ToolTipInfo                                     ToolTipInfo;                                             // 0x0288(0x0078) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsBasedWeaponData;                                      // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4QWS[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBWeaponItemData                                   BasedWeaponData;                                         // 0x0308(0x0078) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CreateToolTipOrnament(int32_t ID);
		void SetBasedWeaponData(const struct FSBWeaponItemData& BasedWeaponData);
		void CreateToolTipFusionItem(int32_t InItemIndex, bool bUnidentified);
		void CreateToolTipRecipeSet(const struct FST_ToolTipInfo& ToolTipInfo, bool bCheckExisting);
		void CreateToolTipCommonTypeOnly(const struct FST_ToolTipInfo& Info);
		void CreateToolTipCommonNameAndType(const struct FST_ToolTipInfo& Info);
		void CreateToolTipItemBox(const struct FST_ToolTipInfo& ToolTipInfo);
		void CreateToolTipMountImagine(int32_t InIndex, const class FString& InUniqueId, int32_t InStorageNumber);
		void CreateToolTipLiquidMemory(int32_t InLiquidMemoryId);
		void CreateToolTipBrokenData();
		void CreateToolTipImagine_PaDetails(int32_t InId, const class FString& InUniqueId, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bForceLevelSyncOff);
		void CreateToolTipImagine_AcDetails(int32_t InId, const class FString& InUniqueId, bool bInIsImageIconActive, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bForceLevelSyncOff);
		void CreateToolTipImagine(int32_t InImagineItemId, const class FString& InUniqueId, int32_t InStorageNumber);
		void CreateToolTipContributionPoint(int32_t InAmount);
		void CreateToolTipStamp(int32_t InStampId);
		void CreateToolTipEmotion(const class FName& InId, int32_t InIndex);
		void CreateToolTipMoney(int32_t InAmount, const class FText& OptionText, const class FText& InAmountText);
		void CreateToolTipCostume(int32_t InItemIndex);
		void CreateToolTipWeapon_Details(int32_t InItemIndex, const class FString& InItemUniqueId, int32_t InStorageId, bool IsEffectiveDisplay, bool InForceLevelSyncOff);
		void CreateToolTipWeapon(int32_t InItemIndex, const class FString& InUniqueId, int32_t InStorageNumber);
		void CreateToolTipItem(int32_t InItemIndex, bool bUnidentified);
		void CreateContentsInfo(const struct FST_ToolTipInfo& InToolTipInfo);
		void DeleteAllChildren();
		void ExecuteUbergraph_CommonIconToolTip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
