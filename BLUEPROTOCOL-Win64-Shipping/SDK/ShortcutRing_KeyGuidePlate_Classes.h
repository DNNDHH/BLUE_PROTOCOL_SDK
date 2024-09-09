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
	 * WidgetBlueprintGeneratedClass ShortcutRing_KeyGuidePlate.ShortcutRing_KeyGuidePlate_C
	 * Size -> 0x0070 (FullSize[0x02F8] - InheritedSize[0x0288])
	 */
	class UShortcutRing_KeyGuidePlate_C : public USBShortcutRingKeyGuidePlate
	{
	public:
		class USBTextKeyIcon_C*                                    TextEdit;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextKeyIcon_C*                                    TextSelect;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FKey                                                KeySelectKeyboard;                                       // 0x0298(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FKey                                                KeySelectGamepad;                                        // 0x02B0(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FKey                                                KeyEditKeyboard;                                         // 0x02C8(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FKey                                                KeyEditGamepad;                                          // 0x02E0(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		void OnSetup();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
