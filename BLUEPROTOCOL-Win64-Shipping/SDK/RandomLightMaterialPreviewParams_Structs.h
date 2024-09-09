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
	 * UserDefinedStruct RandomLightMaterialPreviewParams.RandomLightMaterialPreviewParams
	 * Size -> 0x0010
	 */
	struct FRandomLightMaterialPreviewParams
	{
	public:
		class UMaterialInstanceDynamic*                            MaterialInstance_2_1630306147FF97E0607ACB9D1F5D7114;     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OnTime_9_062BDE784E3EAFC75F57688D177CA0D6;               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OffTime_10_BD6924DA4D0D6D47B86B549C8D9636D5;             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
