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
	 * ScriptStruct OpenColorIO.OpenColorIOColorSpace
	 * Size -> 0x0028
	 */
	struct FOpenColorIOColorSpace
	{
	public:
		class FString                                              ColorSpaceName;                                          // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColorSpaceIndex;                                         // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPRZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FamilyName;                                              // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OpenColorIO.OpenColorIOColorConversionSettings
	 * Size -> 0x0058
	 */
	struct FOpenColorIOColorConversionSettings
	{
	public:
		class UOpenColorIOConfiguration*                           ConfigurationSource;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FOpenColorIOColorSpace                              SourceColorSpace;                                        // 0x0008(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FOpenColorIOColorSpace                              DestinationColorSpace;                                   // 0x0030(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OpenColorIO.OpenColorIODisplayConfiguration
	 * Size -> 0x0060
	 */
	struct FOpenColorIODisplayConfiguration
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7L8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOpenColorIOColorConversionSettings                 ColorConfiguration;                                      // 0x0008(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
