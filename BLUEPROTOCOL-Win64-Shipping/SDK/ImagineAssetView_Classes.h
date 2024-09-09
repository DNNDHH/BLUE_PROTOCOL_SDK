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
	 * WidgetBlueprintGeneratedClass ImagineAssetView.ImagineAssetView_C
	 * Size -> 0x0171 (FullSize[0x03E9] - InheritedSize[0x0278])
	 */
	class UImagineAssetView_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonEquipment2DImageParts_C*                      CommonEquipment2DImageParts;                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImagineAssetViewStatus_C*                           ImagineAssetViewStatus;                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_StackB_L_C*                                     WBP_StackB_L;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FOwnItemInfo                                        Info;                                                    // 0x0298(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       VisibleAbilityInfo;                                      // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void SetDiffInfo(const struct FOwnItemInfo& InDiffBase);
		void SetAbilityInfoVisibility(bool VisibleAbilityInfo);
		void SetUpName();
		void SetInfo(const struct FOwnItemInfo& Info);
		void Request_Image();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_ImagineAssetView(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
