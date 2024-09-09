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
	 * UserDefinedStruct BP_IndoorMaterialParam.BP_IndoorMaterialParam
	 * Size -> 0x0018
	 */
	struct FBP_IndoorMaterialParam
	{
	public:
		class UMaterialInstance*                                   MaterialInstance_2_B891293B4599BF5659ACFDAAD77BF1BA;     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EmissiveColorName_8_572A189C4AC6A028B36615B50876E053;    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EmissiveScaleName_10_9D611E2E436C693D65BEC0AA6619EB32;   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
