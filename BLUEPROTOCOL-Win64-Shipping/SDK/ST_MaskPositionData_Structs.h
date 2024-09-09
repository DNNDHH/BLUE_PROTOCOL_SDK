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
	 * UserDefinedStruct ST_MaskPositionData.ST_MaskPositionData
	 * Size -> 0x0011
	 */
	struct FST_MaskPositionData
	{
	public:
		struct FVector2D                                           ViewRectanglePosition_2_BF753FAD47A63E89220F68A06DDC94CF; // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ViewRectangleSIze_4_E9DDD7DD4FAA1E511157CC97C40967B0;    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEffectShow_10_FD41E6B147820A9F199709844F0157EE;        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
