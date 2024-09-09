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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct CustomSlotData.CustomSlotData
	 * Size -> 0x0002
	 */
	struct FCustomSlotData
	{
	public:
		bool                                                       IsLoadable_1_5BDD5FED460F665C842430947EC4BA18;           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESBCustomHudLayoutSlot                                     SlotNum_4_EF96192F4A3A9D822FEB4EA207AEE9C4;              // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
