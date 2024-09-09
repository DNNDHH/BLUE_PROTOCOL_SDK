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
	 * UserDefinedStruct FilterRadioButtonData.FilterRadioButtonData
	 * Size -> 0x0030
	 */
	struct FFilterRadioButtonData
	{
	public:
		bool                                                       DefaultCheck_1_F9200B94439FA30BFC5A2D8241D0F371;         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BZ0M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextId_4_22F1456447A5EEE93CAF1A8C7B991348;               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NameTextId_14_B2ADB58F4CF6B9534F1381881FEE5CC2;          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Text_7_19CCB28245FA02243D43A5B2608601CC;                 // 0x0010(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                          Texture_11_C8A74A704CD8B0CDCD003491492E2E86;             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
