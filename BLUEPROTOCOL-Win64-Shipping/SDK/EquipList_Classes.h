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
	 * WidgetBlueprintGeneratedClass EquipList.EquipList_C
	 * Size -> 0x0090 (FullSize[0x0340] - InheritedSize[0x02B0])
	 */
	class UEquipList_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCostumeIcon_C*                                      Accessories_BackIcon;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Accessories_BottomsIcon;                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Accessories_EarIcon;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Accessories_EyeIcon;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Accessories_FaceIcon;                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Accessories_HeadIcon;                                    // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Accessories_LeftHandIcon;                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Accessories_RightHandIcon;                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Costume_BottomsIcon;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Costume_HandIcon;                                        // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Costume_HeadIcon;                                        // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Costume_ShoesIcon;                                       // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Costume_UnderWearIcon;                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      Costume_WearIcon;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCostumeIcon_C*                                      MountImagineIcon;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedEquipList;                                      // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetOtherPCAccessoriesData(TArray<struct FOwnItemInfo>* InAccessoriesData, const struct FPlayerProfileMenuDetailCharaEquipInfo& InCharaEquipInfo);
		void SetOtherPCData(TArray<struct FOwnItemInfo>* InEquipCostumesOwnItemInfoList, TArray<struct FOwnItemInfo>* InEquipAccessoriesOwnItemInfoList, TArray<struct FOwnItemInfo>* InEquipUnderwearOwnItemInfoList, const struct FPlayerProfileMenuDetailCharaEquipInfo& InCharaEquipInfo, const struct FOwnItemInfo& InEquipMountImagineOwnItemInfo);
		void SetMountImagineData(const struct FOwnItemInfo& InMountImagine);
		void SetAccessoriesData(TArray<struct FOwnItemInfo>* InAccessoriesData);
		void SetUnderWearData(TArray<struct FOwnItemInfo>* InUnderWearData);
		void SetCostumeData(TArray<struct FOwnItemInfo>* InCostumeData);
		void SetArmorData(TArray<struct FOwnItemInfo>* InOwnItemList, class UArmorList_C* InArmorList);
		void SetData(TArray<struct FOwnItemInfo> InCostumeOwnItemInfoList, TArray<struct FOwnItemInfo>* InUnderWearOwnItemInfoList, TArray<struct FOwnItemInfo>* InAccesoriesOwnItemInfoList, const struct FOwnItemInfo& InMountImagine);
		void BndEvt__EquipList_Costume_HeadIcon_K2Node_ComponentBoundEvent_14_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Costume_WearIcon_K2Node_ComponentBoundEvent_15_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Costume_HandIcon_K2Node_ComponentBoundEvent_16_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Costume_UnderWearIcon_K2Node_ComponentBoundEvent_17_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Costume_ShoesIcon_K2Node_ComponentBoundEvent_18_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Costume_BottomsIcon_K2Node_ComponentBoundEvent_19_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Accessories_BackIcon_K2Node_ComponentBoundEvent_20_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Accessories_BottomsIcon_K2Node_ComponentBoundEvent_21_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Accessories_EarIcon_K2Node_ComponentBoundEvent_22_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Accessories_EyeIcon_K2Node_ComponentBoundEvent_23_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Accessories_FaceIcon_K2Node_ComponentBoundEvent_24_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Accessories_HeadIcon_K2Node_ComponentBoundEvent_25_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Accessories_LeftHandIcon_K2Node_ComponentBoundEvent_26_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_Accessories_RightHandIcon_K2Node_ComponentBoundEvent_27_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void BndEvt__EquipList_MountImagineIcon_K2Node_ComponentBoundEvent_28_OnClickedCostumeIcon__DelegateSignature(int32_t outItemIndex, const class FString& outUniqueId);
		void ExecuteUbergraph_EquipList(int32_t EntryPoint);
		void OnClickedEquipList__DelegateSignature(int32_t OutItemId, const class FString& outUniqueId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
