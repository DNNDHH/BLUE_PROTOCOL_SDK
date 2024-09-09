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
	 * UserDefinedStruct Fishing_LineTensionStruct.Fishing_LineTensionStruct
	 * Size -> 0x0020
	 */
	struct FFishing_LineTensionStruct
	{
	public:
		float                                                      LowerRange_7_1F8697694F0136018CB068A76877982B;           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UpperRange_8_F13E653246EF4550BEAB98A5F117C44B;           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color_11_81F84919403F57F89473D78C6318145C;               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Animation_14_B51A295D49F8A196DCB4BAAAF7D04732;           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
