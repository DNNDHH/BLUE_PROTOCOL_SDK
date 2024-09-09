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
	 * UserDefinedStruct ST_ForceNavigationMaskData.ST_ForceNavigationMaskData
	 * Size -> 0x0050
	 */
	struct FST_ForceNavigationMaskData
	{
	public:
		class FName                                                tag_2_D5FFFE5D4F09EED586C96E9F562DFDD3;                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlackAlpha_30_15A646C64FBB724D18B8F48948A76F8F;          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LOL3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FST_MaskPositionData>                        ViewRectangleInfos_27_BB1D151F4A4BD777EFF93AA7C19CF83F;  // 0x0010(0x0010) Edit, BlueprintVisible
		struct FVector2D                                           InputRectanglePosition_24_69B6FCAF43F45418542A6F85A820571C; // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           InputRectangleSize_26_665A6FD541FE7697C80CE0B7A17EB854;  // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FST_ArrowData>                               ArrowInfos_21_D280795D459713260A469A98283074F0;          // 0x0030(0x0010) Edit, BlueprintVisible
		class FString                                              Comment_14_8BF2707E4DC397BF469156A294E533AD;             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
