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
	 * WidgetBlueprintGeneratedClass EventShopCashBox_Item.EventShopCashBox_Item_C
	 * Size -> 0x0018 (FullSize[0x02C8] - InheritedSize[0x02B0])
	 */
	class UEventShopCashBox_Item_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          Label_Amount;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Token_Icon;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetIcon(int32_t TokenID);
		void SetAmount(int32_t Amount, bool isOver);
		void OnLoaded_32A5081B4EB2444CBED5089FF650625A(class UObject* Loaded);
		void OnLoaded_2719BDBD41C64E94F07F12919BE767BE(class UObject* Loaded);
		void LoadTexture(int32_t TokenID);
		void ExecuteUbergraph_EventShopCashBox_Item(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
