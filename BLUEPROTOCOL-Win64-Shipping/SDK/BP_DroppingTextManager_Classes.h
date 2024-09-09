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
	 * BlueprintGeneratedClass BP_DroppingTextManager.BP_DroppingTextManager_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UBP_DroppingTextManager_C : public USBDroppingTextManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ShowDroppingText(class UObject* WorldContextObject, const class FText& Message, ESBDroppingTextOption Option);
		void ShowDroppingTextItem(class UObject* WorldContextObject, EItemType ItemType, int32_t ItemId, int32_t Amount, ESBDroppingTextOption Option, bool bUnidentified, bool bIsBonusAdd, bool bRare);
		void ShowDroppingTextItemName(class UObject* WorldContextObject, const class FText& ItemName, int32_t Amount, ESBDroppingTextOption Option);
		void ExecuteUbergraph_BP_DroppingTextManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
