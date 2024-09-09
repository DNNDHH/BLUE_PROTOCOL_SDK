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
	 * UserDefinedStruct SystemMessageRequestData.SystemMessageRequestData
	 * Size -> 0x0022
	 */
	struct FSystemMessageRequestData
	{
	public:
		class UObject*                                             OwnerWorldContext_8_38D8D23D4A25098BB0E1B5A3DDF643C9;    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                MessageText_2_5864041846DFB7910C8F5AA286948BD3;          // 0x0008(0x0018) Edit, BlueprintVisible
		bool                                                       IsLowerPosition_10_3F487D0E441C8FA2E0C049AB62D1718E;     // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDoNotSkip_12_943A711042BFBE800D0F06AE400900EC;          // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
