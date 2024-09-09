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
	 * WidgetBlueprintGeneratedClass MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UMiniMapIconDxBattle_Supplier_C : public USBMiniMapIconBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void Construct();
		void _1();
		void ExecuteUbergraph_MiniMapIconDxBattle_Supplier(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
