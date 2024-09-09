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
	 * WidgetBlueprintGeneratedClass P020_MarkEnemy.P020_MarkEnemy_C
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class UP020_MarkEnemy_C : public USBP020_MarkEnemy
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void ExecuteUbergraph_P020_MarkEnemy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
