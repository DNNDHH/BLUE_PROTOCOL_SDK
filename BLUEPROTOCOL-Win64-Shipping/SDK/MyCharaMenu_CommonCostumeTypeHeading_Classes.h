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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C
	 * Size -> 0x001C (FullSize[0x0294] - InheritedSize[0x0278])
	 */
	class UMyCharaMenu_CommonCostumeTypeHeading_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBRuntimeTextBlock*                                 TxtHeadingTitle;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextTableAsset*                                   HeadingTitleTextTable;                                   // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    HeadingTitleTextId;                                      // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetHeadingTitleText(const class FText& InText);
		void SetHeadingTitleTextId(int32_t InTextId);
		void SetHeadingTitleTextTable(class USBTextTableAsset* InTextTable);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
