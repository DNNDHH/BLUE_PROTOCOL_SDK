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
	 * UserDefinedStruct SendLikeErrorStruct.SendLikeErrorStruct
	 * Size -> 0x000E
	 */
	struct FSendLikeErrorStruct
	{
	public:
		int32_t                                                    ErrorNum_2_FE24F822477B4618AD754EB3B316E19A;             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ErrorText_6_10D5901F4C3B44EC0568CC960EAC04BC;            // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESendLikeError                                             ErrorAfter_10_E3D360464431073742E1FFB731DFA5B6;          // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ErrorForceClose_14_BE2E30D048A275B2DD6FB787D4ACEE93;     // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
