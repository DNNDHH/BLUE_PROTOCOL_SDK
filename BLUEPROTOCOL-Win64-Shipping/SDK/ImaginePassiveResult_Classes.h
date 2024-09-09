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
	 * WidgetBlueprintGeneratedClass ImaginePassiveResult.ImaginePassiveResult_C
	 * Size -> 0x0160 (FullSize[0x03D8] - InheritedSize[0x0278])
	 */
	class UImaginePassiveResult_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonEquipmentStatusDescWithImageView_C*           CommonEquipmentStatusDescWithImageView;                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FOwnItemInfo                                        OnwItem;                                                 // 0x0288(0x0150) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetItemData(const struct FOwnItemInfo& Info);
		void ExecuteUbergraph_ImaginePassiveResult(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
